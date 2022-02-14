
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int auxtrace_error; } ;
typedef int u64 ;
struct intel_pt {int session; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int ,int ,int ,char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,union perf_event*,int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct intel_pt *VAR_2, int VAR_3, int VAR_4,
    pid_t VAR_5, pid_t VAR_6, u64 VAR_7, u64 VAR_8)
{
 union perf_event VAR_9;
 char VAR_10[VAR_0];
 int VAR_11;

 FUNC_1(VAR_3, VAR_10, VAR_0);

 FUNC_0(&VAR_9.auxtrace_error, VAR_1,
        VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_8);

 VAR_11 = FUNC_2(VAR_2->session, &VAR_9, ((void*)0));
 if (VAR_11)
  FUNC_3("Intel Processor Trace: failed to deliver error event, error %d\n",
         VAR_11);

 return VAR_11;
}
