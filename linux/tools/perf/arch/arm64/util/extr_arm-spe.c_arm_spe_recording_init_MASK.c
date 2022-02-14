
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int dummy; } ;
struct auxtrace_record {scalar_t__ alignment; int read_finish; int reference; int free; int info_fill; int info_priv_size; int recording_options; } ;
struct arm_spe_recording {struct auxtrace_record itr; struct perf_pmu* arm_spe_pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct arm_spe_recording* FUNC_0 (int) ;

struct auxtrace_record *FUNC_1(int *VAR_8,
            struct perf_pmu *VAR_9)
{
 struct arm_spe_recording *VAR_10;

 if (!VAR_9) {
  *VAR_8 = -VAR_0;
  return ((void*)0);
 }

 VAR_10 = FUNC_0(sizeof(struct arm_spe_recording));
 if (!VAR_10) {
  *VAR_8 = -VAR_1;
  return ((void*)0);
 }

 VAR_10->arm_spe_pmu = VAR_9;
 VAR_10->itr.recording_options = VAR_6;
 VAR_10->itr.info_priv_size = VAR_3;
 VAR_10->itr.info_fill = VAR_2;
 VAR_10->itr.free = VAR_5;
 VAR_10->itr.reference = VAR_7;
 VAR_10->itr.read_finish = VAR_4;
 VAR_10->itr.alignment = 0;

 *VAR_8 = 0;
 return &VAR_10->itr;
}
