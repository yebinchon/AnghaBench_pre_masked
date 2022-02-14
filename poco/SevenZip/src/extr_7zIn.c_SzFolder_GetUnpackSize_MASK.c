
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_5__ {int * UnpackSizes; } ;
typedef TYPE_1__ CSzFolder ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

UInt64 FUNC_2(CSzFolder *VAR_0)
{
  int VAR_1 = (int)FUNC_1(VAR_0);
  if (VAR_1 == 0)
    return 0;
  for (VAR_1--; VAR_1 >= 0; VAR_1--)
    if (FUNC_0(VAR_0, VAR_1) < 0)
      return VAR_0->UnpackSizes[VAR_1];

  return 0;
}
