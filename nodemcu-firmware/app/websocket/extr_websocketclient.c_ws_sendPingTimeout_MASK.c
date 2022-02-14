
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unhealthyPoints; int knownFailureCode; scalar_t__ isSecure; } ;
typedef TYPE_1__ ws_info ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct espconn*) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (struct espconn*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2) {
  FUNC_0("ws_sendPingTimeout \n");
  struct espconn *VAR_3 = (struct espconn *) VAR_2;
  ws_info *VAR_4 = (ws_info *) VAR_3->reverse;

  if (VAR_4->unhealthyPoints == VAR_1) {

    VAR_4->knownFailureCode = -19;

    if (VAR_4->isSecure)
      FUNC_2(VAR_3);
    else
      FUNC_1(VAR_3);
    return;
  }

  FUNC_3(VAR_3, VAR_0, ((void*)0), 0);
  VAR_4->unhealthyPoints += 1;
}
