
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int bits; } ;
struct TYPE_5__ {int size; void* type; } ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int const*,char*,int) ;

__attribute__((used)) static inline int FUNC_1(RAnal *VAR_2, RAnalOp *VAR_3, const ut8 *VAR_4, int VAR_5) {

 if (VAR_2->bits == 64 && VAR_5 >= 4) {

  if (!FUNC_0 (VAR_4 + 1, "\x43\xc1\xda", 3)) {
   VAR_3->type = VAR_0;
   return VAR_3->size = 4;
  }

  if (!FUNC_0 (VAR_4, "\xff\x0b\x5f\xd6", 4)) {
   VAR_3->type = VAR_1;
   return VAR_3->size = 4;
  }

  if (!FUNC_0 (VAR_4, "\xff\x0f\x5f\xd6", 4)) {
   VAR_3->type = VAR_1;
   return VAR_3->size = 4;
  }
 }
 return -1;
}
