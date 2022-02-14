
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_4__ {int type; int * src; int dst; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (TYPE_1__*) ;






 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int ,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(RAnal *VAR_2, RAnalOp *VAR_3, csh *VAR_4, cs_insn *VAR_5) {
 switch (VAR_3->type & VAR_0) {
 case 141:
 case 143:
 case 142:
 case 144:
 case 133:
 case 132:
 case 135:
 case 134:
 case 137:
 case 136:
 case 146:
 case 145:
 case 139:
 case 128:
 case 131:
 case 129:
 case 138:
 case 140:
 case 147:
  FUNC_0 (VAR_3);
  FUNC_1 (VAR_3->dst, VAR_4, VAR_5, 0);
  FUNC_1 (VAR_3->src[0], VAR_4, VAR_5, 1);
  FUNC_1 (VAR_3->src[1], VAR_4, VAR_5, 2);
  FUNC_1 (VAR_3->src[2], VAR_4, VAR_5, 3);
  break;
 case 130:
  if ((VAR_3->type & VAR_1)) {
   FUNC_0 (VAR_3);
   FUNC_1 (VAR_3->src[0], VAR_4, VAR_5, 0);
  }
  break;
 default:
  break;
 }
}
