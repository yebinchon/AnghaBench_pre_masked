
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_cmd {int nargs; TYPE_1__* args; int flags; int name; } ;
struct TYPE_2__ {int v; int type; } ;


 char* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mp_log*,int,char*,...) ;
 int FUNC_2 (struct mp_log*,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct mp_log *VAR_0, int VAR_1, char *VAR_2, struct mp_cmd *VAR_3)
{
    if (!FUNC_2(VAR_0, VAR_1))
        return;
    if (VAR_2)
        FUNC_1(VAR_0, VAR_1, "%s ", VAR_2);
    if (!VAR_3) {
        FUNC_1(VAR_0, VAR_1, "(NULL)\n");
        return;
    }
    FUNC_1(VAR_0, VAR_1, "%s, flags=%d, args=[", VAR_3->name, VAR_3->flags);
    for (int VAR_4 = 0; VAR_4 < VAR_3->nargs; VAR_4++) {
        char *VAR_5 = FUNC_0(VAR_3->args[VAR_4].type, &VAR_3->args[VAR_4].v);
        if (VAR_4)
            FUNC_1(VAR_0, VAR_1, ", ");
        FUNC_1(VAR_0, VAR_1, "%s", VAR_5 ? VAR_5 : "(NULL)");
        FUNC_3(VAR_5);
    }
    FUNC_1(VAR_0, VAR_1, "]\n");
}
