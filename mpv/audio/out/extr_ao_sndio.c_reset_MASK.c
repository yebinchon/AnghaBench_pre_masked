
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int playing; int hdl; scalar_t__ delay; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->playing) {
        FUNC_1(VAR_0, "Blocking until remaining audio is played... (sndio design bug).\n");

        VAR_1->playing = 0;

        if (!FUNC_3(VAR_1->hdl))
            FUNC_0(VAR_0, "reset: couldn't stop\n");
        VAR_1->delay = 0;
        if (!FUNC_2(VAR_1->hdl))
            FUNC_0(VAR_0, "reset: couldn't start\n");
    }
}
