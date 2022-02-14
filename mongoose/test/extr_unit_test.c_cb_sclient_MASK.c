
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {int dummy; } ;
struct mg_connection {int flags; scalar_t__ user_data; } ;




 int VAR_0 ;
 int FUNC_0 (struct simple_data*,struct mg_connection*,void*) ;
 int FUNC_1 (struct simple_data*,int) ;
 int FUNC_2 (struct simple_data*,struct mg_connection*,void*) ;
 int FUNC_3 (struct simple_data*,struct mg_connection*) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct simple_data *VAR_4 = (struct simple_data *) VAR_1->user_data;
  FUNC_1(VAR_4, VAR_2);
  switch (VAR_2) {
    case 129: {
      FUNC_2(VAR_4, VAR_1, VAR_3);
      FUNC_3(VAR_4, VAR_1);
      VAR_1->flags |= VAR_0;
      break;
    }
    case 128: {
      FUNC_0(VAR_4, VAR_1, VAR_3);
      break;
    }
  }
}
