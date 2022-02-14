
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int crc_ver_init; int config_refresh; int config_ncdl; } ;
typedef TYPE_1__ nvram_header_t ;
typedef int nvram_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(nvram_handle_t *VAR_0)
{
 nvram_header_t *VAR_1 = FUNC_2(VAR_0);
 char VAR_2[] = "0xXXXXXXXX", *VAR_3, *VAR_4, *VAR_5;


 FUNC_0(VAR_0);


 VAR_3 = (char *) &VAR_1[1];

 for (; *VAR_3; VAR_3 = VAR_4 + FUNC_6(VAR_4) + 1) {
  if (!(VAR_5 = FUNC_5(VAR_3, '=')))
   break;
  *VAR_5 = '\0';
  VAR_4 = VAR_5 + 1;
  FUNC_3(VAR_0, VAR_3, VAR_4);
  *VAR_5 = '=';
 }


 if (!FUNC_1(VAR_0, "sdram_init")) {
  FUNC_4(VAR_2, "0x%04X", (uint16_t)(VAR_1->crc_ver_init >> 16));
  FUNC_3(VAR_0, "sdram_init", VAR_2);
 }
 if (!FUNC_1(VAR_0, "sdram_config")) {
  FUNC_4(VAR_2, "0x%04X", (uint16_t)(VAR_1->config_refresh & 0xffff));
  FUNC_3(VAR_0, "sdram_config", VAR_2);
 }
 if (!FUNC_1(VAR_0, "sdram_refresh")) {
  FUNC_4(VAR_2, "0x%04X",
   (uint16_t)((VAR_1->config_refresh >> 16) & 0xffff));
  FUNC_3(VAR_0, "sdram_refresh", VAR_2);
 }
 if (!FUNC_1(VAR_0, "sdram_ncdl")) {
  FUNC_4(VAR_2, "0x%08X", VAR_1->config_ncdl);
  FUNC_3(VAR_0, "sdram_ncdl", VAR_2);
 }

 return 0;
}
