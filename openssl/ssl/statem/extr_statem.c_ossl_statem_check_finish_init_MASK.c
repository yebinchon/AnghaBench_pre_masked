
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hand_state; } ;
struct TYPE_6__ {scalar_t__ early_data_state; TYPE_1__ statem; int server; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;

void FUNC_1(SSL *VAR_6, int VAR_7)
{
    if (VAR_7 == -1) {
        if (VAR_6->statem.hand_state == VAR_5
                || VAR_6->statem.hand_state == VAR_4) {
            FUNC_0(VAR_6, 1);
            if (VAR_6->early_data_state == VAR_2) {




                VAR_6->early_data_state = VAR_1;
            }
        }
    } else if (!VAR_6->server) {
        if ((VAR_7 && (VAR_6->statem.hand_state == VAR_5
                      || VAR_6->statem.hand_state == VAR_4)
                  && VAR_6->early_data_state != VAR_3)
                || (!VAR_7 && VAR_6->statem.hand_state == VAR_4)) {
            FUNC_0(VAR_6, 1);




            if (VAR_7 && VAR_6->early_data_state == VAR_2)
                VAR_6->early_data_state = VAR_1;
        }
    } else {
        if (VAR_6->early_data_state == VAR_0
                && VAR_6->statem.hand_state == VAR_4)
            FUNC_0(VAR_6, 1);
    }
}
