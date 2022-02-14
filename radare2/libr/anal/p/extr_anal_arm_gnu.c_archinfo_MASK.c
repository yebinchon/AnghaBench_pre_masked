
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; } ;
typedef TYPE_1__ RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(RAnal *VAR_3, int VAR_4) {
 if (VAR_4 == VAR_0) {
  if (VAR_3 && VAR_3->bits == 16) {
   return 2;
  }
  return 4;
 }
 if (VAR_4 == VAR_1) {
  return 4;
 }
 if (VAR_4 == VAR_2) {
  if (VAR_3 && VAR_3->bits == 16) {
   return 2;
  }
  return 4;
 }
 return 4;
}
