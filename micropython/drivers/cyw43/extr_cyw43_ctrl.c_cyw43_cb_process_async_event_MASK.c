
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int trace_flags; int wifi_scan_state; int (* wifi_scan_cb ) (int ,int *) ;int wifi_join_state; int pend_rejoin; int pend_rejoin_wpa; int pend_disassoc; int wifi_scan_env; } ;
typedef TYPE_2__ cyw43_t ;
struct TYPE_8__ {int scan_result; } ;
struct TYPE_10__ {scalar_t__ event_type; int status; int reason; int flags; int interface; TYPE_1__ u; } ;
typedef TYPE_3__ cyw43_async_event_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int VAR_19 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(void *VAR_20, const cyw43_async_event_t *VAR_21) {
    cyw43_t *VAR_22 = VAR_20;

    if (VAR_22->trace_flags & VAR_9) {
        FUNC_0(VAR_21);
    }

    if (VAR_21->event_type == VAR_3 && VAR_22->wifi_scan_state == 1) {

        if (VAR_21->status == 8) {

            int VAR_23 = VAR_22->wifi_scan_cb(VAR_22->wifi_scan_env, &VAR_21->u.scan_result);
            if (VAR_23 != 0) {

            }
        } else if (VAR_21->status == 0) {

            VAR_22->wifi_scan_state = 2;
        }

    } else if (VAR_21->event_type == VAR_2) {
        FUNC_1(VAR_22, VAR_8);
        VAR_22->wifi_join_state = 0x0000;
    } else if (VAR_21->event_type == VAR_5) {
        if (VAR_21->status == 0 && VAR_21->reason == 8) {

            VAR_22->pend_rejoin = 1;
            VAR_22->pend_rejoin_wpa = 1;
            FUNC_3(VAR_10, VAR_19);
        }
    } else if (VAR_21->event_type == VAR_7) {
        if (VAR_21->status == 0) {

        } else if (VAR_21->status == 3 && VAR_21->reason == 0) {
            VAR_22->wifi_join_state = VAR_18;

        } else {

            VAR_22->wifi_join_state = VAR_15;
        }
    } else if (VAR_21->event_type == VAR_0) {
        if (VAR_21->status == 0) {
            VAR_22->wifi_join_state |= VAR_13;
        } else if (VAR_21->status == 6) {

        } else {

            VAR_22->wifi_join_state = VAR_14;
        }
    } else if (VAR_21->event_type == VAR_1) {
        if (VAR_21->status == 0 && VAR_21->reason == 2) {

            VAR_22->pend_disassoc = 1;
            FUNC_3(VAR_10, VAR_19);
        }
    } else if (VAR_21->event_type == VAR_4) {
        if (VAR_21->status == 0) {
            if (VAR_21->flags & 1) {

                if (VAR_21->interface == VAR_8) {
                    VAR_22->wifi_join_state |= VAR_17;
                } else {
                    FUNC_2(VAR_22, VAR_21->interface);
                }
            } else {

                FUNC_1(VAR_22, VAR_21->interface);
            }
        }
    } else if (VAR_21->event_type == VAR_6) {
        if (VAR_21->status == 6) {
            VAR_22->wifi_join_state |= VAR_16;
        } else if ((VAR_21->status == 4 || VAR_21->status == 8 || VAR_21->status == 11) && VAR_21->reason == 15) {


            VAR_22->pend_rejoin = 1;
            FUNC_3(VAR_10, VAR_19);
        } else {

            VAR_22->wifi_join_state = VAR_14;
        }
    }

    if (VAR_22->wifi_join_state == VAR_12) {

        VAR_22->wifi_join_state = VAR_11;
        FUNC_2(VAR_22, VAR_8);
    }
}
