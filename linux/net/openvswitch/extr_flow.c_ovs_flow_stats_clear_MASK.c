
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_stats {int lock; scalar_t__ tcp_flags; scalar_t__ byte_count; scalar_t__ packet_count; scalar_t__ used; } ;
struct sw_flow {int * stats; int cpu_used_mask; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 struct sw_flow_stats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sw_flow *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 = FUNC_0(VAR_2, &VAR_1->cpu_used_mask)) {
  struct sw_flow_stats *VAR_3 = FUNC_1(VAR_1->stats[VAR_2]);

  if (VAR_3) {
   FUNC_2(&VAR_3->lock);
   VAR_3->used = 0;
   VAR_3->packet_count = 0;
   VAR_3->byte_count = 0;
   VAR_3->tcp_flags = 0;
   FUNC_3(&VAR_3->lock);
  }
 }
}
