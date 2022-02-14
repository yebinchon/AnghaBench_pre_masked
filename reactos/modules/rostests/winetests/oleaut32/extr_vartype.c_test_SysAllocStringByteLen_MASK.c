
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwLen; int * szString; } ;
typedef char OLECHAR ;
typedef TYPE_1__* LPINTERNAL_BSTR ;
typedef char* LPCSTR ;
typedef char CHAR ;
typedef int * BSTR ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int * FUNC_4 (char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
  const OLECHAR VAR_0[10] = { 'T','e','s','t','\0' };
  const CHAR VAR_1[6] = { 'T','e','s','t','\0','?' };
  char *VAR_2;
  BSTR VAR_3;
  int VAR_4;

  if (sizeof(void *) == 4)
  {
      VAR_3 = FUNC_4(VAR_1, 0x80000000);
      FUNC_9 (VAR_3 == ((void*)0), "Expected NULL, got %p\n", VAR_3);
  }

  VAR_3 = FUNC_4(VAR_1, 0xffffffff);
  FUNC_9 (VAR_3 == ((void*)0), "Expected NULL, got %p\n", VAR_3);

  VAR_3 = FUNC_4(((void*)0), 0);
  FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    LPINTERNAL_BSTR VAR_5 = FUNC_0(VAR_3);

    FUNC_9 (VAR_5->dwLen == 0, "Expected 0, got %d\n", VAR_5->dwLen);
    FUNC_9 (!VAR_5->szString[0], "String not empty\n");
    FUNC_5(VAR_3);
  }

  VAR_3 = FUNC_4(VAR_1, 4);
  FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    LPINTERNAL_BSTR VAR_6 = FUNC_0(VAR_3);

    FUNC_9 (VAR_6->dwLen == 4, "Expected 4, got %d\n", VAR_6->dwLen);
    FUNC_9 (!FUNC_6((LPCSTR)VAR_6->szString, VAR_1), "String different\n");
    FUNC_5(VAR_3);
  }


  VAR_3 = FUNC_4(VAR_1, 3);
  FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    const CHAR VAR_7[4] = { 'T','e','s','\0' };
    LPINTERNAL_BSTR VAR_8 = FUNC_0(VAR_3);

    FUNC_9 (VAR_8->dwLen == 3, "Expected 3, got %d\n", VAR_8->dwLen);
    FUNC_9 (!FUNC_6((LPCSTR)VAR_8->szString, VAR_7), "String different\n");
    FUNC_9 (!VAR_8->szString[2], "String not terminated\n");
    FUNC_5(VAR_3);
  }

  VAR_3 = FUNC_4((LPCSTR)VAR_0, 8);
  FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    LPINTERNAL_BSTR VAR_9 = FUNC_0(VAR_3);

    FUNC_9 (VAR_9->dwLen == 8, "Expected 8, got %d\n", VAR_9->dwLen);
    FUNC_9 (!FUNC_7(VAR_9->szString, VAR_0), "String different\n");
    FUNC_5(VAR_3);
  }


  VAR_2 = FUNC_2(FUNC_1(), 0, 1025);
  FUNC_9 (VAR_2 != ((void*)0), "Expected non-NULL\n");
  for (VAR_4 = 0; VAR_4 < 1024; VAR_4++)
  {
    LPINTERNAL_BSTR VAR_10;

    VAR_3 = FUNC_4(((void*)0), VAR_4);
    FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
    VAR_10 = FUNC_0(VAR_3);
    FUNC_9 (VAR_10->dwLen == VAR_4, "Expected %d, got %d\n", VAR_4, VAR_10->dwLen);
    FUNC_9 (!VAR_10->szString[(VAR_4+sizeof(WCHAR)-1)/sizeof(WCHAR)], "String not terminated\n");
    FUNC_5(VAR_3);

    FUNC_8(VAR_2, 0xaa, 1025);
    VAR_3 = FUNC_4(VAR_2, VAR_4);
    FUNC_9 (VAR_3 != ((void*)0), "Expected non-NULL\n");
    VAR_10 = FUNC_0(VAR_3);
    FUNC_9 (VAR_10->dwLen == VAR_4, "Expected %d, got %d\n", VAR_4, VAR_10->dwLen);
    VAR_2[VAR_4] = 0;
    FUNC_9 (!FUNC_6((LPCSTR)VAR_10->szString, VAR_2), "String different\n");
    FUNC_9 (!VAR_10->szString[(VAR_4+sizeof(WCHAR)-1)/sizeof(WCHAR)], "String not terminated\n");
    FUNC_5(VAR_3);
  }
  FUNC_3(FUNC_1(), 0, VAR_2);
}
