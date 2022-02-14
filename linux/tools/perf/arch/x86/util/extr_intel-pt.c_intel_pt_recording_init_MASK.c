
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int dummy; } ;
struct auxtrace_record {int read_finish; int reference; int parse_snapshot_options; int find_snapshot; int snapshot_finish; int snapshot_start; int free; int info_fill; int info_priv_size; int recording_options; } ;
struct intel_pt_recording {struct auxtrace_record itr; struct perf_pmu* intel_pt_pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct perf_pmu* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 struct intel_pt_recording* FUNC_2 (int) ;

struct auxtrace_record *FUNC_3(int *VAR_13)
{
 struct perf_pmu *VAR_14 = FUNC_0(VAR_1);
 struct intel_pt_recording *VAR_15;

 if (!VAR_14)
  return ((void*)0);

 if (FUNC_1("JITDUMP_USE_ARCH_TIMESTAMP", "1", 1)) {
  *VAR_13 = -VAR_2;
  return ((void*)0);
 }

 VAR_15 = FUNC_2(sizeof(struct intel_pt_recording));
 if (!VAR_15) {
  *VAR_13 = -VAR_0;
  return ((void*)0);
 }

 VAR_15->intel_pt_pmu = VAR_14;
 VAR_15->itr.recording_options = VAR_9;
 VAR_15->itr.info_priv_size = VAR_5;
 VAR_15->itr.info_fill = VAR_4;
 VAR_15->itr.free = VAR_8;
 VAR_15->itr.snapshot_start = VAR_12;
 VAR_15->itr.snapshot_finish = VAR_11;
 VAR_15->itr.find_snapshot = VAR_3;
 VAR_15->itr.parse_snapshot_options = VAR_6;
 VAR_15->itr.reference = VAR_10;
 VAR_15->itr.read_finish = VAR_7;
 return &VAR_15->itr;
}
