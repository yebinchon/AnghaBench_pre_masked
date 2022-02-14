
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_decoder_wrapper {int try_spdif; } ;
struct ao_chain {int spdif_failed; int spdif_passthrough; TYPE_1__* track; int filter; } ;
struct MPContext {struct ao_chain* ao_chain; int ao; } ;
struct TYPE_2__ {struct mp_decoder_wrapper* dec; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct MPContext*,TYPE_1__*) ;
 int FUNC_3 (struct mp_decoder_wrapper*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (struct MPContext*) ;
 int FUNC_7 (struct MPContext*) ;
 int FUNC_8 (struct MPContext*) ;

void FUNC_9(struct MPContext *VAR_0)
{
    if (!VAR_0->ao)
        return;

    FUNC_1(VAR_0->ao);
    FUNC_8(VAR_0);
    FUNC_6(VAR_0);

    struct ao_chain *VAR_1 = VAR_0->ao_chain;

    if (VAR_1) {
        FUNC_7(VAR_0);
        FUNC_4(VAR_1->filter);
    }




    if (VAR_1 && VAR_1->track) {
        struct mp_decoder_wrapper *VAR_2 = VAR_1->track->dec;
        if (VAR_2 && VAR_1->spdif_failed) {
            VAR_1->spdif_passthrough = 1;
            VAR_1->spdif_failed = 0;
            VAR_2->try_spdif = 1;
            if (!FUNC_3(VAR_2)) {
                FUNC_0(VAR_0, "Error reinitializing audio.\n");
                FUNC_2(VAR_0, VAR_1->track);
            }
        }
    }

    FUNC_5(VAR_0);
}
