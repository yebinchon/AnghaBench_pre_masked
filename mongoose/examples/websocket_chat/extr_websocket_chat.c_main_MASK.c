
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
 int VAR_3 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (char*,char*) ;
 char* VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_8(void) {
  struct mg_mgr VAR_10;
  struct mg_connection *VAR_11;

  FUNC_7(VAR_1, VAR_7);
  FUNC_7(VAR_0, VAR_7);
  FUNC_6(VAR_9, ((void*)0), VAR_2, 0);
  FUNC_6(VAR_8, ((void*)0), VAR_2, 0);

  FUNC_2(&VAR_10, ((void*)0));

  VAR_11 = FUNC_0(&VAR_10, VAR_4, VAR_3);
  FUNC_4(VAR_11);
  VAR_5.document_root = ".";
  VAR_5.enable_directory_listing = "yes";

  FUNC_5("Started on port %s\n", VAR_4);
  while (VAR_6 == 0) {
    FUNC_3(&VAR_10, 200);
  }
  FUNC_1(&VAR_10);

  return 0;
}
