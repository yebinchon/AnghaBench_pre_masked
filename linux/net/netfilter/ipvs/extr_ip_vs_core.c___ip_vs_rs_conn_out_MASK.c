
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_service {int pe; } ;
struct ip_vs_pe {struct ip_vs_conn* (* conn_out ) (struct ip_vs_service*,struct ip_vs_dest*,struct sk_buff*,struct ip_vs_iphdr const*,int ,int ) ;} ;
struct ip_vs_iphdr {int saddr; int protocol; int len; } ;
struct ip_vs_dest {int svc; } ;
struct ip_vs_conn {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 int * FUNC_0 (struct sk_buff*,int ,int,int *) ;
 struct ip_vs_dest* FUNC_1 (struct netns_ipvs*,int,int ,int *,int ) ;
 void* FUNC_2 (int ) ;
 struct ip_vs_conn* FUNC_3 (struct ip_vs_service*,struct ip_vs_dest*,struct sk_buff*,struct ip_vs_iphdr const*,int ,int ) ;

__attribute__((used)) static struct ip_vs_conn *FUNC_4(unsigned int VAR_1,
           struct netns_ipvs *VAR_2,
           int VAR_3, struct sk_buff *VAR_4,
           const struct ip_vs_iphdr *VAR_5)
{
 struct ip_vs_dest *VAR_6;
 struct ip_vs_conn *VAR_7 = ((void*)0);
 __be16 VAR_8[2], *VAR_9;

 if (VAR_1 == VAR_0)
  return ((void*)0);

 VAR_9 = FUNC_0(VAR_4, VAR_5->len,
    sizeof(VAR_8), VAR_8);
 if (!VAR_9)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5->protocol,
           &VAR_5->saddr, VAR_9[0]);
 if (VAR_6) {
  struct ip_vs_service *VAR_10;
  struct ip_vs_pe *VAR_11;

  VAR_10 = FUNC_2(VAR_6->svc);
  if (VAR_10) {
   VAR_11 = FUNC_2(VAR_10->pe);
   if (VAR_11 && VAR_11->conn_out)
    VAR_7 = VAR_11->conn_out(VAR_10, VAR_6, VAR_4, VAR_5,
        VAR_9[0], VAR_9[1]);
  }
 }

 return VAR_7;
}
