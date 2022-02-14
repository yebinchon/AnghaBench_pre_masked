
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int dummy; } ;


 scalar_t__ FUNC_0 (struct netns_ipvs*,int,struct sk_buff const*,struct ip_vs_iphdr const*,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_1 (struct ip_vs_conn_param*) ;

struct ip_vs_conn *
FUNC_2(struct netns_ipvs *VAR_0, int VAR_1,
   const struct sk_buff *VAR_2,
   const struct ip_vs_iphdr *VAR_3)
{
 struct ip_vs_conn_param VAR_4;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4))
  return ((void*)0);

 return FUNC_1(&VAR_4);
}
