
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_event {scalar_t__ time_delta; int * array; } ;


 int VAR_0 ;

u64 FUNC_0(struct ring_buffer_event *VAR_1)
{
 u64 VAR_2;

 VAR_2 = VAR_1->array[0];
 VAR_2 <<= VAR_0;
 VAR_2 += VAR_1->time_delta;

 return VAR_2;
}
