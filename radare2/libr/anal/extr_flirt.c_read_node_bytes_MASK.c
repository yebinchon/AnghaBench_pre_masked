
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int length; int* pattern_bytes; int* variant_bool_array; int variant_mask; } ;
typedef TYPE_1__ RFlirtNode ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(RFlirtNode *VAR_2, RBuffer *VAR_3) {


 int VAR_4;
 ut64 VAR_5 = 0;
 if ((int) VAR_2->length < 0) {
  return 0;
 }
 VAR_5 = 1ULL << (VAR_2->length - 1);
 if (!(VAR_2->pattern_bytes = FUNC_0 (VAR_2->length))) {
  return 0;
 }
 if (!(VAR_2->variant_bool_array = FUNC_0 (VAR_2->length))) {
  return 0;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->length; VAR_4++, VAR_5 >>= 1) {
  VAR_2->variant_bool_array[VAR_4] =
   (VAR_2->variant_mask & VAR_5)? 1: 0;
  if (VAR_2->variant_mask & VAR_5) {
   VAR_2->pattern_bytes[VAR_4] = 0x00;
  } else {
   VAR_2->pattern_bytes[VAR_4] = FUNC_1 (VAR_3);
   if (VAR_0 || VAR_1) {
    return 0;
   }
  }
 }
 return 1;
}
