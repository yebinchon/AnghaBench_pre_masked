
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,struct http_message*,char*,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  if (VAR_2 == VAR_0) {
    FUNC_0(VAR_1, (struct http_message *) VAR_3, "unit_test.c",
                       FUNC_1("text/plain"), FUNC_1(""));
  }
}
