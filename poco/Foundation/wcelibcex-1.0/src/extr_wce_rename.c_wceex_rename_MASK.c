
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ,int ,char const*,int,int *,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(const char *VAR_1, const char *VAR_2)
{
    int VAR_3;
    size_t VAR_4;
    size_t VAR_5;
    wchar_t *VAR_6;
    wchar_t *VAR_7;




    VAR_4 = FUNC_1 (VAR_0, 0, VAR_1, -1, ((void*)0), 0) ;
    VAR_6 = (wchar_t*)FUNC_3(sizeof(wchar_t) * VAR_4);
    FUNC_1( VAR_0, 0, VAR_1, -1, VAR_6, VAR_4);


    VAR_5 = FUNC_1 (VAR_0, 0, VAR_2, -1, ((void*)0), 0) ;
    VAR_7 = (wchar_t*)FUNC_3(sizeof(wchar_t) * VAR_5);
    FUNC_1(VAR_0, 0, VAR_2, -1, VAR_7, VAR_5);


    VAR_3 = FUNC_0(VAR_6, VAR_7);


    FUNC_2(VAR_6);
    FUNC_2(VAR_7);

    if (VAR_3)
        return 0;
    else
        return -1;
}
