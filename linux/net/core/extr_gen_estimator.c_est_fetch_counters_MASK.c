
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_rate_estimator {scalar_t__ stats_lock; int bstats; int cpu_bstats; int running; } ;
struct gnet_stats_basic_packed {int dummy; } ;


 int FUNC_0 (int ,struct gnet_stats_basic_packed*,int ,int ) ;
 int FUNC_1 (struct gnet_stats_basic_packed*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_rate_estimator *VAR_0,
          struct gnet_stats_basic_packed *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 if (VAR_0->stats_lock)
  FUNC_2(VAR_0->stats_lock);

 FUNC_0(VAR_0->running, VAR_1, VAR_0->cpu_bstats, VAR_0->bstats);

 if (VAR_0->stats_lock)
  FUNC_3(VAR_0->stats_lock);

}
