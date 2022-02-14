
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nodemcu_mdns_info {char* service_name; int service_port; char** txt_data; void* host_desc; void* host_name; } ;
struct TYPE_2__ {int addr; } ;
struct ip_info {TYPE_1__ ip; } ;
typedef int lua_State ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nodemcu_mdns_info*,int ,int) ;
 int FUNC_11 (struct nodemcu_mdns_info*) ;
 int FUNC_12 (char*,char const*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (int ,struct ip_info*) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(lua_State *VAR_4)
{
  struct nodemcu_mdns_info VAR_5;

  FUNC_10(&VAR_5, 0, sizeof(VAR_5));

  VAR_5.host_name = FUNC_2(VAR_4, 1);
  VAR_5.service_name = "http";
  VAR_5.service_port = 80;
  VAR_5.host_desc = VAR_5.host_name;

  if (FUNC_5(VAR_4) >= 2) {
    FUNC_3(VAR_4, 2, VAR_1);
    FUNC_8(VAR_4);
    int VAR_6 = 0;
    while (FUNC_6(VAR_4, 2) != 0 && VAR_6 < sizeof(VAR_5.txt_data) / sizeof(VAR_5.txt_data[0])) {
      FUNC_3(VAR_4, -2, VAR_0);
      const char *VAR_7 = FUNC_2(VAR_4, -2);

      if (FUNC_13(VAR_7, "port") == 0) {
 VAR_5.service_port = FUNC_1(VAR_4, -1);
      } else if (FUNC_13(VAR_7, "service") == 0) {
 VAR_5.service_name = FUNC_2(VAR_4, -1);
      } else if (FUNC_13(VAR_7, "description") == 0) {
 VAR_5.host_desc = FUNC_2(VAR_4, -1);
      } else {
 int VAR_8 = FUNC_15(VAR_7) + 1;
 const char *VAR_9 = FUNC_2(VAR_4, -1);
 char *VAR_10 = FUNC_0(VAR_8 + FUNC_15(VAR_9) + 1);
 FUNC_14(VAR_10, VAR_7);
 FUNC_12(VAR_10, "=");
 FUNC_12(VAR_10, VAR_9);
 VAR_5.txt_data[VAR_6++] = VAR_10;
      }
      FUNC_7(VAR_4, 1);
    }
  }


  struct ip_info VAR_11;

  uint8_t VAR_12 = FUNC_17();

  if (!FUNC_16((VAR_12 == 2) ? VAR_2 : VAR_3, &VAR_11) || !VAR_11.ip.addr) {
    return FUNC_4(VAR_4, "No network connection");
  }




  FUNC_9(VAR_4);




  if (!FUNC_11(&VAR_5)) {
    FUNC_9(VAR_4);
    return FUNC_4(VAR_4, "Unable to start mDns daemon");
  }

  return 0;
}
