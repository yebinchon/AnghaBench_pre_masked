
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int nLen; int nBuffer; scalar_t__* szData; } ;
typedef TYPE_1__ ME_String ;


 int FUNC_0 (int) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int ) ;

ME_String *FUNC_4(int VAR_1)
{
  ME_String *VAR_2 = FUNC_3( VAR_0 );

  if (!VAR_2) return ((void*)0);
  VAR_2->nLen = VAR_1;
  VAR_2->nBuffer = FUNC_0(VAR_2->nLen + 1);
  VAR_2->szData = FUNC_1( VAR_2->nBuffer * sizeof(WCHAR) );
  if (!VAR_2->szData)
  {
    FUNC_2( VAR_2 );
    return ((void*)0);
  }
  VAR_2->szData[VAR_2->nLen] = 0;
  return VAR_2;
}
