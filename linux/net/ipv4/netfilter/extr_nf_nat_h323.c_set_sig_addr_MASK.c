
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union nf_inet_addr {scalar_t__ ip; } ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__* sig_port; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
typedef int TransportAddress ;
struct TYPE_10__ {scalar_t__ ip; } ;
struct TYPE_7__ {TYPE_5__ u3; } ;
struct TYPE_6__ {TYPE_5__ u3; } ;
struct TYPE_8__ {TYPE_2__ src; TYPE_1__ dst; } ;
struct TYPE_9__ {TYPE_3__ tuple; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,scalar_t__*) ;
 struct nf_ct_h323_master* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,unsigned int,unsigned char**,int ,int *,TYPE_5__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, struct nf_conn *VAR_1,
   enum ip_conntrack_info VAR_2,
   unsigned int VAR_3, unsigned char **VAR_4,
   TransportAddress *VAR_5, int VAR_6)
{
 const struct nf_ct_h323_master *VAR_7 = FUNC_2(VAR_1);
 int VAR_8 = FUNC_0(VAR_2);
 int VAR_9;
 __be16 VAR_10;
 union nf_inet_addr VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (FUNC_1(VAR_1, *VAR_4, &VAR_5[VAR_9], &VAR_11, &VAR_10)) {
   if (VAR_11.ip == VAR_1->tuplehash[VAR_8].tuple.src.u3.ip &&
       VAR_10 == VAR_7->sig_port[VAR_8]) {



    if (VAR_9 > 0 &&
        FUNC_1(VAR_1, *VAR_4, &VAR_5[0],
        &VAR_11, &VAR_10) &&
        (FUNC_3(VAR_11.ip) & 0xff000000) == 0x7f000000)
     VAR_9 = 0;

    FUNC_4("nf_nat_ras: set signal address %pI4:%hu->%pI4:%hu\n",
      &VAR_11.ip, VAR_10,
      &VAR_1->tuplehash[!VAR_8].tuple.dst.u3.ip,
      VAR_7->sig_port[!VAR_8]);
    return FUNC_5(VAR_0, VAR_3, VAR_4, 0,
           &VAR_5[VAR_9],
           &VAR_1->tuplehash[!VAR_8].
           tuple.dst.u3,
           VAR_7->sig_port[!VAR_8]);
   } else if (VAR_11.ip == VAR_1->tuplehash[VAR_8].tuple.dst.u3.ip &&
       VAR_10 == VAR_7->sig_port[VAR_8]) {

    FUNC_4("nf_nat_ras: set signal address %pI4:%hu->%pI4:%hu\n",
      &VAR_11.ip, VAR_10,
      &VAR_1->tuplehash[!VAR_8].tuple.src.u3.ip,
      VAR_7->sig_port[!VAR_8]);
    return FUNC_5(VAR_0, VAR_3, VAR_4, 0,
           &VAR_5[VAR_9],
           &VAR_1->tuplehash[!VAR_8].
           tuple.src.u3,
           VAR_7->sig_port[!VAR_8]);
   }
  }
 }

 return 0;
}
