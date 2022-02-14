
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_2__ {void* reg_traceidr; void* reg_configr; void* reg_idr8; void* reg_idr2; void* reg_idr1; void* reg_idr0; } ;
struct cs_etm_trace_params {TYPE_1__ etmv4; int protocol; } ;
struct cs_etm_auxtrace {void*** metadata; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct cs_etm_trace_params *VAR_7,
       struct cs_etm_auxtrace *VAR_8, int VAR_9)
{
 u64 **VAR_10 = VAR_8->metadata;

 VAR_7[VAR_9].protocol = VAR_6;
 VAR_7[VAR_9].etmv4.reg_idr0 = VAR_10[VAR_9][VAR_1];
 VAR_7[VAR_9].etmv4.reg_idr1 = VAR_10[VAR_9][VAR_2];
 VAR_7[VAR_9].etmv4.reg_idr2 = VAR_10[VAR_9][VAR_3];
 VAR_7[VAR_9].etmv4.reg_idr8 = VAR_10[VAR_9][VAR_4];
 VAR_7[VAR_9].etmv4.reg_configr = VAR_10[VAR_9][VAR_0];
 VAR_7[VAR_9].etmv4.reg_traceidr = VAR_10[VAR_9][VAR_5];
}
