
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {int * data; scalar_t__ size; } ;


 int FUNC_0 (char*,void*,unsigned long) ;
 int FUNC_1 (struct frame_index*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct frame_index *VAR_0)
{
 FUNC_0("fi_exit: %p and %lu", (void*)VAR_0->data, (unsigned long)VAR_0->size);
 if(VAR_0->size && VAR_0->data != ((void*)0)) FUNC_2(VAR_0->data);

 FUNC_1(VAR_0);
}
