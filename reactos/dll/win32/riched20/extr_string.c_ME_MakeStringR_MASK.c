
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int * szData; } ;
typedef TYPE_1__ ME_String ;


 TYPE_1__* FUNC_0 (int) ;

ME_String *FUNC_1(WCHAR VAR_0, int VAR_1)
{
  int VAR_2;
  ME_String *VAR_3 = FUNC_0(VAR_1);

  if (!VAR_3) return ((void*)0);
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    VAR_3->szData[VAR_2] = VAR_0;
  return VAR_3;
}
