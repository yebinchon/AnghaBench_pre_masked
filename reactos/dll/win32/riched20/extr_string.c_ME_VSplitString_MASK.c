
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nBuffer; int nLen; char* szData; } ;
typedef TYPE_1__ ME_String ;


 TYPE_1__* FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

ME_String *FUNC_2(ME_String *VAR_0, int VAR_1)
{
  ME_String *VAR_2;

  FUNC_1(VAR_0->nBuffer);
  FUNC_1(VAR_1>=0);
  FUNC_1(VAR_1<=VAR_0->nLen);

  VAR_2 = FUNC_0(VAR_0->szData+VAR_1, VAR_0->nLen-VAR_1);
  if (!VAR_2) return ((void*)0);

  VAR_0->nLen = VAR_1;
  VAR_0->szData[VAR_1] = '\0';
  return VAR_2;
}
