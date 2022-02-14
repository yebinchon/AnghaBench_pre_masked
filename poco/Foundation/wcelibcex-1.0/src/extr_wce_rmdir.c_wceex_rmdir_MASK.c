
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,char const*,int,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(const char *VAR_1)
{
    int VAR_2;
    size_t VAR_3;
    wchar_t *VAR_4;


 VAR_3 = FUNC_0 (VAR_0, 0, VAR_1, -1, ((void*)0), 0) ;
 VAR_4 = (wchar_t*)FUNC_3(sizeof(wchar_t) * VAR_3);
 FUNC_0( VAR_0, 0, VAR_1, -1, VAR_4, VAR_3);


 VAR_2 = FUNC_1(VAR_4);


 FUNC_2(VAR_4);





    if (VAR_2)
     return 0;
    else
        return -1;

}
