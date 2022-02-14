
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd_arg {int v; struct m_option const* type; } ;
struct mp_cmd {int nargs; int flags; TYPE_1__* def; struct mp_cmd_arg* args; int name; } ;
struct m_option {int flags; scalar_t__ defval; } ;
struct TYPE_4__ {scalar_t__ default_async; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mp_cmd*,struct mp_cmd_arg*,int,struct mp_cmd_arg) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 struct m_option* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct m_option const*,int *,scalar_t__) ;
 int FUNC_6 (struct mp_log*,char*,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct mp_log *VAR_4, struct mp_cmd *VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

        if (VAR_6 < VAR_5->nargs && VAR_5->args[VAR_6].type)
            continue;
        const struct m_option *VAR_7 = FUNC_3(VAR_5->def, VAR_6);
        if (VAR_6 >= VAR_5->nargs && (!VAR_7 || FUNC_4(VAR_5->def, VAR_6)))
            break;
        if (!VAR_7->defval && !(VAR_7->flags & VAR_2)) {
            FUNC_6(VAR_4, "Command %s: required argument %s not set.\n",
                   VAR_5->name, FUNC_2(VAR_5->def, VAR_6));
            return 0;
        }
        struct mp_cmd_arg VAR_8 = {.type = VAR_7};
        if (VAR_7->defval)
            FUNC_5(VAR_7, &VAR_8.v, VAR_7->defval);
        FUNC_1(VAR_6 <= VAR_5->nargs);
        if (VAR_6 == VAR_5->nargs) {
            FUNC_0(VAR_5, VAR_5->args, VAR_5->nargs, VAR_8);
        } else {
            VAR_5->args[VAR_6] = VAR_8;
        }
    }

    if (!(VAR_5->flags & (VAR_0 | VAR_3)))
        VAR_5->flags |= VAR_5->def->default_async ? VAR_0 : VAR_3;

    return 1;
}
