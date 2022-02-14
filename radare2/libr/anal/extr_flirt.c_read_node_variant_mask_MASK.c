
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {int length; void* variant_mask; } ;
typedef TYPE_1__ RFlirtNode ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static ut8 FUNC_2(RFlirtNode *VAR_2, RBuffer *VAR_3) {



 if (VAR_2->length < 0x10) {
  VAR_2->variant_mask = FUNC_0 (VAR_3);
  if (VAR_0 || VAR_1) {
   return 0;
  }
 } else if (VAR_2->length <= 0x20) {
  VAR_2->variant_mask = FUNC_1 (VAR_3);
  if (VAR_0 || VAR_1) {
   return 0;
  }
 } else if (VAR_2->length <= 0x40) {
  VAR_2->variant_mask = ((ut64)FUNC_1 (VAR_3) << 32) + FUNC_1 (VAR_3);
  if (VAR_0 || VAR_1) {
   return 0;
  }
 }

 return 1;
}
