
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwLen; int szString; } ;
typedef char OLECHAR ;
typedef TYPE_1__* LPINTERNAL_BSTR ;
typedef char const* BSTR ;


 TYPE_1__* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const**,char const*,int const) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (char const*,char const*,int) ;
 int FUNC_7 (char const*,int,int const) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
  const OLECHAR VAR_0[5] = { 'T','e','s','t','\0' };
  const OLECHAR VAR_1[2] = { 'x','\0' };
  const OLECHAR VAR_2[7] = { 'L','a','r','g','e','r','\0' };
  BSTR VAR_3;

  VAR_3 = FUNC_1(VAR_0, 4);
  FUNC_8 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    LPINTERNAL_BSTR VAR_4;
    int VAR_5;

    VAR_4 = FUNC_0(VAR_3);
    FUNC_8 (VAR_4->dwLen == 8, "Expected 8, got %d\n", VAR_4->dwLen);
    FUNC_8 (!FUNC_5(VAR_4->szString, VAR_0), "String different\n");

    VAR_5 = FUNC_3(&VAR_3, VAR_1, 1);
    FUNC_8 (VAR_5 == 1, "Expected 1, got %d\n", VAR_5);


    VAR_4 = FUNC_0(VAR_3);
    FUNC_8 (VAR_4->dwLen == 2, "Expected 2, got %d\n", VAR_4->dwLen);
    FUNC_8 (!FUNC_5(VAR_4->szString, VAR_1), "String different\n");

    VAR_5 = FUNC_3(&VAR_3, VAR_2, 6);
    FUNC_8 (VAR_5 == 1, "Expected 1, got %d\n", VAR_5);


    VAR_4 = FUNC_0(VAR_3);
    FUNC_8 (VAR_4->dwLen == 12, "Expected 12, got %d\n", VAR_4->dwLen);
    FUNC_8 (!FUNC_5(VAR_4->szString, VAR_2), "String different\n");

    VAR_5 = FUNC_3(&VAR_3, VAR_3, 6);
    FUNC_8 (VAR_5 == 1, "Expected 1, got %d\n", VAR_5);

    FUNC_2(VAR_3);
  }


  VAR_3 = FUNC_1(VAR_0, 4);
  FUNC_8 (VAR_3 != ((void*)0), "Expected non-NULL\n");
  if (VAR_3)
  {
    const int VAR_6 = 64;
    const int VAR_7 = 24;
    int VAR_8;
    VAR_8 = FUNC_3(&VAR_3, ((void*)0), VAR_6);
    FUNC_8 (VAR_8 == 1, "Expected 1, got %d\n", VAR_8);
    FUNC_8 (VAR_3 != ((void*)0), "Expected non-NULL\n");
    if (VAR_3)
    {
      BSTR VAR_9 = VAR_3;


      FUNC_7 (VAR_3, 0xAB, VAR_6 * sizeof (OLECHAR));

      VAR_8 = FUNC_3(&VAR_3, ((void*)0), VAR_7);
      FUNC_8 (VAR_8 == 1, "Expected 1, got %d\n", VAR_8);
      FUNC_8 (VAR_3 != ((void*)0), "Expected non-NULL\n");
      if (VAR_3)
      {
        FUNC_8 (VAR_3 == VAR_9, "Expected reuse of the old string memory\n");
        FUNC_8 (VAR_3[VAR_7] == 0,
            "Expected null terminator, got 0x%04X\n", VAR_3[VAR_7]);
        FUNC_2(VAR_3);
      }
    }
  }


  VAR_3 = FUNC_1(VAR_0, 4);
  FUNC_8(VAR_3 != ((void*)0), "Expected non-NULL\n");
  if(VAR_3)
  {
      FUNC_3(&VAR_3, VAR_3, 1000000);
      FUNC_8(FUNC_4(VAR_3)==1000000, "Incorrect string length\n");
      FUNC_8(!FUNC_6(VAR_0, VAR_3, 4*sizeof(WCHAR)), "Incorrect string returned\n");

      FUNC_2(VAR_3);
  }
}
