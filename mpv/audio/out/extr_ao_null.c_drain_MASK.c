
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ buffered; double last_time; double speed; int playing_final; scalar_t__ paused; } ;
struct ao {double samplerate; scalar_t__ untimed; struct priv* priv; } ;


 int FUNC_0 (struct ao*,char*) ;
 double FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_0->untimed) {
        VAR_1->buffered = 0;
        return;
    }

    if (VAR_1->paused)
        return;

    double VAR_2 = FUNC_1();
    if (VAR_1->buffered > 0) {
        VAR_1->buffered -= (VAR_2 - VAR_1->last_time) * VAR_0->samplerate * VAR_1->speed;
        if (VAR_1->buffered < 0) {
            if (!VAR_1->playing_final)
                FUNC_0(VAR_0, "buffer underrun\n");
            VAR_1->buffered = 0;
        }
    }
    VAR_1->last_time = VAR_2;
}
