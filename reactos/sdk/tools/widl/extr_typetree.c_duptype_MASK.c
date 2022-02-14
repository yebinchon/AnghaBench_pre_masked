
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_1__ type_t ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;

type_t *FUNC_2(type_t *VAR_0, int VAR_1)
{
  type_t *VAR_2 = FUNC_0();

  *VAR_2 = *VAR_0;
  if (VAR_1 && VAR_0->name)
    VAR_2->name = FUNC_1(VAR_0->name);

  return VAR_2;
}
