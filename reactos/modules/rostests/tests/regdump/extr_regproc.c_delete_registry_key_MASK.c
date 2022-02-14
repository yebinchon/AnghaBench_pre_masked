
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__,int **,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

void FUNC_11(TCHAR* VAR_2)
{
    TCHAR* VAR_3;
    DWORD VAR_4;
    HKEY VAR_5;
    HKEY VAR_6;

    if (!VAR_2 || !VAR_2[0]) {
        return;
    }

    VAR_5 = FUNC_9(VAR_2);
    if (VAR_5 == (HKEY)VAR_0) {
        FUNC_7(FUNC_5("Incorrect registry class specification in '%s'\n"), VAR_2);

        return;
    }
    VAR_3 = FUNC_10(VAR_2);
    FUNC_0(VAR_3);
    VAR_4 = FUNC_6(VAR_3);
    if (!VAR_3[0]) {
        FUNC_7(FUNC_5("Can't delete registry class '%s'\n"), VAR_2);

        return;
    }
    if (FUNC_4(VAR_5, VAR_3, &VAR_6) == VAR_1) {

        FUNC_3(VAR_6);
        FUNC_8(VAR_5, &VAR_3, &VAR_4);
    }
    FUNC_2(FUNC_1(), 0, VAR_3);
}
