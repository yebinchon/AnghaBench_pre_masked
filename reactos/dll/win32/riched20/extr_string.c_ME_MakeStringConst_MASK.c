
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int nLen; scalar_t__ nBuffer; int * szData; } ;
typedef TYPE_1__ ME_String ;


 TYPE_1__* FUNC_0 (int *) ;

ME_String *FUNC_1(const WCHAR *VAR_0, int VAR_1)
{
  ME_String *VAR_2 = FUNC_0( ((void*)0) );
  if (!VAR_2) return ((void*)0);

  VAR_2->szData = (WCHAR *)VAR_0;
  VAR_2->nLen = VAR_1;
  VAR_2->nBuffer = 0;
  return VAR_2;
}
