
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_iphdr {int saddr; int daddr; int protocol; int len; } ;
struct ip_vs_conn_param {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;


 int * FUNC_0 (struct sk_buff const*,int ,int,int *) ;
 int FUNC_1 (struct netns_ipvs*,int,int ,int *,int ,int *,int ,struct ip_vs_conn_param*) ;
 int FUNC_2 (struct ip_vs_iphdr const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct netns_ipvs *VAR_0,
       int VAR_1, const struct sk_buff *VAR_2,
       const struct ip_vs_iphdr *VAR_3,
       struct ip_vs_conn_param *VAR_4)
{
 __be16 VAR_5[2], *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3->len, sizeof(VAR_5), VAR_5);
 if (VAR_6 == ((void*)0))
  return 1;

 if (FUNC_3(!FUNC_2(VAR_3)))
  FUNC_1(VAR_0, VAR_1, VAR_3->protocol, &VAR_3->saddr,
          VAR_6[0], &VAR_3->daddr, VAR_6[1], VAR_4);
 else
  FUNC_1(VAR_0, VAR_1, VAR_3->protocol, &VAR_3->daddr,
          VAR_6[1], &VAR_3->saddr, VAR_6[0], VAR_4);
 return 0;
}
