
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
struct netif {int ip_addr; TYPE_1__* dhcp; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct mg_bind_opts {char const** error_string; } ;
typedef int ip_addr_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct netif*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct netif*) ;
 int FUNC_6 (int ,int *) ;
 char* FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 () ;
 struct mg_connection* FUNC_9 (struct mg_mgr*,char*,int ,struct mg_bind_opts) ;
 int FUNC_10 (struct mg_mgr*,int *) ;
 int FUNC_11 (struct mg_mgr*,int ) ;
 int FUNC_12 (struct mg_connection*) ;
 int FUNC_13 (struct netif*,int *,int *,int *,int *,int ,int ) ;
 int FUNC_14 (struct netif*) ;
 int FUNC_15 (struct netif*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 () ;

int FUNC_18(void) {
  struct netif VAR_7;

  FUNC_3();
  FUNC_0();
  FUNC_2(1);

  FUNC_8();

  FUNC_1(0, 0);
  FUNC_1(1, 0);
  FUNC_1(2, 0);
  FUNC_1(3, 0);
  ip_addr_t VAR_8, VAR_9, VAR_10;
  if (!FUNC_6(VAR_2, &VAR_8) || !FUNC_6(VAR_3, &VAR_9) ||
      !FUNC_6(VAR_1, &VAR_10)) {
    FUNC_16("Invalid static IP configuration.\r\n");
    FUNC_1(3, 1);
    return 1;
  } else {
    FUNC_13(&VAR_7, &VAR_8, &VAR_9, &VAR_10, ((void*)0), VAR_6, VAR_4);
    FUNC_15(&VAR_7);
  }

  FUNC_14(&VAR_7);
  FUNC_16("Setting up HTTP server...\r\n");

  struct mg_mgr VAR_11;
  FUNC_10(&VAR_11, ((void*)0));

  const char *VAR_12;
  struct mg_bind_opts VAR_13 = {};
  VAR_13.error_string = &VAR_12;
  struct mg_connection *VAR_14 = FUNC_9(&VAR_11, "80", VAR_5, VAR_13);
  if (VAR_14 == ((void*)0)) {
    FUNC_16("Failed to create listener: %s\r\n", VAR_12);
    FUNC_1(3, 1);
    return 1;
  }
  FUNC_12(VAR_14);
  FUNC_16("Server address: http://%s/\r\n", FUNC_7(&VAR_7));

  while (1) {

    FUNC_5(&VAR_7);


    FUNC_17();


    FUNC_11(&VAR_11, 0);
  }

  return 0;
}
