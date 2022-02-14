
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reg_idr8; int reg_idr2; int reg_idr1; int reg_idr0; int reg_traceidr; int reg_configr; } ;
struct cs_etm_trace_params {TYPE_1__ etmv4; } ;
struct TYPE_5__ {int core_prof; int arch_ver; scalar_t__ reg_idr13; scalar_t__ reg_idr12; scalar_t__ reg_idr11; scalar_t__ reg_idr10; scalar_t__ reg_idr9; int reg_idr8; int reg_idr2; int reg_idr1; int reg_idr0; int reg_traceidr; int reg_configr; } ;
typedef TYPE_2__ ocsd_etmv4_cfg ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cs_etm_trace_params *VAR_2,
          ocsd_etmv4_cfg *VAR_3)
{
 VAR_3->reg_configr = VAR_2->etmv4.reg_configr;
 VAR_3->reg_traceidr = VAR_2->etmv4.reg_traceidr;
 VAR_3->reg_idr0 = VAR_2->etmv4.reg_idr0;
 VAR_3->reg_idr1 = VAR_2->etmv4.reg_idr1;
 VAR_3->reg_idr2 = VAR_2->etmv4.reg_idr2;
 VAR_3->reg_idr8 = VAR_2->etmv4.reg_idr8;
 VAR_3->reg_idr9 = 0;
 VAR_3->reg_idr10 = 0;
 VAR_3->reg_idr11 = 0;
 VAR_3->reg_idr12 = 0;
 VAR_3->reg_idr13 = 0;
 VAR_3->arch_ver = VAR_0;
 VAR_3->core_prof = VAR_1;
}
