
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int capacity; int dies; } ;
typedef int RBinDwarfDIE ;
typedef TYPE_1__ RBinDwarfCompUnit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(RBinDwarfCompUnit *VAR_3) {
 if (!VAR_3) {
  return -VAR_1;
 }
 VAR_3->dies = FUNC_0 (sizeof (RBinDwarfDIE), VAR_0);
 if (!VAR_3->dies) {
  return -VAR_2;
 }
 VAR_3->capacity = VAR_0;
 VAR_3->length = 0;
 return 0;
}
