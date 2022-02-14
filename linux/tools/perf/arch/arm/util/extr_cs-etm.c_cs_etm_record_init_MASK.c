
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int dummy; } ;
struct auxtrace_record {int read_finish; int free; int reference; int snapshot_finish; int snapshot_start; int find_snapshot; int info_fill; int info_priv_size; int recording_options; int parse_snapshot_options; } ;
struct cs_etm_recording {struct auxtrace_record itr; struct perf_pmu* cs_etm_pmu; } ;


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
 struct cs_etm_recording* FUNC_1 (int) ;

struct auxtrace_record *FUNC_2(int *VAR_13)
{
 struct perf_pmu *VAR_14;
 struct cs_etm_recording *VAR_15;

 VAR_14 = FUNC_0(VAR_0);

 if (!VAR_14) {
  *VAR_13 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_1(sizeof(struct cs_etm_recording));
 if (!VAR_15) {
  *VAR_13 = -VAR_2;
  goto out;
 }

 VAR_15->cs_etm_pmu = VAR_14;
 VAR_15->itr.parse_snapshot_options = VAR_6;
 VAR_15->itr.recording_options = VAR_9;
 VAR_15->itr.info_priv_size = VAR_5;
 VAR_15->itr.info_fill = VAR_4;
 VAR_15->itr.find_snapshot = VAR_3;
 VAR_15->itr.snapshot_start = VAR_12;
 VAR_15->itr.snapshot_finish = VAR_11;
 VAR_15->itr.reference = VAR_10;
 VAR_15->itr.free = VAR_8;
 VAR_15->itr.read_finish = VAR_7;

 *VAR_13 = 0;
 return &VAR_15->itr;
out:
 return ((void*)0);
}
