
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {double buffered; double speed; int paused; } ;
struct ao {double samplerate; struct priv* priv; } ;


 int FUNC_0 (struct ao*) ;
 int FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_0);
    if (!VAR_1->paused)
        FUNC_1(1000000.0 * VAR_1->buffered / VAR_0->samplerate / VAR_1->speed);
}
