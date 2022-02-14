
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cs_insn ;
struct TYPE_5__ {int const type; } ;
struct TYPE_4__ {int type; int direction; } ;
typedef TYPE_1__ RAnalOp ;


 TYPE_3__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;






__attribute__((used)) static void FUNC_1(RAnalOp *VAR_5, cs_insn *VAR_6) {
 switch (VAR_5->type & VAR_4) {
 case 132:
  switch (FUNC_0(0).type) {
  case 129:
   VAR_5->direction = VAR_3;
   break;
  case 128:
   if (FUNC_0(1).type == 129) {
    VAR_5->direction = VAR_1;
   }
   break;
  default:
   break;
  }
  break;
 case 133:
  VAR_5->direction = VAR_2;
  break;
 case 135:
 case 134:
 case 130:
 case 131:
  VAR_5->direction = VAR_0;
  break;
 default:
  break;
 }
}
