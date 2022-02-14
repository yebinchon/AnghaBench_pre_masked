
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {int step; int next; scalar_t__ grow_size; scalar_t__ size; scalar_t__ fill; int * data; } ;


 int FUNC_0 (struct frame_index*) ;

void FUNC_1(struct frame_index *VAR_0)
{
 VAR_0->data = ((void*)0);
 VAR_0->step = 1;
 VAR_0->fill = 0;
 VAR_0->size = 0;
 VAR_0->grow_size = 0;
 VAR_0->next = FUNC_0(VAR_0);
}
