
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pend_disassoc; int pend_rejoin; int pend_rejoin_wpa; int ap_channel; scalar_t__ ap_key_len; scalar_t__ ap_ssid_len; scalar_t__ wifi_join_state; scalar_t__ wifi_scan_state; scalar_t__ itf_state; int cyw43_ll; } ;
typedef TYPE_1__ cyw43_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3(cyw43_t *VAR_7) {



    FUNC_1(VAR_5, VAR_1, VAR_2, 0);
    FUNC_2(VAR_5);





    FUNC_0(&VAR_7->cyw43_ll, VAR_7);

    VAR_7->itf_state = 0;
    VAR_7->wifi_scan_state = 0;
    VAR_7->wifi_join_state = 0;
    VAR_7->pend_disassoc = 0;
    VAR_7->pend_rejoin= 0;
    VAR_7->pend_rejoin_wpa = 0;
    VAR_7->ap_channel = 3;
    VAR_7->ap_ssid_len = 0;
    VAR_7->ap_key_len = 0;

    VAR_3 = ((void*)0);
}
