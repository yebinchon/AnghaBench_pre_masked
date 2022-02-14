
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int temp ;
struct station_config {char* ssid; char* password; int bssid; scalar_t__ bssid_set; } ;
typedef int lua_State ;


 char* FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct station_config*) ;

__attribute__((used)) static int FUNC_13( lua_State* VAR_1 )
{
  struct station_config VAR_2[5];
  char VAR_3[sizeof(VAR_2[0].password)+1];
  uint8 VAR_4 = FUNC_12(VAR_2);




  FUNC_3(VAR_1);
  FUNC_4(VAR_1, VAR_4);
  FUNC_6(VAR_1, -2, "qty");
  FUNC_1("\n\t# of APs stored in flash:%d\n", VAR_4);
  FUNC_1(" %-6s %-32s %-64s %-17s\n", "index:", "ssid:", "password:", "bssid:");

  for(int VAR_5=0;VAR_5<VAR_4;VAR_5++)
  {
    FUNC_3(VAR_1);

    FUNC_9(VAR_3, 0, sizeof(VAR_3));
    FUNC_8(VAR_3, VAR_2[VAR_5].ssid, sizeof(VAR_2[VAR_5].ssid));
    FUNC_5(VAR_1, VAR_3);
    FUNC_6(VAR_1, -2, "ssid");




    FUNC_9(VAR_3, 0, sizeof(VAR_3));
    if(FUNC_11(VAR_2[VAR_5].password) > 0)
    {
      FUNC_8(VAR_3, VAR_2[VAR_5].password, sizeof(VAR_2[VAR_5].password));
      FUNC_5(VAR_1, VAR_3);
      FUNC_6(VAR_1, -2, "pwd");
    }




    FUNC_9(VAR_3, 0, sizeof(VAR_3));
    if (VAR_2[VAR_5].bssid_set)
    {
      FUNC_10(VAR_3, VAR_0, FUNC_0(VAR_2[VAR_5].bssid));
      FUNC_5(VAR_1, VAR_3);
      FUNC_6(VAR_1, -2, "bssid");
    }




    FUNC_4(VAR_1, VAR_5+1);
    FUNC_2(VAR_1, -2);
    FUNC_7(VAR_1, -3);
  }
  return 1;
}
