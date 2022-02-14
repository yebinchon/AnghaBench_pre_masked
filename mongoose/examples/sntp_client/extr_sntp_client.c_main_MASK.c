
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,int ,char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_5() {
  struct mg_mgr VAR_4;
  struct mg_connection *VAR_5;

  FUNC_2(&VAR_4, ((void*)0));

  VAR_5 = FUNC_4(&VAR_4, VAR_0, VAR_1);

  if (VAR_5 == ((void*)0)) {
    FUNC_0(VAR_3, "Failed to connect to %s\n", VAR_1);
    return -1;
  }

  while (VAR_2 == 0) {
    FUNC_3(&VAR_4, 1000);
  }

  FUNC_1(&VAR_4);

  return 0;
}
