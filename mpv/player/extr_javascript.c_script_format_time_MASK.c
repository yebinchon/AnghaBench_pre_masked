
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 double FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char const*,double) ;
 char* FUNC_6 (void*,int ) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0, void *VAR_1)
{
    double VAR_2 = FUNC_3(VAR_0, 1);
    const char *VAR_3 = FUNC_1(VAR_0, 2) ? "%H:%M:%S" : FUNC_4(VAR_0, 2);
    char *VAR_4 = FUNC_6(VAR_1, FUNC_5(VAR_3, VAR_2));
    if (!VAR_4)
        FUNC_0(VAR_0, "Invalid time format string '%s'", VAR_3);
    FUNC_2(VAR_0, VAR_4);
}
