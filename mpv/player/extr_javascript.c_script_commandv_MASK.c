
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char const**) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_1)
{
    const char *VAR_2[VAR_0 + 1];
    int VAR_3 = FUNC_3(VAR_1) - 1;
    if (VAR_3 >= FUNC_0(VAR_2))
        FUNC_2(VAR_1, "Too many arguments");

    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_2[VAR_4] = FUNC_4(VAR_1, 1 + VAR_4);
    VAR_2[VAR_3] = ((void*)0);
    FUNC_6(VAR_1, FUNC_5(FUNC_1(VAR_1), VAR_2));
}
