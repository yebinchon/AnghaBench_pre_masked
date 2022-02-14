
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int ) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;

int FUNC_7(void) {
  struct mg_mgr VAR_6;
  struct mg_connection *VAR_7;

  FUNC_6(VAR_1, VAR_5);
  FUNC_6(VAR_0, VAR_5);

  FUNC_2(&VAR_6, 0);

  VAR_7 = FUNC_0(&VAR_6, VAR_3, VAR_2);
  if (VAR_7 == ((void*)0)) {
    FUNC_5("Unable to start listener at %s\n", VAR_3);
    return -1;
  }

  FUNC_5("Listening for CoAP messages at %s\n", VAR_3);

  FUNC_4(VAR_7);

  while (!VAR_4) {
    FUNC_3(&VAR_6, 1000000);
  }

  FUNC_5("Exiting on signal %d\n", VAR_4);

  FUNC_1(&VAR_6);
  return 0;
}
