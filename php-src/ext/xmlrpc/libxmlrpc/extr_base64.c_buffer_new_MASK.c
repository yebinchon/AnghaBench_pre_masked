
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_st {int length; scalar_t__ offset; scalar_t__* data; scalar_t__* ptr; } ;


 scalar_t__* FUNC_0 (int) ;

void FUNC_1(struct buffer_st *VAR_0)
{
  VAR_0->length = 512;
  VAR_0->data = FUNC_0(sizeof(char)*(VAR_0->length));
  VAR_0->data[0] = 0;
  VAR_0->ptr = VAR_0->data;
  VAR_0->offset = 0;
}
