
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;




 int FUNC_0 (struct mg_connection*,struct http_message*,int ) ;
 int FUNC_1 (struct mg_connection*,double) ;
 int FUNC_2 (char*,double) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  switch (VAR_2) {
    case 129:
      FUNC_0(VAR_1, (struct http_message *) VAR_3, VAR_0);
      break;
    case 128: {
      double VAR_4 = *(double *) VAR_3;
      double VAR_5 = FUNC_1(VAR_1, 0) + 0.5;
      FUNC_2("timer event, current time: %.2lf\n", VAR_4);
      FUNC_1(VAR_1, VAR_5);
      break;
    }
  }
}
