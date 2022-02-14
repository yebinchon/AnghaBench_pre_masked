
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPCWSTR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int *,int*,int*,int*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int,char*,int,...) ;
 scalar_t__ FUNC_7 (int*,int *,int) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(int VAR_5, LPCWSTR VAR_6, LPCWSTR VAR_7,
                                   DWORD VAR_8)
{
    DWORD VAR_9, VAR_10, VAR_11;
    BYTE* VAR_12;

    VAR_10=0xdeadbeef;
    VAR_11=0xdeadbeef;



    FUNC_5(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_4, VAR_6, ((void*)0), &VAR_10, ((void*)0), &VAR_11);
    VAR_2 = FUNC_0();
    FUNC_6(VAR_9 == VAR_1, "RegQueryValueExW/1 failed: %d, GLE=%d\n", VAR_9, VAR_2);
    if(VAR_2 == VAR_0)
    {
        FUNC_9("RegQueryValueExW() is not implemented\n");
        return;
    }

    FUNC_6(VAR_10 == VAR_3, "RegQueryValueExW/1 returned type %d\n", VAR_10);
    FUNC_6(VAR_11 == VAR_8,
        "cbData=%d instead of %d\n", VAR_11, VAR_8);


    VAR_12 = FUNC_2(FUNC_1(), 0, VAR_11+2);
    FUNC_8(VAR_12, 0xbd, VAR_11+2);
    VAR_10=0xdeadbeef;
    VAR_9 = FUNC_4(VAR_4, VAR_6, ((void*)0), &VAR_10, VAR_12, &VAR_11);
    VAR_2 = FUNC_0();
    FUNC_6(VAR_9 == VAR_1, "RegQueryValueExW/2 failed: %d, GLE=%d\n", VAR_9, VAR_2);
    if (VAR_7)
    {
        FUNC_6(FUNC_7(VAR_12, VAR_7, VAR_11) == 0, "RegQueryValueExW failed: %s/%d != %s/%d\n",
           FUNC_10((WCHAR*)VAR_12, VAR_11 / sizeof(WCHAR)), VAR_11,
           FUNC_10(VAR_7, VAR_8 / sizeof(WCHAR)), VAR_8);
    }

    FUNC_6(*(VAR_12+VAR_11) == 0xbd, "RegQueryValueExW/2 overflowed at %u: %02x != bd\n", VAR_11, *(VAR_12+VAR_11));
    FUNC_6(*(VAR_12+VAR_11+1) == 0xbd, "RegQueryValueExW/2 overflowed at %u+1: %02x != bd\n", VAR_11, *(VAR_12+VAR_11+1));
    FUNC_3(FUNC_1(), 0, VAR_12);
}
