
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {TYPE_1__* listener; int flags; } ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int FUNC_1 (struct mg_connection*,char*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  (void) VAR_3;
  switch (VAR_2) {
    case 128:
      FUNC_1(VAR_1, "HTTP/1.0 200 OK\r\n\r\n[I am Hello1]");
      VAR_1->flags |= VAR_0;
      break;
    case 129:
      FUNC_0(("%p == hello1 close", VAR_1));
      (*(int *) VAR_1->listener->user_data) += 10;
      break;
  }
}
