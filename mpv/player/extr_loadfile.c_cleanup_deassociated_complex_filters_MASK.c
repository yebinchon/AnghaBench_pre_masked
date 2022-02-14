
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct track {int selected; TYPE_1__* dec; scalar_t__ ao_c; scalar_t__ vo_c; scalar_t__ sink; } ;
struct MPContext {int num_tracks; TYPE_3__* ao_chain; TYPE_2__* vo_chain; struct track** tracks; } ;
struct TYPE_6__ {int filter_src; int dec_src; } ;
struct TYPE_5__ {int filter_src; int dec_src; } ;
struct TYPE_4__ {int f; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tracks; VAR_1++) {
        struct track *VAR_2 = VAR_0->tracks[VAR_1];
        if (!(VAR_2->sink || VAR_2->vo_c || VAR_2->ao_c)) {
            if (VAR_2->dec && !VAR_2->vo_c && !VAR_2->ao_c) {
                FUNC_0(VAR_2->dec->f);
                VAR_2->dec = ((void*)0);
            }
            VAR_2->selected = 0;
        }
    }

    if (VAR_0->vo_chain && !VAR_0->vo_chain->dec_src &&
        !VAR_0->vo_chain->filter_src)
    {
        FUNC_2(VAR_0);
    }
    if (VAR_0->ao_chain && !VAR_0->ao_chain->dec_src &&
        !VAR_0->ao_chain->filter_src)
    {
        FUNC_1(VAR_0);
    }
}
