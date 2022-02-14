
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct ao_push_state {int final_chunk; int lock; int wakeup; int buffer; scalar_t__ still_playing; scalar_t__ paused; } ;
struct ao {double buffer; TYPE_1__* driver; scalar_t__ samplerate; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* drain ) (struct ao*) ;} ;


 int FUNC_0 (double,double) ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (struct ao*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct timespec FUNC_4 (double) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int *,struct timespec*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ao*) ;
 int FUNC_10 (struct ao*) ;
 double FUNC_11 (struct ao*) ;
 int FUNC_12 (struct ao*) ;

__attribute__((used)) static void FUNC_13(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    double VAR_2 = VAR_0->buffer / (double)VAR_0->samplerate + 1;

    FUNC_1(VAR_0, "draining...\n");

    FUNC_7(&VAR_1->lock);
    if (VAR_1->paused)
        goto done;

    VAR_1->final_chunk = 1;
    FUNC_12(VAR_0);




    struct timespec VAR_3 = FUNC_4(VAR_2);
    while (VAR_1->still_playing && FUNC_3(VAR_1->buffer) > 0) {
        if (FUNC_6(&VAR_1->wakeup, &VAR_1->lock, &VAR_3)) {
            FUNC_2(VAR_0, "Draining is taking too long, aborting.\n");
            goto done;
        }
    }

    if (VAR_0->driver->drain) {
        VAR_0->driver->drain(VAR_0);
    } else {
        double VAR_4 = FUNC_11(VAR_0);
        FUNC_5(FUNC_0(VAR_4, VAR_2) * 1e6);
    }

done:
    FUNC_8(&VAR_1->lock);

    FUNC_9(VAR_0);
}
