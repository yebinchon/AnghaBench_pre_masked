
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int nLen; int szData; } ;
typedef TYPE_1__ ME_String ;
typedef int LPCWSTR ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

ME_String *FUNC_2(LPCWSTR VAR_0, int VAR_1)
{
  ME_String *VAR_2 = FUNC_0(VAR_1);

  if (!VAR_2) return ((void*)0);
  FUNC_1(VAR_2->szData, VAR_0, VAR_2->nLen * sizeof(WCHAR));
  return VAR_2;
}
