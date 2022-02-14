
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (int,char*,int,scalar_t__,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    CHAR VAR_2[VAR_1 + 4];
    DWORD VAR_3;
    DWORD VAR_4;

    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(((void*)0), 0);

    FUNC_4(VAR_3 > 0, "returned %d with %d (expected '>0')\n", VAR_3, FUNC_0());

    VAR_4 = VAR_3;


    if (0)
        FUNC_1(((void*)0), VAR_4);

    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(((void*)0), VAR_4-1);


    FUNC_4( (VAR_3 == VAR_4) || (!VAR_3 && (FUNC_0() == VAR_0)),
        "returned %d with %d (expected '%d' or: '0' with "
        "ERROR_INVALID_PARAMETER)\n", VAR_3, FUNC_0(), VAR_4);

    if (VAR_4 > VAR_1) return;

    VAR_2[0] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(VAR_2, VAR_4);

    FUNC_4( (VAR_3 == (VAR_4-1)) && (VAR_2[0]),
        "returned %d with %d and '%s' (expected '%d' and a string)\n",
        VAR_3, FUNC_0(), VAR_2, VAR_4-1);

    VAR_2[0] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(VAR_2, VAR_4 + 1);

    FUNC_4( (VAR_3 == (VAR_4-1)) && (VAR_2[0]),
        "returned %d with %d and '%s' (expected '%d' and a string)\n",
        VAR_3, FUNC_0(), VAR_2, VAR_4-1);

    FUNC_3(VAR_2, '#', VAR_4 + 1);
    VAR_2[VAR_4 + 2] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(VAR_2, VAR_4-1);

    FUNC_4( VAR_3 == VAR_4, "returned %d with %d and '%s' (expected '%d')\n",
        VAR_3, FUNC_0(), VAR_2, VAR_4);

    FUNC_3(VAR_2, '#', VAR_4 + 1);
    VAR_2[VAR_4 + 2] = '\0';
    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_1(VAR_2, VAR_4-2);

    FUNC_4( VAR_3 == VAR_4, "returned %d with %d and '%s' (expected '%d')\n",
        VAR_3, FUNC_0(), VAR_2, VAR_4);
}
