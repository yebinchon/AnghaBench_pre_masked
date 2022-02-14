
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {int num_close; int num_send; int num_recv; int num_connect; int num_accept; int fail; int data_rcvd; int to_send; struct mg_connection* sclient_nc; struct simple_data* sclient_data; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {struct simple_data* user_data; } ;
typedef int server_data ;
typedef int sclient_data ;
typedef int client_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct simple_data*,int ,int) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_5 (struct mg_mgr*,char const*,int ) ;
 int FUNC_6 (struct mg_mgr*) ;
 int FUNC_7 (struct mg_mgr*,int *) ;
 int FUNC_8 (struct mg_mgr*,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static const char *FUNC_10(void) {
  struct mg_mgr VAR_2;
  struct mg_connection *VAR_3, *VAR_4, *VAR_5;
  const char *VAR_6 = "tcp://127.0.0.1:8910";
  struct simple_data VAR_7, VAR_8, VAR_9;

  (void) VAR_5;
  FUNC_7(&VAR_2, ((void*)0));

  FUNC_0((VAR_3 = FUNC_4(&VAR_2, VAR_6, VAR_1)) != ((void*)0));
  VAR_3->user_data = &VAR_8;
  FUNC_3(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.sclient_data = &VAR_9;
  FUNC_3(&VAR_9, 0, sizeof(VAR_9));

  FUNC_8(&VAR_2, 1);

  FUNC_0((VAR_4 = FUNC_5(&VAR_2, VAR_6, VAR_0)) != ((void*)0));
  VAR_4->user_data = &VAR_7;
  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  FUNC_9(VAR_7.to_send, "hi");

  FUNC_8(&VAR_2, 1);
  FUNC_1(VAR_8.num_accept, 0);
  FUNC_1(VAR_9.num_accept, 1);
  FUNC_1(VAR_7.num_connect, 1);
  FUNC_1(VAR_7.num_send, 1);
  FUNC_2(VAR_7.fail, "");
  FUNC_2(VAR_8.fail, "");

  FUNC_0(VAR_8.sclient_nc != ((void*)0));
  VAR_5 = VAR_8.sclient_nc;
  FUNC_1(VAR_9.num_send, 0);
  FUNC_1(VAR_9.num_recv, 0);

  FUNC_9(VAR_9.to_send, "hello");
  FUNC_8(&VAR_2, 1);
  FUNC_2(VAR_9.fail, "");
  FUNC_1(VAR_9.num_recv, 1);
  FUNC_1(VAR_9.num_send, 0);
  FUNC_1(VAR_7.num_recv, 0);
  FUNC_2(VAR_9.data_rcvd, "hi");

  FUNC_8(&VAR_2, 1);
  FUNC_2(VAR_9.fail, "");
  FUNC_1(VAR_9.num_send, 1);

  FUNC_8(&VAR_2, 1);
  FUNC_2(VAR_7.fail, "");
  FUNC_1(VAR_7.num_recv, 1);
  FUNC_2(VAR_7.data_rcvd, "hello");

  FUNC_6(&VAR_2);

  FUNC_2(VAR_7.fail, "");
  FUNC_2(VAR_8.fail, "");
  FUNC_2(VAR_9.fail, "");

  FUNC_1(VAR_8.num_accept, 0);
  FUNC_1(VAR_8.num_connect, 0);
  FUNC_1(VAR_8.num_recv, 0);
  FUNC_1(VAR_8.num_send, 0);
  FUNC_1(VAR_8.num_close, 1);

  FUNC_1(VAR_7.num_accept, 0);
  FUNC_1(VAR_7.num_connect, 1);
  FUNC_1(VAR_7.num_recv, 1);
  FUNC_1(VAR_7.num_send, 1);
  FUNC_1(VAR_7.num_close, 1);

  FUNC_1(VAR_9.num_accept, 1);
  FUNC_1(VAR_9.num_connect, 0);
  FUNC_1(VAR_9.num_recv, 1);
  FUNC_1(VAR_9.num_send, 1);
  FUNC_1(VAR_9.num_close, 1);

  return ((void*)0);
}
