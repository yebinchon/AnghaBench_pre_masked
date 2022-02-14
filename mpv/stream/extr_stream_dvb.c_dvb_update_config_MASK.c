
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ priv; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int switching_channel; } ;
typedef TYPE_2__ dvb_state_t ;
struct TYPE_10__ {int prog; TYPE_2__* state; int opts_cache; } ;
typedef TYPE_3__ dvb_priv_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5(stream_t *VAR_0)
{
    static int VAR_1 = 0;
    int VAR_2 = (int)(FUNC_4()*10);


    if (VAR_2 != VAR_1) {
        VAR_1 = VAR_2;
        dvb_priv_t *VAR_3 = (dvb_priv_t *) VAR_0->priv;
        if (FUNC_3(VAR_3->opts_cache)) {
            dvb_state_t *VAR_4 = VAR_3->state;



            if (!FUNC_1(VAR_0)) {
                FUNC_0(VAR_0, "error parsing DVB config, not tuning.");
                return;
            }

            int VAR_5 = FUNC_2(VAR_0, VAR_3->prog);
            if (VAR_5) {


                VAR_4->switching_channel = 1;
            }
        }
    }
}
