
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {char* priv; scalar_t__ name; } ;
struct command_ctx {int num_warned_deprecated; int * warned_deprecated; } ;
struct TYPE_3__ {struct command_ctx* command_ctx; } ;
typedef TYPE_1__ MPContext ;


 int FUNC_0 (struct command_ctx*,int *,int,char*) ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__,char const*) ;
 int FUNC_2 (char const*,int,void*,void*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, struct m_property *VAR_1,
                                        int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    struct command_ctx *VAR_5 = VAR_4->command_ctx;
    const char *VAR_6 = VAR_1->priv;
    for (int VAR_7 = 0; VAR_7 < VAR_5->num_warned_deprecated; VAR_7++) {
        if (FUNC_3(VAR_5->warned_deprecated[VAR_7], VAR_1->name) == 0)
            goto done;
    }
    FUNC_1(VAR_4, "Warning: property '%s' was replaced with '%s' and "
            "might be removed in the future.\n", VAR_1->name, VAR_6);
    FUNC_0(VAR_5, VAR_5->warned_deprecated, VAR_5->num_warned_deprecated,
                     (char *)VAR_1->name);

done:
    return FUNC_2(VAR_6, VAR_2, VAR_3, VAR_0);
}
