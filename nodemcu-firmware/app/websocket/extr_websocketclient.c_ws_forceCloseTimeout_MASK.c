
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int connectionState; int conn; scalar_t__ isSecure; } ;
typedef TYPE_1__ ws_info ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0) {
  FUNC_0("ws_forceCloseTimeout\n");
  struct espconn *VAR_1 = (struct espconn *) VAR_0;
  ws_info *VAR_2 = (ws_info *) VAR_1->reverse;

  if (VAR_2->connectionState == 0 || VAR_2->connectionState == 4) {
    return;
  }

  if (VAR_2->isSecure)
    FUNC_2(VAR_2->conn);
  else
    FUNC_1(VAR_2->conn);
}
