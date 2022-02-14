
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ QUERYTYPE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

bool
FUNC_2(QUERYTYPE *VAR_0)
{
 if (VAR_0->size <= 0)
  return 0;
 return FUNC_1(FUNC_0(VAR_0) + VAR_0->size - 1);
}
