
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int * comp_units; } ;
typedef TYPE_1__ RBinDwarfDebugInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(RBinDwarfDebugInfo *VAR_0) {
 size_t VAR_1;
 if (!VAR_0) {
  return;
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++) {
  FUNC_1 (&VAR_0->comp_units[VAR_1]);
 }
 FUNC_0 (VAR_0->comp_units);
}
