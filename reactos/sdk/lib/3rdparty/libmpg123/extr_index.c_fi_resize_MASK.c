
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {size_t size; size_t fill; int * data; int next; } ;
typedef int off_t ;


 int FUNC_0 (char*,unsigned long,void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct frame_index*) ;
 int FUNC_3 (struct frame_index*) ;
 int * FUNC_4 (int *,size_t) ;

int FUNC_5(struct frame_index *VAR_0, size_t VAR_1)
{
 off_t *VAR_2 = ((void*)0);
 if(VAR_1 == VAR_0->size) return 0;

 if(VAR_1 > 0 && VAR_1 < VAR_0->size)
 {
  while(VAR_0->fill > VAR_1){ FUNC_3(VAR_0); }
 }

 VAR_2 = FUNC_4(VAR_0->data, VAR_1*sizeof(off_t));
 if(VAR_1 == 0 || VAR_2 != ((void*)0))
 {
  VAR_0->data = VAR_2;
  VAR_0->size = VAR_1;
  if(VAR_0->fill > VAR_0->size) VAR_0->fill = VAR_0->size;

  VAR_0->next = FUNC_2(VAR_0);
  FUNC_0("new index of size %lu at %p", (unsigned long)VAR_0->size, (void*)VAR_0->data);
  return 0;
 }
 else
 {
  FUNC_1("failed to resize index!");
  return -1;
 }
}
