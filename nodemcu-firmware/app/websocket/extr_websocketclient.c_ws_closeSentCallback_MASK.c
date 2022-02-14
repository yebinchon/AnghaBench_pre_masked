
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int knownFailureCode; scalar_t__ isSecure; } ;
typedef TYPE_1__ ws_info ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct espconn*) ;
 int FUNC_2 (struct espconn*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0) {
  FUNC_0("ws_closeSentCallback \n");
  struct espconn *VAR_1 = (struct espconn *) VAR_0;
  ws_info *VAR_2 = (ws_info *) VAR_1->reverse;

  if (VAR_2 == ((void*)0)) {
    FUNC_0("ws is unexpectly null\n");
    return;
  }

  VAR_2->knownFailureCode = -6;

  if (VAR_2->isSecure)
    FUNC_2(VAR_1);
  else
    FUNC_1(VAR_1);
}
