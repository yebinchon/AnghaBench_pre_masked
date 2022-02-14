
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int knownFailureCode; } ;
typedef TYPE_1__ ws_info ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0) {
  FUNC_0("ws_connectTimeout\n");
  struct espconn *VAR_1 = (struct espconn *) VAR_0;
  ws_info *VAR_2 = (ws_info *) VAR_1->reverse;

  VAR_2->knownFailureCode = -18;
  FUNC_1(VAR_0);
}
