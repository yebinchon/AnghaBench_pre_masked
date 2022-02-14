
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (struct mg_connection*,char*,int ) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int VAR_3 ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_4, char *VAR_5[]) {
  struct mg_mgr VAR_6;
  char VAR_7[VAR_0];

  FUNC_4(&VAR_6, ((void*)0));

  if (VAR_4 != 3) {
    FUNC_1(VAR_3, "Usage: %s <server:port> <data>\n", VAR_5[0]);
    FUNC_0(VAR_1);
  }

  FUNC_7(VAR_7, sizeof(VAR_7), "udp://%s", VAR_5[1]);

  FUNC_1(VAR_3, "Connecting to '%s'\n", VAR_7);

  struct mg_connection *VAR_8 = FUNC_2(&VAR_6, VAR_7, VAR_2);

  if (VAR_8 == ((void*)0)) {
    FUNC_1(VAR_3, "Failed to connect");
    FUNC_0(1);
  }

  FUNC_1(VAR_3, "Sending '%s'\n", VAR_5[2]);

  FUNC_6(VAR_8, VAR_5[2], FUNC_8(VAR_5[2]));

  FUNC_1(VAR_3, "Waiting for data\n");

  for (;;) {
    FUNC_5(&VAR_6, 10);
  }
  FUNC_3(&VAR_6);

  return 0;
}
