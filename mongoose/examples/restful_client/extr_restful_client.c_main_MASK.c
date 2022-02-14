
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,int ,char*,int *,int *) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;

int FUNC_6(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;

  FUNC_2(&VAR_3, ((void*)0));
  VAR_4 = FUNC_0(&VAR_3, VAR_0, VAR_2, ((void*)0), ((void*)0));
  FUNC_4(VAR_4);

  FUNC_5("Starting RESTful client against %s\n", VAR_2);
  while (VAR_1 == 0) {
    FUNC_3(&VAR_3, 1000);
  }
  FUNC_1(&VAR_3);

  return 0;
}
