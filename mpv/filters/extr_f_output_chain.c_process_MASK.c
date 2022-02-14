
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {scalar_t__ type; } ;
struct mp_filter {int * ppins; struct chain* priv; } ;
struct TYPE_2__ {int got_output_eof; int update_subtitles_ctx; int (* update_subtitles ) (int ,int ) ;} ;
struct chain {TYPE_1__ public; int filters_out; int filters_in; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct chain*,char*) ;
 int FUNC_1 (struct mp_frame) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct mp_frame) ;
 struct mp_frame FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mp_filter *VAR_2)
{
    struct chain *VAR_3 = VAR_2->priv;

    if (FUNC_2(VAR_3->filters_in, VAR_2->ppins[0])) {
        struct mp_frame VAR_4 = FUNC_4(VAR_2->ppins[0]);

        if (VAR_4.type == VAR_0)
            FUNC_0(VAR_3, "filter input EOF\n");

        if (VAR_4.type == VAR_1 && VAR_3->public.update_subtitles) {
            VAR_3->public.update_subtitles(VAR_3->public.update_subtitles_ctx,
                                       FUNC_1(VAR_4));
        }

        FUNC_3(VAR_3->filters_in, VAR_4);
    }

    if (FUNC_2(VAR_2->ppins[1], VAR_3->filters_out)) {
        struct mp_frame VAR_5 = FUNC_4(VAR_3->filters_out);

        VAR_3->public.got_output_eof = VAR_5.type == VAR_0;
        if (VAR_3->public.got_output_eof)
            FUNC_0(VAR_3, "filter output EOF\n");

        FUNC_3(VAR_2->ppins[1], VAR_5);
    }
}
