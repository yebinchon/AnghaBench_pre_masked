
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct softap_config {char* ssid; int ssid_len; int channel; int max_connection; int beacon_interval; scalar_t__ ssid_hidden; int authmode; } ;
struct TYPE_2__ {int softAPchannel; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,char*,int) ;
 int FUNC_2 (struct softap_config*,int ,int) ;
 int FUNC_3 (char*,char*,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct softap_config*) ;

__attribute__((used)) static void FUNC_8(void)
{
  FUNC_0("enduser_setup_ap_start");

  struct softap_config VAR_5;
  FUNC_2(&(VAR_5), 0, sizeof(struct softap_config));





  char VAR_6[] = "SetupGadget";
  int VAR_7 = FUNC_4(VAR_6);
  FUNC_1(&(VAR_5.ssid), VAR_6, VAR_7);

  uint8_t VAR_8[6];
  FUNC_5(VAR_2, VAR_8);
  VAR_5.ssid[VAR_7] = '_';
  FUNC_3(VAR_5.ssid + VAR_7 + 1, "%02X%02X%02X", VAR_8[3], VAR_8[4], VAR_8[5]);
  VAR_5.ssid_len = VAR_7 + 7;
  VAR_5.channel = VAR_4 == ((void*)0)? 1 : VAR_4->softAPchannel;
  VAR_5.authmode = VAR_0;
  VAR_5.ssid_hidden = 0;
  VAR_5.max_connection = 5;
  VAR_5.beacon_interval = 100;
  FUNC_6(VAR_3);
  FUNC_7(&VAR_5);






}
