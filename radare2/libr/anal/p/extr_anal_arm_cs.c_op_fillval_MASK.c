
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_9__ {int scale; int index; } ;
struct TYPE_12__ {TYPE_2__ mem; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_11__ {TYPE_1__ mem; } ;
struct TYPE_10__ {int type; int scale; void* ireg; int * src; int dst; } ;
typedef TYPE_3__ RAnalOp ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_7__ FUNC_2 (int) ;
 TYPE_6__ FUNC_3 (int) ;




 int VAR_0 ;






 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *,int,int) ;

__attribute__((used)) static void FUNC_8(RAnalOp *VAR_1 , csh VAR_2, cs_insn *VAR_3, int VAR_4) {
 FUNC_4 (VAR_1);
 switch (VAR_1->type & VAR_0) {
 case 134:
 case 133:
 case 129:
 case 137:
 case 136:
 case 128:
 case 132:
 case 135:
 case 131:
  FUNC_7 (VAR_1->src[2], &VAR_2, VAR_3, 3, VAR_4);
  FUNC_7 (VAR_1->src[1], &VAR_2, VAR_3, 2, VAR_4);
  FUNC_7 (VAR_1->src[0], &VAR_2, VAR_3, 1, VAR_4);
  FUNC_7 (VAR_1->dst, &VAR_2, VAR_3, 0, VAR_4);
  break;
 case 130:
  FUNC_7 (VAR_1->dst, &VAR_2, VAR_3, 1, VAR_4);
  FUNC_7 (VAR_1->src[0], &VAR_2, VAR_3, 0, VAR_4);
  break;
 default:
  break;
 }
 if ((VAR_4 == 64) && FUNC_1 (1)) {
  VAR_1->ireg = FUNC_6 (FUNC_5 (VAR_2, FUNC_3 (1).mem.index));
 } else if (FUNC_0 (1)) {
  VAR_1->ireg = FUNC_6 (FUNC_5 (VAR_2, FUNC_2 (1).mem.index));
  VAR_1->scale = FUNC_2 (1).mem.scale;
 }
}
