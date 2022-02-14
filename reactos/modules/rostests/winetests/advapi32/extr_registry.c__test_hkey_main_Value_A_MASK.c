
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
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
 int FUNC_4 (int ,char*,int *,int*,int*,int*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int*,char*,int) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static void FUNC_12(int VAR_5, LPCSTR VAR_6, LPCSTR VAR_7,
                                   DWORD VAR_8)
{
    DWORD VAR_9, VAR_10, VAR_11;
    DWORD VAR_12;
    BYTE* VAR_13;

    VAR_10=0xdeadbeef;
    VAR_11=0xdeadbeef;



    FUNC_5(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_4, VAR_6, ((void*)0), &VAR_10, ((void*)0), &VAR_11);
    VAR_2 = FUNC_0();
    FUNC_6(VAR_9 == VAR_1, "RegQueryValueExA/1 failed: %d, GLE=%d\n", VAR_9, VAR_2);

    FUNC_10(VAR_2 == 0xdeadbeef, "RegQueryValueExA set GLE = %u\n", VAR_2);
    if(VAR_2 == VAR_0) return;

    VAR_12 = (VAR_7 ? FUNC_7(VAR_7) : 0) + 1;
    FUNC_6(VAR_10 == VAR_3, "RegQueryValueExA/1 returned type %d\n", VAR_10);
    FUNC_6(VAR_11 == VAR_8, "cbData=%d instead of %d or %d\n", VAR_11, VAR_8, VAR_12);

    VAR_13 = FUNC_2(FUNC_1(), 0, VAR_11+1);
    FUNC_9(VAR_13, 0xbd, VAR_11+1);
    VAR_10=0xdeadbeef;
    VAR_9 = FUNC_4(VAR_4, VAR_6, ((void*)0), &VAR_10, VAR_13, &VAR_11);
    VAR_2 = FUNC_0();
    FUNC_6(VAR_9 == VAR_1, "RegQueryValueExA/2 failed: %d, GLE=%d\n", VAR_9, VAR_2);
    if (!VAR_7)
    {

        FUNC_6(*VAR_13 == 0xbd, "RegQueryValueExA overflowed: cbData=%u *value=%02x\n", VAR_11, *VAR_13);
    }
    else
    {
        FUNC_6(FUNC_8(VAR_13, VAR_7, VAR_11) == 0, "RegQueryValueExA/2 failed: %s/%d != %s/%d\n",
           FUNC_11((char*)VAR_13, VAR_11), VAR_11,
           FUNC_11(VAR_7, VAR_8), VAR_8);
        FUNC_6(*(VAR_13+VAR_11) == 0xbd, "RegQueryValueExA/2 overflowed at offset %u: %02x != bd\n", VAR_11, *(VAR_13+VAR_11));
    }
    FUNC_3(FUNC_1(), 0, VAR_13);
}
