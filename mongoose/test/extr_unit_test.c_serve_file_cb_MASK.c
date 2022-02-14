
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; scalar_t__ user_data; } ;
struct http_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_connection*,struct http_message*,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct http_message*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_3, int VAR_4, void *VAR_5) {
  struct http_message *VAR_6 = (struct http_message *) VAR_5;
  char *VAR_7 = (char *) VAR_3->user_data;

  if (VAR_4 == VAR_1) {
    FUNC_0(VAR_3, VAR_6, "unit_test.c", FUNC_1("text/plain"),
                       FUNC_1(""));
  } else if (VAR_4 == VAR_0) {
    FUNC_3(VAR_7, FUNC_2(VAR_6));
    VAR_3->flags |= VAR_2;
  }
}
