
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_heap {scalar_t__ heap_sz; scalar_t__ heap_cnt; int heap_array; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct auxtrace_heap *VAR_0)
{
 FUNC_0(&VAR_0->heap_array);
 VAR_0->heap_cnt = 0;
 VAR_0->heap_sz = 0;
}
