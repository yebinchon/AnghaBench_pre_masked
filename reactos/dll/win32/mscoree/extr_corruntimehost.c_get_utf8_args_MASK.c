
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int ** FUNC_0 (int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char** FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int **) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int,char*,int,int *,int *) ;

__attribute__((used)) static void FUNC_6(int *VAR_1, char ***VAR_2)
{
    WCHAR **VAR_3;
    int VAR_4=0, VAR_5;
    char *VAR_6;

    VAR_3 = FUNC_0(FUNC_1(), VAR_1);

    for (VAR_5=0; VAR_5<*VAR_1; VAR_5++)
    {
        VAR_4 += sizeof(char*);
        VAR_4 += FUNC_5(VAR_0, 0, VAR_3[VAR_5], -1, ((void*)0), 0, ((void*)0), ((void*)0));
    }
    VAR_4 += sizeof(char*);

    *VAR_2 = FUNC_3(FUNC_2(), 0, VAR_4);
    VAR_6 = (char*)(*VAR_2 + *VAR_1 + 1);

    for (VAR_5=0; VAR_5<*VAR_1; VAR_5++)
    {
        (*VAR_2)[VAR_5] = VAR_6;
        VAR_6 += FUNC_5(VAR_0, 0, VAR_3[VAR_5], -1, VAR_6, VAR_4, ((void*)0), ((void*)0));
    }

    (*VAR_2)[*VAR_1] = ((void*)0);

    FUNC_4(FUNC_2(), 0, VAR_3);
}
