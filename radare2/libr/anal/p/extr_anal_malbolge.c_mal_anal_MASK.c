
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int const ut64 ;
struct TYPE_4__ {int size; void* type; void* type2; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_1__*,char,int) ;

__attribute__((used)) static int FUNC_1(RAnal *VAR_7, RAnalOp *VAR_8, ut64 VAR_9, const ut8 *VAR_10, int VAR_11, RAnalOpMask VAR_12) {
 FUNC_0 (VAR_8, '\0', sizeof (RAnalOp));
 if (VAR_11) {
  switch ((VAR_10[0] + VAR_9) % 94) {
  case 4:
   VAR_8->type = VAR_5;
   break;
  case 5:
  case 23:
   VAR_8->type = VAR_0;
   break;
  case 39:
   VAR_8->type = VAR_3;
   VAR_8->type2 = VAR_1;
   break;
  case 40:
   VAR_8->type = VAR_1;
   break;
  case 62:
   VAR_8->type = VAR_6;
   VAR_8->type2 = VAR_1;
   break;
  case 81:
   VAR_8->type = VAR_4;
   break;
  default:
   VAR_8->type = VAR_2;
  }
  return VAR_8->size = 1;
 }
 return 0;
}
