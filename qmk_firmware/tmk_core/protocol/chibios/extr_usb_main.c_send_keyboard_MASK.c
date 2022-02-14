
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct nkro_report {int dummy; } ;
struct TYPE_13__ {int mods; } ;
typedef TYPE_3__ report_keyboard_t ;
struct TYPE_15__ {scalar_t__ nkro; } ;
struct TYPE_14__ {TYPE_2__** epc; } ;
struct TYPE_12__ {TYPE_1__* in_state; } ;
struct TYPE_11__ {int thread; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_8__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,size_t) ;
 int FUNC_5 (TYPE_4__*,size_t,int*,int) ;

void FUNC_6(report_keyboard_t *VAR_8) {
    FUNC_0();
    if (FUNC_3(&VAR_4) != VAR_3) {
        FUNC_1();
        return;
    }
    FUNC_1();
    {


        FUNC_0();
        if (FUNC_4(&VAR_4, VAR_0)) {




            FUNC_2(&(&VAR_4)->epc[VAR_0]->in_state->thread);
        }
        uint8_t *VAR_9, VAR_10;
        if (VAR_5) {
            VAR_9 = (uint8_t *)VAR_8;
            VAR_10 = VAR_1;
        } else {
            VAR_9 = &VAR_8->mods;
            VAR_10 = 8;
        }
        FUNC_5(&VAR_4, VAR_0, VAR_9, VAR_10);
        FUNC_1();
    }
    VAR_6 = *VAR_8;
}
