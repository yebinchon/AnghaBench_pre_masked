
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
struct station_config {scalar_t__ ssid; scalar_t__ password; int bssid; int bssid_set; } ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (char*,scalar_t__,int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*,char*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct station_config*) ;
 int FUNC_14 (struct station_config*) ;

__attribute__((used)) static int FUNC_15( lua_State* VAR_1, bool VAR_2)
{
  struct station_config VAR_3;
  char VAR_4[sizeof(VAR_3.password)+1];

  if(VAR_2)
  {
    FUNC_14(&VAR_3);
  }
  else
  {
    FUNC_13(&VAR_3);
  }

  if(VAR_3.ssid==0)
  {
    FUNC_5(VAR_1);
      return 1;
  }
  else
  {
    if(FUNC_1(VAR_1, 1) && FUNC_8(VAR_1, 1)==1)
    {
      FUNC_2(VAR_1);
      FUNC_10(VAR_4, 0, sizeof(VAR_4));
      FUNC_9(VAR_4, VAR_3.ssid, sizeof(VAR_3.ssid));
      FUNC_6(VAR_1, VAR_4);
      FUNC_7(VAR_1, -2, "ssid");

      if(FUNC_12(VAR_3.password) > 0)
      {
        FUNC_10(VAR_4, 0, sizeof(VAR_4));
        FUNC_9(VAR_4, VAR_3.password, sizeof(VAR_3.password));
        FUNC_6(VAR_1, VAR_4);
        FUNC_7(VAR_1, -2, "pwd");
      }

      FUNC_3(VAR_1, VAR_3.bssid_set);
      FUNC_7(VAR_1, -2, "bssid_set");

      FUNC_10(VAR_4, 0, sizeof(VAR_4));
      FUNC_11(VAR_4, VAR_0, FUNC_0(VAR_3.bssid));
      FUNC_6( VAR_1, VAR_4);
      FUNC_7(VAR_1, -2, "bssid");

      return 1;
    }
    else
    {
      FUNC_10(VAR_4, 0, sizeof(VAR_4));
      FUNC_9(VAR_4, VAR_3.ssid, sizeof(VAR_3.ssid));
      FUNC_6(VAR_1, VAR_4);
      FUNC_10(VAR_4, 0, sizeof(VAR_4));
      FUNC_9(VAR_4, VAR_3.password, sizeof(VAR_3.password));
      FUNC_6(VAR_1, VAR_4);
      FUNC_4( VAR_1, VAR_3.bssid_set);
      FUNC_11(VAR_4, VAR_0, FUNC_0(VAR_3.bssid));
      FUNC_6( VAR_1, VAR_4);
      return 4;
    }
  }
}
