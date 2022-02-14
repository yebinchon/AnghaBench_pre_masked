
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {char* to_send; } ;
struct mg_connection {int dummy; } ;


 int FUNC_0 (struct mg_connection*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct simple_data *VAR_0, struct mg_connection *VAR_1) {
  if (VAR_0->to_send[0] != '\0') {
    FUNC_0(VAR_1, "%s", VAR_0->to_send);
  }
}
