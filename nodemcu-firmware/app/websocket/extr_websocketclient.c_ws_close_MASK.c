
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connectionState; int timeoutTimer; int conn; scalar_t__ knownFailureCode; } ;
typedef TYPE_1__ ws_info ;
typedef int os_timer_func_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ,int *,int ) ;

void FUNC_7(ws_info *VAR_4) {
  FUNC_0("ws_close\n");

  if (VAR_4->connectionState == 0 || VAR_4->connectionState == 4) {
    return;
  }

  VAR_4->knownFailureCode = 0;
  if (VAR_4->connectionState == 1) {
    FUNC_2(VAR_4->conn);
  } else {
    FUNC_6(VAR_4->conn, VAR_2, ((void*)0), 0);

    FUNC_4(&VAR_4->timeoutTimer);
    FUNC_5(&VAR_4->timeoutTimer, (os_timer_func_t *) VAR_3, VAR_4->conn);
    FUNC_1(VAR_3, VAR_0);
    FUNC_3(&VAR_4->timeoutTimer, VAR_1, 0);
  }
}
