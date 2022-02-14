
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_iphdr {int saddr; int daddr; } ;
struct ip_vs_conn_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netns_ipvs*,int,int ,int *,int ,int *,int ,struct ip_vs_conn_param*) ;
 int FUNC_2 (struct ip_vs_iphdr const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct netns_ipvs *VAR_2, int VAR_3,
        const struct ip_vs_iphdr *VAR_4,
        struct ip_vs_conn_param *VAR_5)
{
 if (FUNC_3(!FUNC_2(VAR_4)))
  FUNC_1(VAR_2, VAR_3, VAR_0,
          &VAR_4->saddr, FUNC_0(VAR_1),
          &VAR_4->daddr, FUNC_0(VAR_1), VAR_5);
 else
  FUNC_1(VAR_2, VAR_3, VAR_0,
          &VAR_4->daddr, FUNC_0(VAR_1),
          &VAR_4->saddr, FUNC_0(VAR_1), VAR_5);
}
