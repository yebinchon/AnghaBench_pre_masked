
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int capacity; int length; int * attr_values; } ;
typedef TYPE_1__ RBinDwarfDIE ;
typedef int RBinDwarfAttrValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(RBinDwarfDIE* VAR_2) {
 RBinDwarfAttrValue *VAR_3 = ((void*)0);
 if (!VAR_2 || VAR_2->capacity == 0) {
  return -VAR_0;
 }
 if (VAR_2->capacity != VAR_2->length) {
  return -VAR_0;
 }
 VAR_3 = (RBinDwarfAttrValue*)FUNC_1 (VAR_2->attr_values,
   VAR_2->capacity * 2 * sizeof (RBinDwarfAttrValue));
 if (!VAR_3) {
  return -VAR_1;
 }
 FUNC_0 ((ut8*)VAR_3 + VAR_2->capacity * sizeof (RBinDwarfAttrValue),
   0, VAR_2->capacity * sizeof (RBinDwarfAttrValue));
 VAR_2->attr_values = VAR_3;
 VAR_2->capacity *= 2;
 return 0;
}
