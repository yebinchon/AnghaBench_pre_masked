
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int capacity; int comp_units; } ;
typedef TYPE_1__ RBinDwarfDebugInfo ;
typedef int RBinDwarfCompUnit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(RBinDwarfDebugInfo *VAR_2) {
 if (!VAR_2) {
  return -1;
 }
 VAR_2->comp_units = FUNC_0 (sizeof (RBinDwarfCompUnit), VAR_0);


 if (!VAR_2->comp_units) {
  return -VAR_1;
 }

 VAR_2->capacity = VAR_0;
 VAR_2->length = 0;

 return 1;
}
