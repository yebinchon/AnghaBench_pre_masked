
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd_def {scalar_t__ vararg; struct m_option* args; scalar_t__ name; } ;
struct m_option {int flags; TYPE_1__* type; int name; scalar_t__ defval; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mp_cmd_def* VAR_2 ;
 int FUNC_0 (struct mp_log*,char*,...) ;

void FUNC_1(struct mp_log *VAR_3)
{
    for (int VAR_4 = 0; VAR_2[VAR_4].name; VAR_4++) {
        const struct mp_cmd_def *VAR_5 = &VAR_2[VAR_4];
        FUNC_0(VAR_3, "%-20.20s", VAR_5->name);
        for (int VAR_6 = 0; VAR_6 < VAR_0 && VAR_5->args[VAR_6].type; VAR_6++) {
            const struct m_option *VAR_7 = &VAR_5->args[VAR_6];
            bool VAR_8 = VAR_7->defval || (VAR_7->flags & VAR_1);
            FUNC_0(VAR_3, " %s%s=%s%s", VAR_8 ? "[" : "", VAR_7->name,
                    VAR_7->type->name, VAR_8 ? "]" : "");
        }
        if (VAR_5->vararg)
            FUNC_0(VAR_3, "...");
        FUNC_0(VAR_3, "\n");
    }
}
