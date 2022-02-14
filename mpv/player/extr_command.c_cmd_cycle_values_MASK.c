
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union m_option_value {int member_0; } ;
struct mp_cmd_ctx {int num_args; int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct m_option {int member_0; } ;
struct MPContext {int log; } ;
struct TYPE_3__ {char* s; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct mp_cmd_ctx*,char const*,int ,char const*) ;
 scalar_t__ FUNC_4 (union m_option_value*,union m_option_value*,union m_option_value*) ;
 int FUNC_5 (union m_option_value*,union m_option_value*) ;
 scalar_t__ FUNC_6 (int ,union m_option_value*,int ,int ,union m_option_value*) ;
 int FUNC_7 (char const*,int ,union m_option_value*,struct MPContext*) ;
 int FUNC_8 (struct mp_cmd_ctx*,char const*,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(void *VAR_3)
{
    struct mp_cmd_ctx *VAR_4 = VAR_3;
    struct MPContext *VAR_5 = VAR_4->mpctx;
    int VAR_6 = 0, VAR_7 = 1;

    if (FUNC_9(VAR_4->args[VAR_6].v.s, "!reverse") == 0) {
        VAR_6 += 1;
        VAR_7 = -1;
    }

    const char *VAR_8 = VAR_4->args[VAR_6].v.s;
    VAR_6 += 1;

    if (VAR_6 >= VAR_4->num_args) {
        FUNC_0(VAR_5, "cycle-values command does not have any value arguments.\n");
        VAR_4->success = 0;
        return;
    }

    struct m_option VAR_9 = {0};
    int VAR_10 = FUNC_7(VAR_8, VAR_1, &VAR_9, VAR_5);
    if (VAR_10 <= 0) {
        FUNC_8(VAR_4, VAR_8, VAR_10);
        return;
    }

    union m_option_value VAR_11 = {0};
    VAR_10 = FUNC_7(VAR_8, VAR_0, &VAR_11, VAR_5);
    if (VAR_10 <= 0) {
        FUNC_8(VAR_4, VAR_8, VAR_10);
        return;
    }




    int VAR_12 = -1;
    for (int VAR_13 = VAR_6; VAR_13 < VAR_4->num_args; VAR_13++) {
        union m_option_value VAR_14 = {0};
        if (FUNC_6(VAR_5->log, &VAR_9, FUNC_2(VAR_8),
                           FUNC_2(VAR_4->args[VAR_13].v.s), &VAR_14) < 0)
            continue;

        if (FUNC_4(&VAR_9, &VAR_11, &VAR_14))
            VAR_12 = VAR_13;

        FUNC_5(&VAR_9, &VAR_14);

        if (VAR_12 >= 0)
            break;
    }

    FUNC_5(&VAR_9, &VAR_11);

    if (VAR_12 >= 0) {
        VAR_12 += VAR_7;
        if (VAR_12 < VAR_6)
            VAR_12 = VAR_4->num_args - 1;
        if (VAR_12 >= VAR_4->num_args)
            VAR_12 = VAR_6;
    } else {
        FUNC_1(VAR_5, "Current value not found. Picking default.\n");
        VAR_12 = VAR_7 > 0 ? VAR_6 : VAR_4->num_args - 1;
    }

    FUNC_3(VAR_4, VAR_8, VAR_2, VAR_4->args[VAR_12].v.s);
}
