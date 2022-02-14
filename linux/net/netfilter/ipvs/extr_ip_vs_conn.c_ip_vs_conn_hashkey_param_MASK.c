
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_conn_param {int protocol; int af; int ipvs; int vport; union nf_inet_addr* vaddr; int cport; union nf_inet_addr* caddr; TYPE_1__* pe; scalar_t__ pe_data; } ;
typedef int __be16 ;
struct TYPE_2__ {unsigned int (* hashkey_raw ) (struct ip_vs_conn_param const*,int ,int) ;} ;


 unsigned int FUNC_0 (int ,int ,int ,union nf_inet_addr const*,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct ip_vs_conn_param const*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(const struct ip_vs_conn_param *VAR_2,
          bool VAR_3)
{
 const union nf_inet_addr *VAR_4;
 __be16 VAR_5;

 if (VAR_2->pe_data && VAR_2->pe->hashkey_raw)
  return VAR_2->pe->hashkey_raw(VAR_2, VAR_0, VAR_3) &
   VAR_1;

 if (FUNC_1(!VAR_3)) {
  VAR_4 = VAR_2->caddr;
  VAR_5 = VAR_2->cport;
 } else {
  VAR_4 = VAR_2->vaddr;
  VAR_5 = VAR_2->vport;
 }

 return FUNC_0(VAR_2->ipvs, VAR_2->af, VAR_2->protocol, VAR_4, VAR_5);
}
