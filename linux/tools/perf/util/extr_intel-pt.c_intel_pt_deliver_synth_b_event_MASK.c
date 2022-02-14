
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_sample {int dummy; } ;
struct intel_pt {int session; } ;


 int FUNC_0 (struct intel_pt*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_1 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_pt *VAR_0,
       union perf_event *VAR_1,
       struct perf_sample *VAR_2, u64 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0->session, VAR_1, VAR_2);
 if (VAR_4)
  FUNC_2("Intel PT: failed to deliver event, error %d\n", VAR_4);

 return VAR_4;
}
