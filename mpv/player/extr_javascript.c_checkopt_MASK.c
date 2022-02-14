
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 char const* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(js_State *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3[],
                    const char *VAR_4)
{
    const char *VAR_5 = FUNC_1(VAR_0, VAR_1) ? VAR_2 : FUNC_2(VAR_0, VAR_1);
    for (int VAR_6 = 0; VAR_3[VAR_6]; VAR_6++) {
        if (FUNC_3(VAR_5, VAR_3[VAR_6]) == 0)
            return VAR_6;
    }
    FUNC_0(VAR_0, "Invalid %s '%s'", VAR_4, VAR_5);
}
