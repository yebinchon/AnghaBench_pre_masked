
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int,char**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char**) ;

int FUNC_4(int VAR_1, char **VAR_2)
{
 bool VAR_3 = 0;
 const char *VAR_4 = VAR_2[0];

restart:
 if (FUNC_2(VAR_2[0], "hostapd"))
  return FUNC_1(VAR_1, VAR_2);
 else if (FUNC_2(VAR_2[0], "wpa_supplicant"))
  return FUNC_3(VAR_1, VAR_2);

 if (!VAR_3 && VAR_1 > 1) {
  VAR_2++;
  VAR_1--;
  VAR_3 = 1;
  goto restart;
 }

 FUNC_0(VAR_0, "Invalid command.\nUsage: %s wpa_supplicant|hostapd [<arguments>]\n", VAR_4);
 return 255;
}
