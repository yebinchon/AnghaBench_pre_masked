
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 size_t FUNC_2 (int ,int ,char const*,int,int *,size_t) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(const char *VAR_2)
{
    int VAR_3;
    size_t VAR_4;
    wchar_t *VAR_5;


    VAR_4 = FUNC_2 (VAR_0, 0, VAR_2, -1, ((void*)0), 0) ;
 VAR_5 = (wchar_t*)FUNC_4(sizeof(wchar_t) * VAR_4);

    FUNC_2( VAR_0, 0, VAR_2, -1, VAR_5, VAR_4);


    VAR_3 = FUNC_0(VAR_5, ((void*)0));


    FUNC_3(VAR_5);

    if (VAR_3)
     return 0;
    else
    {
        VAR_1 = FUNC_1();
        return -1;
    }
}
