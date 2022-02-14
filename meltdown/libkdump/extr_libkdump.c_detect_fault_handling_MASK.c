
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fault_handling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2() {
  if (FUNC_0()) {
    FUNC_1(VAR_2, "Using Intel TSX\n");
    VAR_4.fault_handling = VAR_3;
  } else {
    FUNC_1(VAR_0, "No Intel TSX, fallback to signal handler\n");
    VAR_4.fault_handling = VAR_1;
  }
}
