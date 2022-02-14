
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {char* hexdump_file; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char*,int ) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_mgr*,int) ;
 int FUNC_7 (struct mg_connection*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*) ;

int FUNC_9(int VAR_5, char *VAR_6[]) {
  struct mg_mgr VAR_7;
  struct mg_connection *VAR_8;
  int VAR_9;

  FUNC_5(&VAR_7, ((void*)0));
  VAR_3 = FUNC_2("127.0.0.1");


  for (VAR_9 = 1; VAR_9 < VAR_5; VAR_9++) {
    if (FUNC_8(VAR_6[VAR_9], "-D") == 0) {
      VAR_7.hexdump_file = VAR_6[++VAR_9];
    } else if (FUNC_8(VAR_6[VAR_9], "-l") == 0 && VAR_9 + 1 < VAR_5) {
      VAR_2 = VAR_6[++VAR_9];
    } else {
      VAR_3 = FUNC_2(VAR_6[VAR_9]);
    }
  }

  FUNC_1(VAR_4, "Listening on '%s'\n", VAR_2);
  if ((VAR_8 = FUNC_3(&VAR_7, VAR_2, VAR_0)) == ((void*)0)) {
    FUNC_1(VAR_4, "cannot bind to socket\n");
    FUNC_0(1);
  }
  FUNC_7(VAR_8);

  while (VAR_1 == 0) {
    FUNC_6(&VAR_7, 1000);
  }
  FUNC_4(&VAR_7);

  return 0;
}
