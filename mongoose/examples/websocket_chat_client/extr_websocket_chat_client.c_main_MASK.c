
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct mg_connection* FUNC_1 (struct mg_mgr*,int ,char const*,char*,int *) ;
 int FUNC_2 (struct mg_mgr*) ;
 int FUNC_3 (struct mg_mgr*,int *) ;
 int FUNC_4 (struct mg_mgr*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(int VAR_3, char **VAR_4) {
  struct mg_mgr VAR_5;
  struct mg_connection *VAR_6;
  const char *VAR_7 = VAR_3 > 1 ? VAR_4[1] : "ws://127.0.0.1:8000";

  FUNC_3(&VAR_5, ((void*)0));

  VAR_6 = FUNC_1(&VAR_5, VAR_0, VAR_7, "ws_chat", ((void*)0));
  if (VAR_6 == ((void*)0)) {
    FUNC_0(VAR_2, "Invalid address\n");
    return 1;
  }

  while (!VAR_1) {
    FUNC_4(&VAR_5, 100);
  }
  FUNC_2(&VAR_5);

  return 0;
}
