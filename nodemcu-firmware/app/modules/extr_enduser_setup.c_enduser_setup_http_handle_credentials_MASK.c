
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_param_t ;
struct TYPE_3__ {int rssi; int authmode; } ;
struct station_config {char* ssid; char* password; TYPE_1__ threshold; } ;
struct TYPE_4__ {scalar_t__ lastStationStatus; scalar_t__ success; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int,int) ;
 struct station_config* FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct station_config*,int ,int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_3, unsigned short VAR_4)
{
  FUNC_0("enduser_setup_http_handle_credentials");

  VAR_2->success = 0;
  VAR_2->lastStationStatus = 0;

  char *VAR_5 = FUNC_8(VAR_3, "wifi_ssid=");
  char *VAR_6 = FUNC_8(VAR_3, "wifi_password=");
  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  {
    FUNC_0("Password or SSID string not found");
    return 1;
  }

  int VAR_7 = FUNC_1("wifi_ssid=");
  int VAR_8 = FUNC_1("wifi_password=");
  char *VAR_9 = VAR_5 + VAR_7;
  char *VAR_10 = VAR_6 + VAR_8;

  int VAR_11 = FUNC_2(VAR_9);
  int VAR_12 = FUNC_2(VAR_10);


  struct station_config *VAR_13 = FUNC_4(FUNC_5(), sizeof(struct station_config));
  FUNC_6(VAR_13, 0, sizeof(struct station_config));
  VAR_13->threshold.rssi = -127;
  VAR_13->threshold.authmode = VAR_0;

  int VAR_14;
  VAR_14 = FUNC_3(VAR_13->ssid, VAR_9, VAR_11, sizeof(VAR_13->ssid));
  VAR_14 |= FUNC_3(VAR_13->password, VAR_10, VAR_12, sizeof(VAR_13->password));
  if (VAR_14 != 0 || FUNC_7(VAR_13->ssid) == 0)
  {
    FUNC_0("Unable to decode HTTP parameter to valid password or SSID");
    return 1;
  }

  FUNC_0("");
  FUNC_0("WiFi Credentials Stored");
  FUNC_0("-----------------------");
  FUNC_0("name: ");
  FUNC_0(VAR_13->ssid);
  FUNC_0("pass: ");
  FUNC_0(VAR_13->password);
  FUNC_0("-----------------------");
  FUNC_0("");

  FUNC_9(VAR_1, (task_param_t) VAR_13);

  return 0;
}
