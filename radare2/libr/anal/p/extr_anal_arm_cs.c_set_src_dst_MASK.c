
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_10__ {int disp; int scale; } ;
struct TYPE_11__ {int type; TYPE_2__ mem; } ;
typedef TYPE_3__ cs_arm_op ;
struct TYPE_9__ {int disp; } ;
struct TYPE_12__ {TYPE_1__ mem; } ;
typedef TYPE_4__ cs_arm64_op ;
struct TYPE_13__ {int * reg; int * regdelta; int delta; int mul; } ;
typedef TYPE_5__ RAnalValue ;




 TYPE_3__ FUNC_0 (int) ;
 TYPE_4__ FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *,int ,int *,int) ;
 int FUNC_3 (int *,int *,int ,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(RAnalValue *VAR_2, csh *VAR_3, cs_insn *VAR_4, int VAR_5, int VAR_6) {
 cs_arm_op VAR_7 = FUNC_0 (VAR_5);
 cs_arm64_op VAR_8 = FUNC_1 (VAR_5);
 if (VAR_6 == 64) {
  FUNC_2 (&VAR_0[VAR_5], &VAR_1[VAR_5], *VAR_3, VAR_4, VAR_5);
 } else {
  FUNC_3 (&VAR_0[VAR_5], &VAR_1[VAR_5], *VAR_3, VAR_4, VAR_5);
 }
 switch (VAR_7.type) {
 case 128:
  break;
 case 129:
  if (VAR_6 == 64) {
   VAR_2->delta = VAR_8.mem.disp;
  } else {
   VAR_2->mul = VAR_7.mem.scale;
   VAR_2->delta = VAR_7.mem.disp;
  }
  VAR_2->regdelta = &VAR_1[VAR_5];
  break;
 default:
  break;
 }
 VAR_2->reg = &VAR_0[VAR_5];
}
