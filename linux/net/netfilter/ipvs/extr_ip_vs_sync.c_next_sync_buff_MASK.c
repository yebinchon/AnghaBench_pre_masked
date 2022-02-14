
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ipvs_master_sync_state {int dummy; } ;
struct ip_vs_sync_buff {int dummy; } ;


 int VAR_0 ;
 struct ip_vs_sync_buff* FUNC_0 (struct netns_ipvs*,struct ipvs_master_sync_state*,int ) ;
 struct ip_vs_sync_buff* FUNC_1 (struct netns_ipvs*,struct ipvs_master_sync_state*) ;

__attribute__((used)) static inline struct ip_vs_sync_buff *
FUNC_2(struct netns_ipvs *VAR_1, struct ipvs_master_sync_state *VAR_2)
{
 struct ip_vs_sync_buff *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_2, VAR_0);
}
