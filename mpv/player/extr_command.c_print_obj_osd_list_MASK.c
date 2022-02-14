
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_obj_settings {int enabled; scalar_t__* attribs; scalar_t__ name; } ;


 char* FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(struct m_obj_settings *VAR_0)
{
    char *VAR_1 = ((void*)0);
    for (int VAR_2 = 0; VAR_0 && VAR_0[VAR_2].name; VAR_2++) {
        VAR_1 = FUNC_0(VAR_1, "%s [", VAR_0[VAR_2].name);
        for (int VAR_3 = 0; VAR_0[VAR_2].attribs && VAR_0[VAR_2].attribs[VAR_3]; VAR_3 += 2) {
            VAR_1 = FUNC_0(VAR_1, "%s%s=%s", VAR_3 > 0 ? " " : "",
                                         VAR_0[VAR_2].attribs[VAR_3],
                                         VAR_0[VAR_2].attribs[VAR_3 + 1]);
        }
        VAR_1 = FUNC_0(VAR_1, "]");
        if (!VAR_0[VAR_2].enabled)
            VAR_1 = FUNC_2(VAR_1, " (disabled)");
        VAR_1 = FUNC_2(VAR_1, "\n");
    }
    if (!VAR_1)
        VAR_1 = FUNC_1(((void*)0), "(empty)");
    return VAR_1;
}
