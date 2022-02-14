
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*,char*,int ) ;
 int FUNC_5 (struct mg_connection*) ;
 int FUNC_6 (struct mg_connection*,scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 char* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(void) {
  struct mg_mgr VAR_6;
  struct mg_connection *VAR_7;
  FUNC_9(FUNC_7());

  FUNC_2(&VAR_6, ((void*)0));
  VAR_7 = FUNC_0(&VAR_6, VAR_4, VAR_1);

  FUNC_5(VAR_7);
  VAR_5.document_root = ".";
  FUNC_4(VAR_7, "/login.html", VAR_2);
  FUNC_4(VAR_7, "/logout", VAR_3);
  FUNC_6(VAR_7, FUNC_7() + VAR_0);

  FUNC_8("Starting web server on port %s\n", VAR_4);
  for (;;) {
    FUNC_3(&VAR_6, 1000);
  }
  FUNC_1(&VAR_6);

  return 0;
}
