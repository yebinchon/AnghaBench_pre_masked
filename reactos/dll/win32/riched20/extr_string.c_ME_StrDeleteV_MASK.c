
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int nBuffer; int nLen; scalar_t__ szData; } ;
typedef TYPE_1__ ME_String ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void FUNC_2(ME_String *VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3 = VAR_1 + VAR_2;

  FUNC_0(VAR_0->nBuffer);
  FUNC_0(VAR_2 >= 0);
  FUNC_0(VAR_1 >= 0);
  FUNC_0(VAR_3 <= VAR_0->nLen);

  FUNC_1(VAR_0->szData + VAR_1, VAR_0->szData + VAR_3,
          (VAR_0->nLen - VAR_3 + 1) * sizeof(WCHAR));
  VAR_0->nLen -= VAR_2;
}
