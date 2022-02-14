
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int os_signal_t ;
typedef int os_param_t ;
struct TYPE_3__ {int par; int sig; } ;
typedef TYPE_1__ os_event_t ;
struct TYPE_4__ {int i_put; int qlen; int i_get; TYPE_1__* queue; } ;


 int FUNC_0 (int,int ,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

bool FUNC_5(uint8 VAR_1, os_signal_t VAR_2, os_param_t VAR_3) {




    FUNC_1();

    const int VAR_4 = FUNC_4(VAR_1);
    os_event_t *VAR_5 = VAR_0[VAR_4].queue;
    if (VAR_0[VAR_4].i_put == -1) {

        FUNC_3("ets_post: task %d queue full\n", VAR_1);
        return 1;
    }
    VAR_5 = &VAR_5[VAR_0[VAR_4].i_put++];
    VAR_5->sig = VAR_2;
    VAR_5->par = VAR_3;
    if (VAR_0[VAR_4].i_put == VAR_0[VAR_4].qlen) {
        VAR_0[VAR_4].i_put = 0;
    }
    if (VAR_0[VAR_4].i_put == VAR_0[VAR_4].i_get) {

        VAR_0[VAR_4].i_put = -1;
    }



    FUNC_2();

    return 0;

}
