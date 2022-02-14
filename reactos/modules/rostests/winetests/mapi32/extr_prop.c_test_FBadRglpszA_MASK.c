
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char**,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    LPSTR VAR_2[4];
    static CHAR VAR_3[] = "A String";
    BOOL VAR_4;

    if (!&FUNC_1)
    {
        FUNC_2("FBadRglpszA is not available\n");
        return;
    }

    VAR_4 = FUNC_1(((void*)0), 10);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszA(Null): expected TRUE, got FALSE\n");

    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_2[3] = ((void*)0);
    VAR_4 = FUNC_1(VAR_2, 4);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszA(Nulls): expected TRUE, got FALSE\n");

    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_3;
    VAR_4 = FUNC_1(VAR_2, 3);
    FUNC_0(VAR_4 == VAR_0, "FBadRglpszA(valid): expected FALSE, got TRUE\n");

    VAR_4 = FUNC_1(VAR_2, 4);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszA(1 invalid): expected TRUE, got FALSE\n");
}
