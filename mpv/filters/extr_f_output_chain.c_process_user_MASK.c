
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mp_user_filter {char* label; char* name; int failed; int error_eof_sent; double last_in_pts; double last_out_pts; scalar_t__ last_is_active; TYPE_2__* f; struct chain* p; } ;
struct mp_frame {int dummy; } ;
struct mp_filter_command {scalar_t__ is_active; int type; } ;
struct mp_filter {int * ppins; struct mp_user_filter* priv; } ;
struct TYPE_6__ {int failed_output_conversion; } ;
struct chain {struct mp_user_filter* convert_wrapper; int f; TYPE_1__ public; } ;
struct TYPE_7__ {int * pins; } ;


 struct mp_frame VAR_0 ;
 int FUNC_0 (struct chain*,char*,char const*) ;
 int FUNC_1 (struct chain*,char*) ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_2 (struct chain*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct mp_user_filter*,struct mp_frame) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct mp_filter_command*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct mp_filter*) ;
 int FUNC_9 (int ) ;
 double FUNC_10 (struct mp_frame) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,struct mp_frame) ;
 struct mp_frame FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void FUNC_16(struct mp_filter *VAR_3)
{
    struct mp_user_filter *VAR_4 = VAR_3->priv;
    struct chain *VAR_5 = VAR_4->p;

    FUNC_8(VAR_4->f, VAR_3);
    const char *VAR_6 = VAR_4->label ? VAR_4->label : VAR_4->name;
    FUNC_3(VAR_4->name);

    if (!VAR_4->failed && FUNC_6(VAR_4->f)) {
        if (VAR_4 == VAR_5->convert_wrapper) {

            FUNC_1(VAR_5, "Cannot convert decoder/filter output to any format "
                     "supported by the output.\n");
            VAR_5->public.failed_output_conversion = 1;
            FUNC_9(VAR_5->f);
        } else {
            FUNC_0(VAR_5, "Disabling filter %s because it has failed.\n", VAR_6);
            FUNC_7(VAR_4->f);
        }
        VAR_4->failed = 1;
    }

    if (VAR_4->failed) {
        if (VAR_4 == VAR_5->convert_wrapper) {
            if (FUNC_12(VAR_3->ppins[1])) {
                if (!VAR_4->error_eof_sent)
                    FUNC_13(VAR_3->ppins[1], VAR_0);
                VAR_4->error_eof_sent = 1;
            }
            return;
        }

        FUNC_15(VAR_3->ppins[1], VAR_3->ppins[0]);
        return;
    }

    if (FUNC_11(VAR_4->f->pins[0], VAR_3->ppins[0])) {
        struct mp_frame VAR_7 = FUNC_14(VAR_3->ppins[0]);

        FUNC_4(VAR_4, VAR_7);

        double VAR_8 = FUNC_10(VAR_7);
        if (VAR_8 != VAR_2)
            VAR_4->last_in_pts = VAR_8;

        FUNC_13(VAR_4->f->pins[0], VAR_7);
    }

    if (FUNC_11(VAR_3->ppins[1], VAR_4->f->pins[1])) {
        struct mp_frame VAR_9 = FUNC_14(VAR_4->f->pins[1]);

        double VAR_10 = FUNC_10(VAR_9);
        if (VAR_10 != VAR_2)
            VAR_4->last_out_pts = VAR_10;

        FUNC_13(VAR_3->ppins[1], VAR_9);

        struct mp_filter_command VAR_11 = {.type = VAR_1};
        if (FUNC_5(VAR_4->f, &VAR_11) && VAR_4->last_is_active != VAR_11.is_active) {
            VAR_4->last_is_active = VAR_11.is_active;
            FUNC_2(VAR_5, "[%s] (%sabled)\n", VAR_4->name,
                       VAR_4->last_is_active ? "en" : "dis");
        }
    }
}
