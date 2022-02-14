
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int auxtrace_error; } ;
typedef int u64 ;
struct intel_bts {int session; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,union perf_event*,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_bts *VAR_2, int VAR_3, pid_t VAR_4,
     pid_t VAR_5, u64 VAR_6)
{
 union perf_event VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7.auxtrace_error, VAR_1,
        VAR_0, VAR_3, VAR_4, VAR_5, VAR_6,
        "Failed to get instruction", 0);

 VAR_8 = FUNC_1(VAR_2->session, &VAR_7, ((void*)0));
 if (VAR_8)
  FUNC_2("Intel BTS: failed to deliver error event, error %d\n",
         VAR_8);

 return VAR_8;
}
