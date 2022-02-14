
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {struct simple_data* sclient_data; struct mg_connection* sclient_nc; } ;
struct mg_connection {int handler; struct simple_data* user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct simple_data*,int) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  struct simple_data *VAR_5 = (struct simple_data *) VAR_2->user_data;
  (void) VAR_4;
  if (VAR_3 == VAR_0) {
    VAR_5->sclient_nc = VAR_2;
    VAR_2->user_data = VAR_5 = VAR_5->sclient_data;
    VAR_2->handler = VAR_1;
  }
  FUNC_0(VAR_5, VAR_3);
}
