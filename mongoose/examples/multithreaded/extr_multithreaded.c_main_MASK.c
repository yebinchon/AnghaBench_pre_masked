
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; char* enable_directory_listing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (struct mg_connection*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,struct mg_mgr*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 char* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;

int FUNC_12(void) {
  struct mg_mgr VAR_11;
  struct mg_connection *VAR_12;
  int VAR_13;

  if (FUNC_7(VAR_9, VAR_2) == 0) {
    FUNC_9("Opening socket pair");
    FUNC_1(1);
  }

  FUNC_11(VAR_1, VAR_8);
  FUNC_11(VAR_0, VAR_8);

  FUNC_4(&VAR_11, ((void*)0));

  VAR_12 = FUNC_2(&VAR_11, VAR_4, VAR_3);
  if (VAR_12 == ((void*)0)) {
    FUNC_10("Failed to create listener\n");
    return 1;
  }

  FUNC_6(VAR_12);
  VAR_5.document_root = ".";
  VAR_5.enable_directory_listing = "no";

  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
    FUNC_8(VAR_10, &VAR_11);
  }

  FUNC_10("Started on port %s\n", VAR_4);
  while (VAR_7 == 0) {
    FUNC_5(&VAR_11, 200);
  }

  FUNC_3(&VAR_11);

  FUNC_0(VAR_9[0]);
  FUNC_0(VAR_9[1]);

  return 0;
}
