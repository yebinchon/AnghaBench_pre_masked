
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {size_t fill; scalar_t__ data; scalar_t__ size; int next; int step; } ;
typedef int off_t ;


 int FUNC_0 (char*,unsigned long,unsigned long,void*) ;
 int FUNC_1 (struct frame_index*) ;
 int FUNC_2 (struct frame_index*,size_t) ;
 int FUNC_3 (scalar_t__,int *,size_t) ;

int FUNC_4(struct frame_index *VAR_0, off_t *VAR_1, off_t VAR_2, size_t VAR_3)
{
 if(FUNC_2(VAR_0, VAR_3) == -1) return -1;
 VAR_0->step = VAR_2;
 if(VAR_1 != ((void*)0))
 {
  FUNC_3(VAR_0->data, VAR_1, VAR_3*sizeof(off_t));
  VAR_0->fill = VAR_3;
 }
 else
 {

  VAR_0->fill = 0;
 }
 VAR_0->next = FUNC_1(VAR_0);
 FUNC_0("set new index of fill %lu, size %lu at %p",
 (unsigned long)VAR_0->fill, (unsigned long)VAR_0->size, (void*)VAR_0->data);
 return 0;
}
