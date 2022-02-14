
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLen; int szString; } ;
typedef char OLECHAR ;
typedef TYPE_1__* LPINTERNAL_BSTR ;
typedef int DWORD_PTR ;
typedef int * BSTR ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
  const OLECHAR VAR_0[5] = { 'T','e','s','t','\0' };
  BSTR VAR_1;

  VAR_1 = FUNC_1(((void*)0));
  FUNC_4 (VAR_1 == ((void*)0), "Expected NULL, got %p\n", VAR_1);

  VAR_1 = FUNC_1(VAR_0);
  FUNC_4 (VAR_1 != ((void*)0), "Expected non-NULL\n");
  if (VAR_1)
  {
    LPINTERNAL_BSTR VAR_2 = FUNC_0(VAR_1);
    DWORD_PTR VAR_3 = (DWORD_PTR)VAR_1;
    int VAR_4 = sizeof(void *);

    FUNC_4 (VAR_2->dwLen == 8, "Expected 8, got %d\n", VAR_2->dwLen);
    FUNC_4 (!FUNC_3(VAR_2->szString, VAR_0), "String different\n");
    FUNC_4 ((VAR_3 & ~(VAR_4-1)) == VAR_3, "Not aligned to %d\n", VAR_4);
    FUNC_2(VAR_1);
  }
}
