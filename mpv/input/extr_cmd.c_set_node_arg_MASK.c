
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd_arg {int member_0; int v; struct m_option const* type; } ;
struct mp_cmd {int nargs; struct mp_cmd_arg* args; int name; int def; } ;
struct m_option {int dummy; } ;
struct TYPE_5__ {int string; } ;
struct TYPE_6__ {scalar_t__ format; TYPE_1__ u; } ;
typedef TYPE_2__ mpv_node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mp_cmd*,struct mp_cmd_arg*,int,struct mp_cmd_arg) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int) ;
 struct m_option* FUNC_3 (int ,int) ;
 int FUNC_4 (struct mp_log*,struct m_option const*,int ,int ,void*) ;
 int FUNC_5 (struct m_option const*,void*,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mp_log*,char*,int ,...) ;

__attribute__((used)) static bool FUNC_8(struct mp_log *VAR_1, struct mp_cmd *VAR_2, int VAR_3,
                         mpv_node *VAR_4)
{
    const char *VAR_5 = FUNC_2(VAR_2->def, VAR_3);

    const struct m_option *VAR_6 = FUNC_3(VAR_2->def, VAR_3);
    if (!VAR_6) {
        FUNC_7(VAR_1, "Command %s: has only %d arguments.\n", VAR_2->name, VAR_3);
        return 0;
    }

    if (VAR_3 < VAR_2->nargs && VAR_2->args[VAR_3].type) {
        FUNC_7(VAR_1, "Command %s: argument %s was already set.\n", VAR_2->name, VAR_5);
        return 0;
    }

    struct mp_cmd_arg VAR_7 = {.type = VAR_6};
    void *VAR_8 = &VAR_7.v;
    if (VAR_4->format == VAR_0) {
        int VAR_9 = FUNC_4(VAR_1, VAR_6, FUNC_1(VAR_2->name),
                                FUNC_1(VAR_4->u.string), VAR_8);
        if (VAR_9 < 0) {
            FUNC_7(VAR_1, "Command %s: argument %s can't be parsed: %s.\n",
                   VAR_2->name, VAR_5, FUNC_6(VAR_9));
            return 0;
        }
    } else {
        int VAR_10 = FUNC_5(VAR_6, VAR_8, VAR_4);
        if (VAR_10 < 0) {
            FUNC_7(VAR_1, "Command %s: argument %s has incompatible type.\n",
                   VAR_2->name, VAR_5);
            return 0;
        }
    }


    while (VAR_3 >= VAR_2->nargs) {
        struct mp_cmd_arg VAR_11 = {0};
        FUNC_0(VAR_2, VAR_2->args, VAR_2->nargs, VAR_11);
    }

    VAR_2->args[VAR_3] = VAR_7;
    return 1;
}
