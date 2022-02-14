
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int uri; } ;




 int FUNC_0 (struct mg_connection*,struct http_message*) ;
 int FUNC_1 (struct mg_connection*,struct http_message*,int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct mg_connection*) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;

  switch (VAR_2) {
    case 128:
      if (FUNC_2(&VAR_4->uri, "/upload") == 0) {
        FUNC_0(VAR_1, VAR_4);
      } else {
        FUNC_1(VAR_1, VAR_4, VAR_0);
      }
      break;
    case 129:
      FUNC_3(VAR_1);
      break;
    default:
      break;
  }
}
