
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,int ,int ) ;
 int FUNC_1 (struct mg_mgr*,int *) ;
 int FUNC_2 (struct mg_mgr*,int) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void *VAR_2) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;

  FUNC_4("\r\n\r\nSDK version: %s\r\n", FUNC_7());
  FUNC_4("Free RAM: %d\r\n", FUNC_6());
  FUNC_5();

  FUNC_1(&VAR_3, ((void*)0));

  VAR_4 = FUNC_0(&VAR_3, VAR_0, VAR_1);
  if (VAR_4 == ((void*)0)) {
    FUNC_4("Error setting up listener!\n");
    return;
  }
  FUNC_3(VAR_4);

  while (1) {
    FUNC_2(&VAR_3, 1000);
  }
}
