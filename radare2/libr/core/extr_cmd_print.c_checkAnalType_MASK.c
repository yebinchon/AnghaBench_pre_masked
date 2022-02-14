
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ family; } ;
typedef TYPE_1__ RAnalOp ;


 scalar_t__ VAR_0 ;
__attribute__((used)) static bool FUNC_0(RAnalOp *VAR_1, int VAR_2) {
 if (VAR_2 == 'c') {
  switch (VAR_1->type) {
  case 131:
  case 128:
  case 135:
   return 1;
  }
 } else if (VAR_2 == 's') {
  if (VAR_1->family == VAR_0) {
   return 1;
  }
  switch (VAR_1->type) {
  case 130:
   return 1;
  }
 } else if (VAR_2 == 'i') {
  switch (VAR_1->type) {
  case 129:
  case 133:
   return 1;
  }
 } else if (VAR_2 == 'j') {
  switch (VAR_1->type) {
  case 132:


  case 134:
   return 1;
  default:
   break;
  }
 }
 return 0;
}
