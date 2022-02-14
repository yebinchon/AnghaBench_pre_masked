
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_heap_item {scalar_t__ ordinal; int queue_nr; } ;
struct auxtrace_heap {unsigned int heap_cnt; struct auxtrace_heap_item* heap_array; } ;


 int FUNC_0 (struct auxtrace_heap_item*,unsigned int,int ,scalar_t__) ;

void FUNC_1(struct auxtrace_heap *VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3 = VAR_0->heap_cnt;
 struct auxtrace_heap_item *VAR_4;

 if (!VAR_3)
  return;

 VAR_0->heap_cnt -= 1;

 VAR_4 = VAR_0->heap_array;

 VAR_1 = 0;
 while (1) {
  unsigned int VAR_5, VAR_6;

  VAR_5 = (VAR_1 << 1) + 1;
  if (VAR_5 >= VAR_3)
   break;
  VAR_6 = VAR_5 + 1;
  if (VAR_6 >= VAR_3) {
   VAR_4[VAR_1] = VAR_4[VAR_5];
   return;
  }
  if (VAR_4[VAR_5].ordinal < VAR_4[VAR_6].ordinal) {
   VAR_4[VAR_1] = VAR_4[VAR_5];
   VAR_1 = VAR_5;
  } else {
   VAR_4[VAR_1] = VAR_4[VAR_6];
   VAR_1 = VAR_6;
  }
 }

 VAR_2 = VAR_3 - 1;
 FUNC_0(VAR_4, VAR_1, VAR_4[VAR_2].queue_nr,
    VAR_4[VAR_2].ordinal);
}
