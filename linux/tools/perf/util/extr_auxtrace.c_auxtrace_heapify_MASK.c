
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct auxtrace_heap_item {scalar_t__ ordinal; unsigned int queue_nr; } ;



__attribute__((used)) static void FUNC_0(struct auxtrace_heap_item *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2,
        u64 VAR_3)
{
 unsigned int VAR_4;

 while (VAR_1) {
  VAR_4 = (VAR_1 - 1) >> 1;
  if (VAR_0[VAR_4].ordinal <= VAR_3)
   break;
  VAR_0[VAR_1] = VAR_0[VAR_4];
  VAR_1 = VAR_4;
 }
 VAR_0[VAR_1].queue_nr = VAR_2;
 VAR_0[VAR_1].ordinal = VAR_3;
}
