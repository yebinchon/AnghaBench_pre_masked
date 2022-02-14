
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; char* enable_directory_listing; } ;


 int VAR_0 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_6(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4;

  FUNC_2(&VAR_3, ((void*)0));
  FUNC_5("Starting web server on port %s\n", VAR_1);
  VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_0);
  if (VAR_4 == ((void*)0)) {
    FUNC_5("Failed to create listener\n");
    return 1;
  }


  FUNC_4(VAR_4);
  VAR_2.document_root = ".";
  VAR_2.enable_directory_listing = "yes";

  for (;;) {
    FUNC_3(&VAR_3, 1000);
  }
  FUNC_1(&VAR_3);

  return 0;
}
