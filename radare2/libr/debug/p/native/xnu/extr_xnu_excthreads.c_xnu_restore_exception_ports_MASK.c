
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_2__ {int count; int exception_port; int * flavors; int * behaviors; int * ports; int * masks; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5 (int VAR_2) {
 kern_return_t VAR_3;
 int VAR_4;
 task_t VAR_5 = FUNC_3 (VAR_2);
 if (!VAR_5)
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_1.count; VAR_4++) {
  VAR_3 = FUNC_4 (VAR_5, VAR_1.masks[VAR_4], VAR_1.ports[VAR_4],
            VAR_1.behaviors[VAR_4], VAR_1.flavors[VAR_4]);
  if (VAR_3 != VAR_0) {
   FUNC_0 ("fail to restore exception ports\n");
   return 0;
  }
 }
 VAR_3 = FUNC_1 (FUNC_2 (), VAR_1.exception_port);
 if (VAR_3 != VAR_0) {
  FUNC_0 ("failed to deallocate exception port\n");
  return 0;
 }
 return 1;
}
