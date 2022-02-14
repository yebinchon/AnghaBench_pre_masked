
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ordered_events {void* data; int deliver; scalar_t__ cur_alloc_size; scalar_t__ max_alloc_size; int to_free; int cache; int events; } ;
typedef int ordered_events__deliver_t ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ordered_events *VAR_0, ordered_events__deliver_t VAR_1,
     void *VAR_2)
{
 FUNC_0(&VAR_0->events);
 FUNC_0(&VAR_0->cache);
 FUNC_0(&VAR_0->to_free);
 VAR_0->max_alloc_size = (u64) -1;
 VAR_0->cur_alloc_size = 0;
 VAR_0->deliver = VAR_1;
 VAR_0->data = VAR_2;
}
