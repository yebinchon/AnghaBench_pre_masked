
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
struct TYPE_3__ {int length; scalar_t__* pattern_bytes; int * variant_bool_array; } ;
typedef TYPE_1__ RFlirtNode ;



__attribute__((used)) static int FUNC_0(const RFlirtNode *VAR_0, ut8 *VAR_1, int VAR_2) {
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++) {
  if (!VAR_0->variant_bool_array[VAR_3]) {
   if (VAR_3 < VAR_0->length && VAR_0->pattern_bytes[VAR_3] != VAR_1[VAR_3]) {
    return 0;
   }
  }
 }
 return 1;
}
