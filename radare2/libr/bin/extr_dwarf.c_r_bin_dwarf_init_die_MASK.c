
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; scalar_t__ length; int attr_values; } ;
typedef TYPE_1__ RBinDwarfDIE ;
typedef int RBinDwarfAttrValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(RBinDwarfDIE *VAR_2) {
 if (!VAR_2) {
  return -VAR_0;
 }
 VAR_2->attr_values = FUNC_0 (sizeof (RBinDwarfAttrValue), 8);
 if (!VAR_2->attr_values) {
  return -VAR_1;
 }
 VAR_2->capacity = 8;
 VAR_2->length = 0;
 return 0;
}
