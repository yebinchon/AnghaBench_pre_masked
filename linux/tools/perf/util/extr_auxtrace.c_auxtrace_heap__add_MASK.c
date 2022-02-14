
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct auxtrace_heap_item {int dummy; } ;
struct auxtrace_heap {unsigned int heap_sz; int heap_cnt; struct auxtrace_heap_item* heap_array; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auxtrace_heap_item*,int ,unsigned int,int ) ;
 struct auxtrace_heap_item* FUNC_1 (struct auxtrace_heap_item*,unsigned int) ;

int FUNC_2(struct auxtrace_heap *VAR_2, unsigned int VAR_3,
         u64 VAR_4)
{
 struct auxtrace_heap_item *VAR_5;

 if (VAR_3 >= VAR_2->heap_sz) {
  unsigned int VAR_6 = VAR_0;

  while (VAR_6 <= VAR_3)
   VAR_6 <<= 1;
  VAR_5 = FUNC_1(VAR_2->heap_array,
         VAR_6 * sizeof(struct auxtrace_heap_item));
  if (!VAR_5)
   return -VAR_1;
  VAR_2->heap_array = VAR_5;
  VAR_2->heap_sz = VAR_6;
 }

 FUNC_0(VAR_2->heap_array, VAR_2->heap_cnt++, VAR_3, VAR_4);

 return 0;
}
