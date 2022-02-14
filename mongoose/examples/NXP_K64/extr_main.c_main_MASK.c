
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
struct netif {int ip_addr; TYPE_1__* dhcp; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct mg_bind_opts {char const** error_string; } ;
typedef int ip_addr_t ;
struct TYPE_5__ {int CESR; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_2__ MPU_Type ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct netif*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 () ;
 struct mg_connection* FUNC_12 (struct mg_mgr*,char*,int ,struct mg_bind_opts) ;
 int FUNC_13 (struct mg_mgr*,int *) ;
 int FUNC_14 (struct mg_mgr*,int ) ;
 int FUNC_15 (struct mg_connection*) ;
 int FUNC_16 (struct netif*,int *,int *,int *,int *,int ,int ) ;
 int FUNC_17 (struct netif*) ;
 int FUNC_18 (struct netif*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 () ;

int FUNC_21(void) {
  struct netif VAR_9;
  MPU_Type *VAR_10 = VAR_1;
  FUNC_2();
  FUNC_0();
  FUNC_1();

  VAR_10->CESR &= ~VAR_2;
  FUNC_11();
  FUNC_8();
  FUNC_6();
  FUNC_19("Waiting for link...\r\n");
  ip_addr_t VAR_11, VAR_12, VAR_13;
  if (!FUNC_9(VAR_4, &VAR_11) || !FUNC_9(VAR_5, &VAR_12) ||
      !FUNC_9(VAR_3, &VAR_13)) {
    FUNC_19("Invalid static IP configuration.\r\n");
    return 1;
  } else {
    FUNC_16(&VAR_9, &VAR_11, &VAR_12, &VAR_13, ((void*)0), VAR_7, VAR_6);
    FUNC_18(&VAR_9);
  }

  FUNC_17(&VAR_9);
  FUNC_19("Setting up HTTP server...\r\n");

  struct mg_mgr VAR_14;
  FUNC_13(&VAR_14, ((void*)0));

  const char *VAR_15;
  struct mg_bind_opts VAR_16 = {};
  VAR_16.error_string = &VAR_15;
  struct mg_connection *VAR_17 = FUNC_12(&VAR_14, "80", VAR_8, VAR_16);
  if (VAR_17 == ((void*)0)) {
    FUNC_19("Failed to create listener: %s\r\n", VAR_15);
    FUNC_6();
    FUNC_3();
    return 1;
  }
  FUNC_15(VAR_17);
  FUNC_19("Server address: http://%s/\r\n", FUNC_10(&VAR_9));
  FUNC_5();
  FUNC_4();

  while (1) {
    FUNC_20();
    FUNC_14(&VAR_14, 0);
  }

  return 0;
}
