
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int MSIPACKAGE ;


 int FUNC_0 (int *,char*,char**) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(MSIPACKAGE *VAR_0, WCHAR *VAR_1, WCHAR *VAR_2,
 size_t VAR_3)
{
    WCHAR *VAR_4, *VAR_5;

    if (!VAR_1 || !VAR_2 || !VAR_3)
    {
        if (VAR_2) *VAR_2 = '\0';
        return;
    }

    VAR_2[0] = '\0';


    if ((VAR_4 = FUNC_4(VAR_1, '|')))
        VAR_4++;
    else
        VAR_4 = VAR_1;

    FUNC_0(VAR_0, VAR_4, &VAR_5);
    if (!VAR_5 || FUNC_5(VAR_5) > VAR_3 - 1)
    {
        FUNC_3(VAR_5);
        return;
    }

    FUNC_1(VAR_2, VAR_5);
    VAR_2[FUNC_2(VAR_5)] = '\0';
    FUNC_3(VAR_5);
}
