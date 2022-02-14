
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int auxtrace_error; } ;
typedef int u64 ;
struct s390_cpumsf {int session; } ;
typedef int pid_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,union perf_event*,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct s390_cpumsf *VAR_2, int VAR_3, int VAR_4,
       pid_t VAR_5, pid_t VAR_6, u64 VAR_7, u64 VAR_8)
{
 char VAR_9[VAR_0];
 union perf_event VAR_10;
 int VAR_11;

 FUNC_3(VAR_9, "Lost Auxiliary Trace Buffer", sizeof(VAR_9) - 1);
 FUNC_0(&VAR_10.auxtrace_error, VAR_1,
        VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_8);

 VAR_11 = FUNC_1(VAR_2->session, &VAR_10, ((void*)0));
 if (VAR_11)
  FUNC_2("s390 Auxiliary Trace: failed to deliver error event,"
   "error %d\n", VAR_11);
 return VAR_11;
}
