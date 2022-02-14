
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {size_t asize; void** item; size_t size; } ;


 int FUNC_0 (void**,int,size_t) ;
 void** FUNC_1 (void**,size_t) ;

int
FUNC_2(struct stack *VAR_0, size_t VAR_1)
{
 void **VAR_2;

 if (VAR_0->asize >= VAR_1)
  return 0;

 VAR_2 = FUNC_1(VAR_0->item, VAR_1 * sizeof(void *));
 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_0(VAR_2 + VAR_0->asize, 0x0,
  (VAR_1 - VAR_0->asize) * sizeof(void *));

 VAR_0->item = VAR_2;
 VAR_0->asize = VAR_1;

 if (VAR_0->size > VAR_1)
  VAR_0->size = VAR_1;

 return 0;
}
