
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FieldCount; } ;
typedef int PINFCONTEXT ;
typedef TYPE_1__* PINFCACHELINE ;
typedef int LONG ;


 TYPE_1__* FUNC_0 (int ) ;

LONG
FUNC_1(PINFCONTEXT VAR_0)
{
  PINFCACHELINE VAR_1;

  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 == ((void*)0))
    return 0;
  return VAR_1->FieldCount;
}
