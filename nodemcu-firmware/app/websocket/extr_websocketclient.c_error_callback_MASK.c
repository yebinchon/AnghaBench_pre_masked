
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int knownFailureCode; } ;
typedef TYPE_1__ ws_info ;
struct espconn {scalar_t__ reverse; } ;
typedef scalar_t__ sint8 ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void * VAR_0, sint8 VAR_1) {
  FUNC_0("error_callback %d\n", VAR_1);
  struct espconn *VAR_2 = (struct espconn *) VAR_0;
  ws_info *VAR_3 = (ws_info *) VAR_2->reverse;

  VAR_3->knownFailureCode = ((int) VAR_1) - 100;
  FUNC_1(VAR_0);
}
