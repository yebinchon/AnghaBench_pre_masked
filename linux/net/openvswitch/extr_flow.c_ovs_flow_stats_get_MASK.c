
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_stats {unsigned long used; int lock; scalar_t__ byte_count; scalar_t__ packet_count; int tcp_flags; } ;
struct sw_flow {int * stats; int cpu_used_mask; } ;
struct ovs_flow_stats {int n_bytes; int n_packets; } ;
typedef int __be16 ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct ovs_flow_stats*,int ,int) ;
 int VAR_0 ;
 struct sw_flow_stats* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

void FUNC_6(const struct sw_flow *VAR_1,
   struct ovs_flow_stats *VAR_2,
   unsigned long *VAR_3, __be16 *VAR_4)
{
 int VAR_5;

 *VAR_3 = 0;
 *VAR_4 = 0;
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 = FUNC_0(VAR_5, &VAR_1->cpu_used_mask)) {
  struct sw_flow_stats *VAR_6 = FUNC_2(VAR_1->stats[VAR_5]);

  if (VAR_6) {



   FUNC_3(&VAR_6->lock);
   if (!*VAR_3 || FUNC_5(VAR_6->used, *VAR_3))
    *VAR_3 = VAR_6->used;
   *VAR_4 |= VAR_6->tcp_flags;
   VAR_2->n_packets += VAR_6->packet_count;
   VAR_2->n_bytes += VAR_6->byte_count;
   FUNC_4(&VAR_6->lock);
  }
 }
}
