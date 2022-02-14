
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ name; } ;
typedef TYPE_1__ type_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

int FUNC_4(type_t *VAR_0)
{
  return (FUNC_3(VAR_0) ||
          (!FUNC_1(VAR_0) && (!FUNC_0(VAR_0) || !FUNC_2(VAR_0) || VAR_0->name)));
}
