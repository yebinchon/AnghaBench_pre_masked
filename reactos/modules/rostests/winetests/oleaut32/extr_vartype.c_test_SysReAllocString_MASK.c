
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLen; int szString; } ;
typedef char OLECHAR ;
typedef TYPE_1__* LPINTERNAL_BSTR ;
typedef int * BSTR ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
  const OLECHAR VAR_0[5] = { 'T','e','s','t','\0' };
  const OLECHAR VAR_1[2] = { 'x','\0' };
  const OLECHAR VAR_2[7] = { 'L','a','r','g','e','r','\0' };
  BSTR VAR_3;

  VAR_3 = FUNC_1(VAR_0, 4);
  FUNC_5 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    LPINTERNAL_BSTR VAR_4;
    int VAR_5;

    VAR_4 = FUNC_0(VAR_3);
    FUNC_5 (VAR_4->dwLen == 8, "Expected 8, got %d\n", VAR_4->dwLen);
    FUNC_5 (!FUNC_4(VAR_4->szString, VAR_0), "String different\n");

    VAR_5 = FUNC_3(&VAR_3, VAR_1);
    FUNC_5 (VAR_5 == 1, "Expected 1, got %d\n", VAR_5);


    VAR_4 = FUNC_0(VAR_3);
    FUNC_5 (VAR_4->dwLen == 2, "Expected 2, got %d\n", VAR_4->dwLen);
    FUNC_5 (!FUNC_4(VAR_4->szString, VAR_1), "String different\n");

    VAR_5 = FUNC_3(&VAR_3, VAR_2);
    FUNC_5 (VAR_5 == 1, "Expected 1, got %d\n", VAR_5);


    VAR_4 = FUNC_0(VAR_3);
    FUNC_5 (VAR_4->dwLen == 12, "Expected 12, got %d\n", VAR_4->dwLen);
    FUNC_5 (!FUNC_4(VAR_4->szString, VAR_2), "String different\n");

    FUNC_2(VAR_3);
  }
}
