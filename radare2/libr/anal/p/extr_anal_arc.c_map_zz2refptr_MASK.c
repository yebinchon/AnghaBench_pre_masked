
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int refptr; int type; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(RAnalOp *VAR_1, ut8 VAR_2) {
 switch (VAR_2) {
 case 0: VAR_1->refptr = 4; break;
 case 1: VAR_1->refptr = 1; break;
 case 2: VAR_1->refptr = 2; break;
 default:
  VAR_1->type = VAR_0;
  break;
 }
}
