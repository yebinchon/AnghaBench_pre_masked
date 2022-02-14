
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_mgr*,char const*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (char*,char const*,char const*) ;

int FUNC_5(void) {
  struct mg_mgr VAR_1;
  const char *VAR_2 = "udp://1234", *VAR_3 = "udp://127.0.0.1:17000";

  FUNC_2(&VAR_1, ((void*)0));
  FUNC_0(&VAR_1, VAR_2, VAR_0);
  FUNC_0(&VAR_1, VAR_3, VAR_0);

  FUNC_4("Starting echo mgr on ports %s, %s\n", VAR_2, VAR_3);
  for (;;) {
    FUNC_3(&VAR_1, 1000);
  }
  FUNC_1(&VAR_1);

  return 0;
}
