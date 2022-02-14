
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSECURITY_DESCRIPTOR ;


 int FUNC_0 (char*,int ,int **,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 (int *,char*,char*,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static PSECURITY_DESCRIPTOR FUNC_6(void)
{
    char *VAR_1 = FUNC_3();
    char *VAR_2 = FUNC_2();
    if (!VAR_1 || !VAR_2)
        return ((void*)0);

    char *VAR_3 = FUNC_4(((void*)0),
        "O:%s"
        "D:(A;;GRGW;;;%s)"
        "S:(ML;;NRNWNX;;;%s)",

        VAR_1, VAR_1, VAR_2);
    FUNC_1(VAR_1);
    FUNC_1(VAR_2);

    PSECURITY_DESCRIPTOR VAR_4 = ((void*)0);
    FUNC_0(VAR_3, VAR_0,
        &VAR_4, ((void*)0));
    FUNC_5(VAR_3);

    return VAR_4;
}
