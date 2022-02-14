
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {int elem_size; int used; int alloced; int alloc_align; void* list; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,int,int ) ;
 int FUNC_1 (void*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (struct snd_array*,int ) ;

void *FUNC_4(struct snd_array *VAR_1)
{
 if (FUNC_2(!VAR_1->elem_size))
  return ((void*)0);
 if (VAR_1->used >= VAR_1->alloced) {
  int VAR_2 = VAR_1->alloced + VAR_1->alloc_align;
  int VAR_3 = VAR_1->alloced * VAR_1->elem_size;
  int VAR_4 = (VAR_2 + 1) * VAR_1->elem_size;
  void *VAR_5;
  if (FUNC_2(VAR_2 >= 4096))
   return ((void*)0);
  VAR_5 = FUNC_0(VAR_1->list, VAR_4, VAR_0);
  if (!VAR_5)
   return ((void*)0);
  FUNC_1(VAR_5 + VAR_3, 0, VAR_4 - VAR_3);
  VAR_1->list = VAR_5;
  VAR_1->alloced = VAR_2;
 }
 return FUNC_3(VAR_1, VAR_1->used++);
}
