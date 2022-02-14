
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {struct mg_connection* user_data; } ;



__attribute__((used)) static void FUNC_0(struct mg_connection *VAR_0, struct mg_connection *VAR_1) {
  VAR_0->user_data = VAR_1;
  VAR_1->user_data = VAR_0;
}
