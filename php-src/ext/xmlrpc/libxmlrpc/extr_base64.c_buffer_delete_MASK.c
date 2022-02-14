
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_st {int * data; int * ptr; scalar_t__ offset; scalar_t__ length; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct buffer_st *VAR_0)
{
  FUNC_0(VAR_0->data);
  VAR_0->length = 0;
  VAR_0->offset = 0;
  VAR_0->ptr = ((void*)0);
  VAR_0->data = ((void*)0);
}
