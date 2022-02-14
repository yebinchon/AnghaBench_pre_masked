
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef scalar_t__ WORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char const*,int,scalar_t__*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int ,int,char const*,int,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const wchar_t VAR_4[] = { '0', '\0' };
    static const wchar_t VAR_5[] = { 'A', '\0' };
    static const wchar_t VAR_6[] = { ' ', '\0' };
    static const wchar_t VAR_7[] = { '\0', '\0' };
    static const wchar_t VAR_8[] = { 1234, '\0' };

    const wchar_t *VAR_9[] = { VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 };

    WORD VAR_10, VAR_11;
    BOOL VAR_12, VAR_13;
    int VAR_14;

    if(!&FUNC_3) {
        FUNC_4("Skipping __crtGetStringTypeW tests\n");
        return;
    }

    if(!VAR_3) {
        FUNC_4("Too old version of msvcrt.dll\n");
        return;
    }

    for(VAR_14=0; VAR_14<FUNC_0(VAR_9); VAR_14++) {
        VAR_12 = FUNC_3(0, VAR_0, VAR_9[VAR_14], 1, &VAR_10);
        VAR_13 = FUNC_1(VAR_0, VAR_9[VAR_14], 1, &VAR_11);
        FUNC_2(VAR_13 == VAR_12, "%d) ret_crt = %d\n", VAR_14, (int)VAR_12);
        FUNC_2(VAR_11 == VAR_10, "%d) out_crt = %x, expected %x\n", VAR_14, (int)VAR_10, (int)VAR_11);

        VAR_12 = FUNC_3(0, VAR_1, VAR_9[VAR_14], 1, &VAR_10);
        VAR_13 = FUNC_1(VAR_1, VAR_9[VAR_14], 1, &VAR_11);
        FUNC_2(VAR_13 == VAR_12, "%d) ret_crt = %d\n", VAR_14, (int)VAR_12);
        FUNC_2(VAR_11 == VAR_10, "%d) out_crt = %x, expected %x\n", VAR_14, (int)VAR_10, (int)VAR_11);

        VAR_12 = FUNC_3(0, VAR_2, VAR_9[VAR_14], 1, &VAR_10);
        VAR_13 = FUNC_1(VAR_2, VAR_9[VAR_14], 1, &VAR_11);
        FUNC_2(VAR_13 == VAR_12, "%d) ret_crt = %d\n", VAR_14, (int)VAR_12);
        FUNC_2(VAR_11 == VAR_10, "%d) out_crt = %x, expected %x\n", VAR_14, (int)VAR_10, (int)VAR_11);
    }

    VAR_13 = FUNC_3(0, 3, VAR_9[0], 1, &VAR_11);
    FUNC_2(!VAR_13, "ret == TRUE\n");
}
