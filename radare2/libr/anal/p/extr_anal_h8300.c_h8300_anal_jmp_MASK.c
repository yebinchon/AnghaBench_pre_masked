
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
struct TYPE_3__ {int jump; void* type; } ;
typedef TYPE_1__ RAnalOp ;





 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 ut16 VAR_5;

 switch (VAR_4[0]) {
 case 130:
  VAR_2->type = VAR_1;
  break;
 case 129:
  VAR_2->type = VAR_0;
  FUNC_0 ((ut8*)&VAR_5, VAR_4 + 2, sizeof (ut16));
  VAR_2->jump = VAR_5;
  break;
 case 128:
  VAR_2->type = VAR_1;
  VAR_2->jump = VAR_4[1];
  break;
 }
}
