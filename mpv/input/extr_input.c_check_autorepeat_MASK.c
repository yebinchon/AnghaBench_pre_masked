
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {int repeated; } ;
struct input_opts {int ar_rate; int ar_delay; } ;
struct input_ctx {int last_key_down; int ar_state; scalar_t__ last_ar; scalar_t__ last_key_down_time; int current_down_cmd; struct input_opts* opts; } ;
typedef struct mp_cmd mp_cmd_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 struct mp_cmd* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static mp_cmd_t *FUNC_3(struct input_ctx *VAR_1)
{
    struct input_opts *VAR_2 = VAR_1->opts;


    if (VAR_2->ar_rate <= 0 || !VAR_1->current_down_cmd || !VAR_1->last_key_down ||
        (VAR_1->last_key_down & VAR_0) ||
        !FUNC_1(VAR_1->current_down_cmd))
        VAR_1->ar_state = -1;

    if (VAR_1->ar_state >= 0) {
        int64_t VAR_3 = FUNC_2();
        if (VAR_1->last_ar + 2000000 < VAR_3)
            VAR_1->last_ar = VAR_3;

        if (VAR_1->ar_state == 0
            && (VAR_3 - VAR_1->last_key_down_time) >= VAR_2->ar_delay * 1000)
        {
            VAR_1->ar_state = 1;
            VAR_1->last_ar = VAR_1->last_key_down_time + VAR_2->ar_delay * 1000;

        } else if (VAR_1->ar_state == 1
                   && (VAR_3 - VAR_1->last_ar) >= 1000000 / VAR_2->ar_rate) {
            VAR_1->last_ar += 1000000 / VAR_2->ar_rate;
        } else {
            return ((void*)0);
        }
        struct mp_cmd *VAR_4 = FUNC_0(VAR_1->current_down_cmd);
        VAR_4->repeated = 1;
        return VAR_4;
    }
    return ((void*)0);
}
