
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int *) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

int FUNC_8(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;

  FUNC_4(&VAR_3, ((void*)0));

  if ((VAR_4 = FUNC_2(&VAR_3, VAR_1, ((void*)0))) == ((void*)0)) {
    FUNC_1(VAR_2, "mg_bind(%s) failed\n", VAR_1);
    FUNC_0(VAR_0);
  }
  FUNC_6(VAR_4);

  FUNC_7("Starting socks5 proxy server on %s\n", VAR_1);
  for (;;) {
    FUNC_5(&VAR_3, 1000);
  }
  FUNC_3(&VAR_3);

  return 0;
}
