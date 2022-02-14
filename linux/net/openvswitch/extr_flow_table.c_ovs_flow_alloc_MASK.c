
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_stats {int lock; } ;
struct sw_flow {int stats_last_writer; int cpu_used_mask; int * stats; } ;


 int VAR_0 ;
 struct sw_flow* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sw_flow_stats*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sw_flow_stats* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,struct sw_flow*) ;
 struct sw_flow* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

struct sw_flow *FUNC_8(void)
{
 struct sw_flow *VAR_6;
 struct sw_flow_stats *VAR_7;

 VAR_6 = FUNC_5(VAR_4, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->stats_last_writer = -1;


 VAR_7 = FUNC_3(VAR_5,
          VAR_1 | VAR_3,
          FUNC_6(0) ? 0 : VAR_2);
 if (!VAR_7)
  goto err;

 FUNC_7(&VAR_7->lock);

 FUNC_1(VAR_6->stats[0], VAR_7);

 FUNC_2(0, &VAR_6->cpu_used_mask);

 return VAR_6;
err:
 FUNC_4(VAR_4, VAR_6);
 return FUNC_0(-VAR_0);
}
