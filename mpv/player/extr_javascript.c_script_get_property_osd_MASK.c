
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpv_handle ;
typedef int js_State ;


 int VAR_0 ;
 int FUNC_0 (void*,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*,int ,char**) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_1, void *VAR_2)
{
    const char *VAR_3 = FUNC_3(VAR_1, 1);
    mpv_handle *VAR_4 = FUNC_1(VAR_1);
    char *VAR_5 = ((void*)0);
    int VAR_6 = FUNC_4(VAR_4, VAR_3, VAR_0, &VAR_5);
    if (VAR_6 >= 0)
        FUNC_0(VAR_2, VAR_5);
    if (!FUNC_5(VAR_1, VAR_6, 2))
        FUNC_2(VAR_1, VAR_5);
}
