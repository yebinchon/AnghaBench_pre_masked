
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; struct TYPE_4__* parent; } ;
typedef TYPE_1__ GinBtreeStack ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(GinBtreeStack *VAR_1)
{
 while (VAR_1)
 {
  GinBtreeStack *VAR_2 = VAR_1->parent;

  if (VAR_1->buffer != VAR_0)
   FUNC_0(VAR_1->buffer);

  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}
