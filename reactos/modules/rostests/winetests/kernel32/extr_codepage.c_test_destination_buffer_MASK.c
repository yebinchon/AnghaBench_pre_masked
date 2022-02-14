
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int,char*,int,int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int,char*,int,scalar_t__,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    LPSTR VAR_4;
    INT VAR_5;
    INT VAR_6;
    INT VAR_7;

    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_0, 0, VAR_3, -1, ((void*)0), 0, ((void*)0), ((void*)0));
    FUNC_7( (VAR_6 > 0), "returned %d with %u (expected '> 0')\n",
        VAR_6, FUNC_0());

    VAR_5 = VAR_6*2;
    VAR_4 = FUNC_2(FUNC_1(), 0, VAR_5);
    if (VAR_4 == ((void*)0)) return;

    VAR_5--;
    FUNC_6(VAR_4, 'x', VAR_5);
    VAR_4[VAR_5] = '\0';
    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, VAR_4, VAR_6+1, ((void*)0), ((void*)0));
    FUNC_7( (VAR_7 > 0), "returned %d with %u and '%s' (expected '> 0')\n",
        VAR_7, FUNC_0(), VAR_4);

    FUNC_6(VAR_4, 'x', VAR_5);
    VAR_4[VAR_5] = '\0';
    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, VAR_4, VAR_6, ((void*)0), ((void*)0));
    FUNC_7( (VAR_7 > 0), "returned %d with %u and '%s' (expected '> 0')\n",
        VAR_7, FUNC_0(), VAR_4);

    FUNC_6(VAR_4, 'x', VAR_5);
    VAR_4[VAR_5] = '\0';
    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, VAR_4, VAR_6-1, ((void*)0), ((void*)0));
    FUNC_7( !VAR_7 && (FUNC_0() == VAR_1),
        "returned %d with %u and '%s' (expected '0' with "
        "ERROR_INSUFFICIENT_BUFFER)\n", VAR_7, FUNC_0(), VAR_4);

    FUNC_6(VAR_4, 'x', VAR_5);
    VAR_4[VAR_5] = '\0';
    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, VAR_4, 1, ((void*)0), ((void*)0));
    FUNC_7( !VAR_7 && (FUNC_0() == VAR_1),
        "returned %d with %u and '%s' (expected '0' with "
        "ERROR_INSUFFICIENT_BUFFER)\n", VAR_7, FUNC_0(), VAR_4);

    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, VAR_4, 0, ((void*)0), ((void*)0));
    FUNC_7( (VAR_7 > 0), "returned %d with %u (expected '> 0')\n",
        VAR_7, FUNC_0());

    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_5(VAR_0, 0, VAR_3, -1, ((void*)0), VAR_6, ((void*)0), ((void*)0));
    FUNC_7( !VAR_7 && (FUNC_0() == VAR_2),
        "returned %d with %u (expected '0' with "
        "ERROR_INVALID_PARAMETER)\n", VAR_7, FUNC_0());

    FUNC_3(FUNC_1(), 0, VAR_4);
}
