
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int* user_data; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct mg_connection* FUNC_1 (struct mg_mgr*,char*,int ) ;
 int FUNC_2 (struct mg_mgr*,int ,char*,int *,int *) ;
 int FUNC_3 (struct mg_mgr*,int ,char*,char*,int *) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (struct mg_mgr*,int,int ,int*,void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *FUNC_8() {
  int VAR_3;
  struct mg_connection *VAR_4;
  struct mg_mgr VAR_5;
  FUNC_5(&VAR_5, ((void*)0));

  VAR_4 = FUNC_1(&VAR_5, "127.0.0.1:1234", VAR_2);
  FUNC_6(VAR_4);
  VAR_4->user_data = &VAR_3;

  VAR_3 = 0;
  FUNC_2(&VAR_5, VAR_1,
                  "http://foo:bar@127.0.0.1:1234", ((void*)0), ((void*)0));
  FUNC_7(&VAR_5, 4, VAR_0, &VAR_3, (void *) 1);
  FUNC_0(VAR_3, 1);

  VAR_3 = 0;
  FUNC_3(&VAR_5, VAR_1, "ws://foo:bar@127.0.0.1:1234",
                ((void*)0), ((void*)0));
  FUNC_7(&VAR_5, 4, VAR_0, &VAR_3, (void *) 1);
  FUNC_0(VAR_3, 1);


  VAR_3 = 0;
  FUNC_3(&VAR_5, VAR_1, "ws://127.0.0.1:1234",
                "myproto", ((void*)0));
  FUNC_7(&VAR_5, 4, VAR_0, &VAR_3, (void *) 2);
  FUNC_0(VAR_3, 2);

  FUNC_4(&VAR_5);
  return ((void*)0);
}
