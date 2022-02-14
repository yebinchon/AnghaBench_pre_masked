
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {TYPE_1__* dst; int cond; TYPE_2__** src; } ;
struct TYPE_6__ {int imm; } ;
struct TYPE_5__ {void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,int ,int ) ;
 int * VAR_3 ;

__attribute__((used)) static inline void FUNC_2 (RReg *VAR_4, RAnalOp *VAR_5, const ut8 VAR_6) {
 VAR_5->dst = FUNC_0 ();
 VAR_5->src[0] = FUNC_0 ();
 VAR_5->src[0]->imm = 1;
 if (VAR_6 & 0x8) {
  VAR_5->cond = VAR_0;
 } else {
  VAR_5->cond = VAR_1;
 }
 switch (VAR_6) {
 case 0x20:
 case 0x28:
 case 0xc0:
 case 0xc2:
 case 0xc4:
 case 0xc8:
 case 0xca:
 case 0xcc:
  VAR_5->dst->reg = FUNC_1 (VAR_4, VAR_3[0], VAR_2);
  break;
 default:
  VAR_5->dst->reg = FUNC_1 (VAR_4, VAR_3[3], VAR_2);
 }
}
