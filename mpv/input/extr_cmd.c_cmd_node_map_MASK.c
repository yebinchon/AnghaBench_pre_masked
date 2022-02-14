
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd {int name; TYPE_3__* def; } ;
struct TYPE_13__ {int num; char** keys; TYPE_5__* values; } ;
typedef TYPE_4__ mpv_node_list ;
struct TYPE_10__ {int string; TYPE_4__* list; } ;
struct TYPE_14__ {scalar_t__ format; TYPE_1__ u; } ;
typedef TYPE_5__ mpv_node ;
struct TYPE_12__ {TYPE_2__* args; scalar_t__ vararg; } ;
struct TYPE_11__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mp_cmd*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mp_log*,struct mp_cmd*,int ) ;
 int FUNC_4 (struct mp_log*,char*,int ,...) ;
 TYPE_5__* FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (struct mp_log*,struct mp_cmd*,int,TYPE_5__*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_8(struct mp_log *VAR_4, struct mp_cmd *VAR_5, mpv_node *VAR_6)
{
    FUNC_1(VAR_6->format == VAR_1);
    mpv_node_list *VAR_7 = VAR_6->u.list;

    mpv_node *VAR_8 = FUNC_5(VAR_6, "name");
    if (!VAR_8 || VAR_8->format != VAR_2)
        return 0;

    if (!FUNC_3(VAR_4, VAR_5, FUNC_2(VAR_8->u.string)))
        return 0;

    if (VAR_5->def->vararg) {
        FUNC_4(VAR_4, "Command %s: this command uses a variable number of "
               "arguments, which does not work with named arguments.\n",
               VAR_5->name);
        return 0;
    }

    for (int VAR_9 = 0; VAR_9 < VAR_7->num; VAR_9++) {
        const char *VAR_10 = VAR_7->keys[VAR_9];
        mpv_node *VAR_11 = &VAR_7->values[VAR_9];

        if (FUNC_7(VAR_10, "name") == 0) {

        } else if (FUNC_7(VAR_10, "_flags") == 0) {
            if (VAR_11->format != VAR_0)
                return 0;
            mpv_node_list *VAR_12 = VAR_11->u.list;
            for (int VAR_13 = 0; VAR_13 < VAR_12->num; VAR_13++) {
                if (VAR_12->values[VAR_13].format != VAR_2)
                    return 0;
                if (!FUNC_0(VAR_5, FUNC_2(VAR_12->values[VAR_13].u.string)))
                    return 0;
            }
        } else {
            int VAR_14 = -1;

            for (int VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
                const char *VAR_16 = VAR_5->def->args[VAR_15].name;
                if (VAR_16 && VAR_16[0] && FUNC_7(VAR_10, VAR_16) == 0) {
                    VAR_14 = VAR_15;
                    break;
                }
            }

            if (VAR_14 < 0) {
                FUNC_4(VAR_4, "Command %s: no argument %s.\n", VAR_5->name, VAR_10);
                return 0;
            }

            if (!FUNC_6(VAR_4, VAR_5, VAR_14, VAR_11))
                return 0;
        }
    }

    return 1;
}
