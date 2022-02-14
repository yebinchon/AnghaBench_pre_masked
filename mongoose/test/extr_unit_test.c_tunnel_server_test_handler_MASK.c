
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {void* user_data; int flags; } ;





 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mg_connection*,char*,char*) ;
 int FUNC_3 (struct mg_connection*,char*,int ) ;
 int FUNC_4 (struct mg_connection*,char*,int ) ;
 int FUNC_5 (struct mg_connection*,int ) ;
 int FUNC_6 () ;

void FUNC_7(struct mg_connection *VAR_1, int VAR_2,
                                void *VAR_3) {
  (void) VAR_3;
  switch (VAR_2) {
    case 129:
      if (VAR_1->user_data) break;

      VAR_1->user_data = (void *) FUNC_1(sizeof(int));
      (*(int *) VAR_1->user_data) = 0;
      FUNC_5(VAR_1, FUNC_6() + 0.01);

      FUNC_2(VAR_1, "%s",
                "HTTP/1.1 200 OK\r\nTransfer-Encoding: chunked\r\n\r\n");
      break;
    case 128:
      FUNC_3(VAR_1, "%d", (*(int *) VAR_1->user_data)++);
      if (*(int *) VAR_1->user_data == 10) {
        FUNC_4(VAR_1, "", 0);
        VAR_1->flags |= VAR_0;
      } else {
        FUNC_5(VAR_1, FUNC_6() + 0.01);
      }
      break;
    case 130:
      FUNC_0(VAR_1->user_data);
    default:
      break;
  }
}
