
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int uri; } ;




 int FUNC_0 (struct mg_connection*) ;
 int FUNC_1 (struct mg_connection*,struct http_message*) ;
 int FUNC_2 (struct mg_connection*,void*) ;
 int FUNC_3 (struct mg_connection*,struct http_message*,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;

  switch (VAR_2) {
    case 129:
      if (FUNC_4(&VAR_4->uri, "/save") == 0) {
        FUNC_1(VAR_1, VAR_4);
      } else if (FUNC_4(&VAR_4->uri, "/get_cpu_usage") == 0) {
        FUNC_0(VAR_1);
      } else {
        FUNC_3(VAR_1, VAR_4, VAR_0);
      }
      break;
    case 128:
      FUNC_2(VAR_1, VAR_3);
      break;
    default:
      break;
  }
}
