
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*) ;
 int FUNC_2 (struct mg_mgr*,int *) ;
 int FUNC_3 (struct mg_mgr*,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,char*,...) ;
 char* VAR_3 ;
 TYPE_1__ VAR_4 ;

int FUNC_8(void) {
  struct mg_mgr VAR_5;
  struct mg_connection *VAR_6;

  FUNC_2(&VAR_5, ((void*)0));
  VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_2);
  if (VAR_6 == ((void*)0)) {
    FUNC_7("Cannot start on port %s\n", VAR_3);
    return VAR_0;
  }


  FUNC_4(VAR_6);
  VAR_4.document_root = ".";


  FUNC_5(VAR_6, FUNC_6() + 2.5);

  FUNC_7("Starting on port %s, time: %.2lf\n", VAR_3, FUNC_6());
  for (;;) {
    FUNC_3(&VAR_5, 1000);
  }
  FUNC_1(&VAR_5);

  return VAR_1;
}
