
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_ctx {int log; struct cmd_bind_section* cmd_bind_sections; } ;
struct cmd_bind_section {int num_binds; TYPE_1__* binds; struct cmd_bind_section* next; } ;
typedef int mp_cmd_t ;
struct TYPE_2__ {int* keys; scalar_t__ num_keys; } ;


 int FUNC_0 (struct input_ctx*,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct input_ctx*,char*) ;
 int FUNC_2 (struct input_ctx*,char**,TYPE_1__*) ;
 char* FUNC_3 (int*,int) ;
 int * FUNC_4 (int ,char const**) ;
 char* FUNC_5 (int *,char*,char*) ;
 char* FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static mp_cmd_t *FUNC_8(struct input_ctx *VAR_1, int VAR_2)
{
    if (VAR_2 == VAR_0) {
        FUNC_1(VAR_1,
            "CLOSE_WIN was received. This pseudo key can be remapped too,\n"
            "but --input-test will always quit when receiving it.\n");
        const char *VAR_3[] = {"quit", ((void*)0)};
        mp_cmd_t *VAR_4 = FUNC_4(VAR_1->log, VAR_3);
        return VAR_4;
    }

    char *VAR_5 = FUNC_3(&VAR_2, 1);
    char *VAR_6 = FUNC_5(((void*)0), "Key %s is bound to:\n", VAR_5);
    FUNC_7(VAR_5);

    int VAR_7 = 0;
    for (struct cmd_bind_section *VAR_8 = VAR_1->cmd_bind_sections;
         VAR_8; VAR_8 = VAR_8->next)
    {
        for (int VAR_9 = 0; VAR_9 < VAR_8->num_binds; VAR_9++) {
            if (VAR_8->binds[VAR_9].num_keys && VAR_8->binds[VAR_9].keys[0] == VAR_2) {
                VAR_7++;
                if (VAR_7 > 1)
                    VAR_6 = FUNC_6(VAR_6, "\n");
                VAR_6 = FUNC_6(VAR_6, "%d. ", VAR_7);
                FUNC_2(VAR_1, &VAR_6, &VAR_8->binds[VAR_9]);
            }
        }
    }

    if (!VAR_7)
        VAR_6 = FUNC_6(VAR_6, "(nothing)");

    FUNC_0(VAR_1, "%s\n", VAR_6);
    const char *VAR_10[] = {"show-text", VAR_6, ((void*)0)};
    mp_cmd_t *VAR_11 = FUNC_4(VAR_1->log, VAR_10);
    FUNC_7(VAR_6);
    return VAR_11;
}
