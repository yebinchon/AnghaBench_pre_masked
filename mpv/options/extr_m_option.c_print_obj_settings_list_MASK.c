
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int m_option_t ;
struct TYPE_3__ {char* name; scalar_t__* attribs; int enabled; scalar_t__* label; } ;
typedef TYPE_1__ m_obj_settings_t ;


 TYPE_1__* FUNC_0 (void const*) ;
 int FUNC_1 (char**,scalar_t__) ;
 char* FUNC_2 (char*,char*,scalar_t__*) ;
 char* FUNC_3 (int *,char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(const m_option_t *VAR_0, const void *VAR_1)
{
    m_obj_settings_t *VAR_2 = FUNC_0(VAR_1);
    char *VAR_3 = FUNC_3(((void*)0), "");
    for (int VAR_4 = 0; VAR_2 && VAR_2[VAR_4].name; VAR_4++) {
        m_obj_settings_t *VAR_5 = &VAR_2[VAR_4];
        if (VAR_4 > 0)
            VAR_3 = FUNC_4(VAR_3, ",");

        if (VAR_5->label && VAR_5->label[0])
            VAR_3 = FUNC_2(VAR_3, "@%s:", VAR_5->label);
        if (!VAR_5->enabled)
            VAR_3 = FUNC_4(VAR_3, "!");
        VAR_3 = FUNC_4(VAR_3, VAR_5->name);
        if (VAR_5->attribs && VAR_5->attribs[0]) {
            VAR_3 = FUNC_4(VAR_3, "=");
            for (int VAR_6 = 0; VAR_5->attribs[VAR_6 * 2 + 0]; VAR_6++) {
                if (VAR_6 > 0)
                    VAR_3 = FUNC_4(VAR_3, ":");
                FUNC_1(&VAR_3, VAR_5->attribs[VAR_6 * 2 + 0]);
                VAR_3 = FUNC_4(VAR_3, "=");
                FUNC_1(&VAR_3, VAR_5->attribs[VAR_6 * 2 + 1]);
            }
        }
    }
    return VAR_3;
}
