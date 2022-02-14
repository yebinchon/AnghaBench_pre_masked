
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct mg_str {int dummy; } ;
struct mg_connection {scalar_t__ user_data; } ;
struct http_message {int dummy; } ;
typedef int pass ;




 int FUNC_0 (struct http_message*,char*,int,char*,int) ;
 struct mg_str* FUNC_1 (struct http_message*,char*) ;
 int FUNC_2 (struct mg_str*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_0, int VAR_1,
                                     void *VAR_2) {
  struct http_message *VAR_3 = (struct http_message *) VAR_2;
  struct mg_str *VAR_4;
  char VAR_5[256] = "";
  char VAR_6[256] = "";
  int VAR_7;

  switch (VAR_1) {
    case 128:
    case 129: {
      VAR_4 = FUNC_1(VAR_3, "Sec-WebSocket-Protocol");
      if (VAR_4 != ((void*)0)) {
        if (FUNC_2(VAR_4, "myproto") == 0) {
          *(int *) VAR_0->user_data = 2;
          break;
        }
      }

      VAR_7 = FUNC_0(VAR_3, VAR_5, sizeof(VAR_5), VAR_6, sizeof(VAR_6));
      if (VAR_7 == -1) {
        *(int *) VAR_0->user_data = -1;
        break;
      }

      if (FUNC_3(VAR_5, "foo") == 0 && FUNC_3(VAR_6, "bar") == 0) {
        *(int *) VAR_0->user_data = 1;
      } else {
        *(int *) VAR_0->user_data = -2;
      }

      break;
    }
  }
}
