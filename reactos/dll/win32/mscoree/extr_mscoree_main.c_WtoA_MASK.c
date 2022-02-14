
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,char*,int,int *,int *) ;

char *FUNC_3(LPCWSTR VAR_1)
{
    int VAR_2;
    char *VAR_3;

    VAR_2 = FUNC_2(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));

    VAR_3 = FUNC_1(FUNC_0(), 0, VAR_2);

    if (VAR_3)
        FUNC_2(VAR_0, 0, VAR_1, -1, VAR_3, VAR_2, ((void*)0), ((void*)0));

    return VAR_3;
}
