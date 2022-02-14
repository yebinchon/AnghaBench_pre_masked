
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int ) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

int FUNC_6(int VAR_3, char *VAR_4[]) {
  struct mg_mgr VAR_5;
  struct mg_connection *VAR_6;
  char *VAR_7 = VAR_1;

  if (VAR_3 > 1) {
    VAR_7 = VAR_4[1];
  }

  FUNC_5("Using %s as CoAP server\n", VAR_7);

  FUNC_2(&VAR_5, 0);

  VAR_6 = FUNC_0(&VAR_5, VAR_7, VAR_0);
  if (VAR_6 == ((void*)0)) {
    FUNC_5("Unable to connect to %s\n", VAR_7);
    return -1;
  }

  FUNC_4(VAR_6);

  while (!VAR_2) {
    FUNC_3(&VAR_5, 1000000);
  }

  FUNC_1(&VAR_5);

  return 0;
}
