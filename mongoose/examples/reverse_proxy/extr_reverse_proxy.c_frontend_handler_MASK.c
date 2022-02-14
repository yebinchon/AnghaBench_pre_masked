
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;



 int FUNC_0 (struct mg_connection*,struct http_message*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct http_message *VAR_4 = (struct http_message *) VAR_3;
  switch (VAR_2) {
    case 128:
      FUNC_0(VAR_1, VAR_4, VAR_0);
      break;
    default:
      break;
  }
}
