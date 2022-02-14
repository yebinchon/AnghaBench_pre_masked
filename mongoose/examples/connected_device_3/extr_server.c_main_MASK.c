
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
typedef int cs_stat_t ;
struct TYPE_2__ {char* document_root; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (struct mg_connection*) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,char*) ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_9(void) {
  struct mg_mgr VAR_4;
  struct mg_connection *VAR_5;
  cs_stat_t VAR_6;

  FUNC_4(&VAR_4, ((void*)0));
  VAR_5 = FUNC_2(&VAR_4, VAR_1, VAR_0);
  if (VAR_5 == ((void*)0)) {
    FUNC_1(VAR_3, "Cannot bind to %s\n", VAR_1);
    FUNC_0(1);
  }


  FUNC_6(VAR_5);
  VAR_2.document_root = "web_root";

  if (FUNC_7(VAR_2.document_root, &VAR_6) != 0) {
    FUNC_1(VAR_3, "%s", "Cannot find web_root directory, exiting\n");
    FUNC_0(1);
  }

  FUNC_8("Starting web server on port %s\n", VAR_1);
  for (;;) {
    FUNC_5(&VAR_4, 1000);
  }
  FUNC_3(&VAR_4);

  return 0;
}
