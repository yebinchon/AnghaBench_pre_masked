
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_0)
{
    const char *VAR_1 = FUNC_2(VAR_0, 1);
    if (FUNC_3(VAR_1) < 0)
        FUNC_1(VAR_0, "Invalid log level '%s'", VAR_1);
    FUNC_5(VAR_0, FUNC_4(FUNC_0(VAR_0), VAR_1));
}
