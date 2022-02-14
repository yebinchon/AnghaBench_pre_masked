
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char**,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    LPWSTR VAR_2[4];
    static WCHAR VAR_3[] = { 'A',' ','S','t','r','i','n','g','\0' };
    BOOL VAR_4;

    if (!&FUNC_1)
    {
        FUNC_2("FBadRglpszW is not available\n");
        return;
    }

    VAR_4 = FUNC_1(((void*)0), 10);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszW(Null): expected TRUE, got FALSE\n");

    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_2[3] = ((void*)0);
    VAR_4 = FUNC_1(VAR_2, 4);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszW(Nulls): expected TRUE, got FALSE\n");

    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_3;
    VAR_4 = FUNC_1(VAR_2, 3);
    FUNC_0(VAR_4 == VAR_0, "FBadRglpszW(valid): expected FALSE, got TRUE\n");

    VAR_4 = FUNC_1(VAR_2, 4);
    FUNC_0(VAR_4 == VAR_1, "FBadRglpszW(1 invalid): expected TRUE, got FALSE\n");
}
