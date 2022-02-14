
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {int dummy; } ;
struct mg_connection {scalar_t__ user_data; } ;





 int FUNC_0 (struct simple_data*,struct mg_connection*,void*) ;
 int FUNC_1 (struct simple_data*,int) ;
 int FUNC_2 (struct simple_data*,struct mg_connection*,void*) ;
 int FUNC_3 (struct simple_data*,struct mg_connection*) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  struct simple_data *VAR_3 = (struct simple_data *) VAR_0->user_data;
  FUNC_1(VAR_3, VAR_1);
  switch (VAR_1) {
    case 130:
      FUNC_3(VAR_3, VAR_0);
      break;
    case 128:
      FUNC_0(VAR_3, VAR_0, VAR_2);
      break;
    case 129:
      FUNC_2(VAR_3, VAR_0, VAR_2);
      break;
  }
}
