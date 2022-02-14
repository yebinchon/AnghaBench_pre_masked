
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extraInfo; } ;
typedef int PDEBUG_HEAP_INFORMATION ;
typedef TYPE_1__ HeapBlock ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(PDEBUG_HEAP_INFORMATION VAR_0) {
 FUNC_3 (VAR_0);
 HeapBlock VAR_1;
 if (FUNC_0 (VAR_0, &VAR_1)) {
  do {
   FUNC_2 (VAR_1.extraInfo);
  } while (FUNC_1 (VAR_0, &VAR_1));
 }
}
