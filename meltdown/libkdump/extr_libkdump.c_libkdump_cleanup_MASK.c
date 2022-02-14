
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fault_handling; int load_threads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4() {
  int VAR_7;
  if (VAR_5.fault_handling == VAR_0) {
    FUNC_3(VAR_1, VAR_2);
  }

  for (VAR_7 = 0; VAR_7 < VAR_5.load_threads; VAR_7++) {
    FUNC_2(VAR_6[VAR_7]);
  }
  FUNC_1(VAR_6);
  FUNC_1(VAR_4);
  FUNC_0(VAR_3, "Everything is cleaned up, good bye!\n");
  return 0;
}
