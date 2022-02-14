
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wifi_mode_t ;
struct TYPE_7__ {int reason; } ;
struct TYPE_5__ {TYPE_3__ disconnected; } ;
struct TYPE_6__ {int event_id; TYPE_1__ event_info; } ;
typedef TYPE_2__ system_event_t ;
typedef TYPE_3__ system_event_sta_disconnected_t ;
typedef int esp_err_t ;


 int FUNC_0 (char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 () ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_7(void *VAR_7, system_event_t *VAR_8) {
   switch(VAR_8->event_id) {
    case 131:
        FUNC_0("wifi", "STA_START");
        break;
    case 134:
        FUNC_0("network", "CONNECTED");
        break;
    case 132:
        FUNC_0("network", "GOT_IP");
        VAR_5 = 1;
        VAR_6 = 0;
        break;
    case 133: {


        system_event_sta_disconnected_t *VAR_9 = &VAR_8->event_info.disconnected;
        char *VAR_10 = "";
        VAR_6 = VAR_9->reason;
        switch (VAR_9->reason) {
            case 129:

                VAR_10 = "\nbeacon timeout";
                break;
            case 128:

                VAR_10 = "\nno AP found";
                break;
            case 130:

                VAR_10 = "\nauthentication failed";
                break;
            default:

                break;
        }
        FUNC_0("wifi", "STA_DISCONNECTED, reason:%d%s", VAR_9->reason, VAR_10);

        VAR_5 = 0;
        if (VAR_4) {
            wifi_mode_t VAR_11;
            if (FUNC_2(&VAR_11) == VAR_0) {
                if (VAR_11 & VAR_2) {

                    esp_err_t VAR_12 = FUNC_1();
                    if (VAR_12 != VAR_0) {
                        FUNC_0("wifi", "error attempting to reconnect: 0x%04x", VAR_12);
                    }
                }
            }
        }
        break;
    }
    case 135:
        FUNC_0("network", "Got IPv6");
        break;
    case 137:
        FUNC_0("ethernet", "start");
        break;
    case 136:
        FUNC_0("ethernet", "stop");
        break;
    case 140:
        FUNC_0("ethernet", "LAN cable connected");
        break;
    case 139:
        FUNC_0("ethernet", "LAN cable disconnected");
        break;
    case 138:
        FUNC_0("ethernet", "Got IP");
        break;
    default:
        FUNC_0("network", "event %d", VAR_8->event_id);
        break;
    }
    return VAR_0;
}
