
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_2__ {void* reg_trc_id; void* reg_ctrl; } ;
struct cs_etm_trace_params {TYPE_1__ etmv3; int protocol; } ;
struct cs_etm_auxtrace {void*** metadata; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cs_etm_trace_params *VAR_2,
       struct cs_etm_auxtrace *VAR_3, int VAR_4,
       u32 VAR_5)
{
 u64 **VAR_6 = VAR_3->metadata;

 VAR_2[VAR_4].protocol = FUNC_0(VAR_5);
 VAR_2[VAR_4].etmv3.reg_ctrl = VAR_6[VAR_4][VAR_0];
 VAR_2[VAR_4].etmv3.reg_trc_id = VAR_6[VAR_4][VAR_1];
}
