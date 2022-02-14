
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int direction; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;




__attribute__((used)) static void FUNC_0(RAnalOp *VAR_5) {
 switch (VAR_5->type & VAR_4) {
 case 131:
  VAR_5->direction = VAR_1;
  break;
 case 130:
  VAR_5->direction = VAR_3;
  break;
 case 132:
  VAR_5->direction = VAR_2;
  break;
 case 134:
 case 133:
 case 128:
 case 129:
  VAR_5->direction = VAR_0;
  break;
 default:
  break;
        }
}
