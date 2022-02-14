
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {struct mg_connection* user_data; int flags; } ;
typedef int sock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,int ,int ) ;
 int FUNC_3 (struct mg_mgr*,char*,int ) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,char*,int ) ;
 int FUNC_5 (struct mg_mgr*) ;
 int FUNC_6 (struct mg_mgr*,int *) ;
 int FUNC_7 (struct mg_mgr*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (char*,char*) ;

int FUNC_12(int VAR_9, char *VAR_10[]) {
  struct mg_mgr VAR_11;

  if (VAR_9 != 3) {
    FUNC_1(VAR_7, "Usage: %s <port> <client|server>\n", VAR_10[0]);
    FUNC_0(VAR_0);
  } else if (FUNC_11(VAR_10[2], "client") == 0) {
    sock_t VAR_12[2];
    struct mg_connection *VAR_13, *VAR_14;

    FUNC_6(&VAR_11, ((void*)0));


    VAR_14 = FUNC_4(&VAR_11, VAR_10[1], VAR_5);
    if (VAR_14 == ((void*)0)) {
      FUNC_1(VAR_7, "Cannot connect to port %s\n", VAR_10[1]);
      FUNC_0(VAR_0);
    }
    VAR_14->flags |= VAR_3;


    FUNC_8(VAR_12, VAR_4);
    FUNC_9(VAR_8, &VAR_12[1]);


    VAR_13 = FUNC_2(&VAR_11, VAR_12[0], VAR_5);
    VAR_13->flags |= VAR_2;
    VAR_13->user_data = VAR_14;

  } else {

    FUNC_6(&VAR_11, ((void*)0));
    FUNC_3(&VAR_11, VAR_10[1], VAR_6);
    FUNC_10("Starting pubsub server on port %s\n", VAR_10[1]);
  }

  for (;;) {
    FUNC_7(&VAR_11, 1000);
  }
  FUNC_5(&VAR_11);

  return VAR_1;
}
