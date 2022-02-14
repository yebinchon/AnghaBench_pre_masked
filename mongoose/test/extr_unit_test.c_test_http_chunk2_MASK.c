
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int len; } ;
struct mg_connection {int * proto_data; int (* proto_data_destructor ) (int *) ;TYPE_2__ message; TYPE_1__ body; int handler; int sock; struct mg_mgr* mgr; } ;
struct http_message {int * proto_data; int (* proto_data_destructor ) (int *) ;TYPE_2__ message; TYPE_1__ body; int handler; int sock; struct mg_mgr* mgr; } ;
typedef int nc ;
typedef int hm ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct mg_connection*,int ,int) ;
 int FUNC_5 (struct mg_connection*,struct mg_connection*,char*,int ) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (struct mg_mgr*) ;
 int FUNC_8 (struct mg_mgr*,int *) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static const char *FUNC_12(void) {
  struct mg_connection VAR_4;
  struct http_message VAR_5;
  char VAR_6[100] = "5\r\nhe";
  struct mg_mgr VAR_7;
  FUNC_8(&VAR_7, ((void*)0));

  FUNC_4(&VAR_4, 0, sizeof(VAR_4));
  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
  VAR_4.mgr = &VAR_7;
  VAR_4.sock = VAR_0;
  VAR_4.handler = VAR_1;
  FUNC_6(&VAR_4);
  VAR_5.message.len = VAR_5.body.len = ~0;

  VAR_3 = 0;
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 0);


  FUNC_9(VAR_6, "llo\r");
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 0);
  FUNC_3(VAR_6, "5\r\nhello\r");

  FUNC_9(VAR_6, "\n");
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 5);
  FUNC_3(VAR_6, "hello");

  VAR_3 = 1;
  FUNC_9(VAR_6, "3\r\n:-)\r\n");
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 8);
  FUNC_3(VAR_6, "");

  VAR_3 = 0;
  FUNC_9(VAR_6, "3\r\n...\r\na\r\n0123456789\r\n0\r");
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 13);
  FUNC_3(VAR_6, "...01234567890\r");
  FUNC_2(VAR_5.message.len, (size_t) ~0);

  FUNC_9(VAR_6, "\n\r\n");
  FUNC_1(FUNC_5(&VAR_4, &VAR_5, VAR_6, FUNC_10(VAR_6)), 13);
  FUNC_3(VAR_6, "...0123456789");
  FUNC_1(VAR_5.message.len, 13);

  FUNC_3(VAR_2, "_102_102_102_102");

  FUNC_0(VAR_4.proto_data != ((void*)0));
  VAR_4.proto_data_destructor(VAR_4.proto_data);

  FUNC_7(&VAR_7);

  return ((void*)0);
}
