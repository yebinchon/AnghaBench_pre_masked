
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int type; int u_shift; int u_mask; int u_lshift; int s_shift; int s_mask; int s_lshift; int s_smask; } ;
typedef TYPE_1__ rsp_operand_decoder ;
struct TYPE_6__ {int type; int u; int s; } ;
typedef TYPE_2__ rsp_operand ;


 int VAR_0 ;


 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static rsp_operand FUNC_2(ut64 VAR_1, ut32 VAR_2, const rsp_operand_decoder* VAR_3) {
 rsp_operand VAR_4;

 VAR_4.type = VAR_3->type;
 VAR_4.u = ((VAR_2 >> VAR_3->u_shift) & VAR_3->u_mask) << VAR_3->u_lshift;
 VAR_4.s = FUNC_1 ((VAR_2 >> VAR_3->s_shift) & VAR_3->s_mask, VAR_3->s_smask) << VAR_3->s_lshift;


 switch (VAR_4.type) {
 case 128:
  VAR_4.u = FUNC_0 (VAR_4.u, VAR_0);
  break;
 case 129:

  VAR_4.u = FUNC_0 (VAR_1 + 4 + VAR_4.s, VAR_0);
  break;
 default: break;
 }

 return VAR_4;
}
