
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reg_trc_id; int reg_ccer; int reg_ctrl; int reg_idr; } ;
struct cs_etm_trace_params {TYPE_1__ etmv3; } ;
struct TYPE_5__ {int core_prof; int arch_ver; int reg_trc_id; int reg_ccer; int reg_ctrl; int reg_idr; } ;
typedef TYPE_2__ ocsd_etmv3_cfg ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct cs_etm_trace_params *VAR_2,
         ocsd_etmv3_cfg *VAR_3)
{
 VAR_3->reg_idr = VAR_2->etmv3.reg_idr;
 VAR_3->reg_ctrl = VAR_2->etmv3.reg_ctrl;
 VAR_3->reg_ccer = VAR_2->etmv3.reg_ccer;
 VAR_3->reg_trc_id = VAR_2->etmv3.reg_trc_id;
 VAR_3->arch_ver = VAR_0;
 VAR_3->core_prof = VAR_1;

 return 0;
}
