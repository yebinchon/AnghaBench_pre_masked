
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {TYPE_1__* mgr; } ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,char*) ;
 int FUNC_1 (struct mg_connection*,int,char*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_2, int VAR_3,
                                  void *VAR_4) {
  (void) VAR_4;
  int *VAR_5 = (int *) VAR_2->mgr->user_data;
  if (VAR_3 == VAR_1) {

    FUNC_1(VAR_2, 200,
                          "Content-Type: text/plain\r\nContent-Length: 5\r\n");
    FUNC_0(VAR_2, "Hello");
    *VAR_5 = *VAR_5 + 1;
  } else if (VAR_3 == VAR_0) {

    *VAR_5 = *VAR_5 + 10;
  }
}
