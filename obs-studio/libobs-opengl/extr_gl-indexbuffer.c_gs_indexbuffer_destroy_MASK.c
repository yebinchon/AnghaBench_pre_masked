
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; scalar_t__ buffer; } ;
typedef TYPE_1__ gs_indexbuffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,scalar_t__*) ;

void FUNC_2(gs_indexbuffer_t *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->buffer)
   FUNC_1(1, &VAR_0->buffer);

  FUNC_0(VAR_0->data);
  FUNC_0(VAR_0);
 }
}
