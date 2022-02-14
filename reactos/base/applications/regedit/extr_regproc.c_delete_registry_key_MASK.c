
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;


 char* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int **) ;
 int VAR_0 ;

void FUNC_8(WCHAR *VAR_1)
{
    WCHAR *VAR_2 = ((void*)0);
    HKEY VAR_3;

    if (!VAR_1 || !VAR_1[0])
        return;

    if (!FUNC_7(VAR_1, &VAR_3, &VAR_2)) {
        char* VAR_4 = FUNC_0(VAR_1);
        FUNC_5(VAR_0,"%d: Incorrect registry class specification in '%s'\n",
                FUNC_6(), VAR_4);
        FUNC_2(FUNC_1(), 0, VAR_4);
        FUNC_4(1);
    }
    if (!*VAR_2) {
        char* VAR_5 = FUNC_0(VAR_1);
        FUNC_5(VAR_0,"%d: Can't delete registry class '%s'\n",
                FUNC_6(), VAR_5);
        FUNC_2(FUNC_1(), 0, VAR_5);
        FUNC_4(1);
    }

    FUNC_3(VAR_3, VAR_2);
}
