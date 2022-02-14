
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; int revents; } ;
struct perf_ftrace {char* tracer; int evlist; int target; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (char*,int,int,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,char const**,int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct pollfd*,int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,int) ;
 scalar_t__ FUNC_12 (struct perf_ftrace*) ;
 scalar_t__ FUNC_13 (struct perf_ftrace*) ;
 scalar_t__ FUNC_14 (struct perf_ftrace*) ;
 scalar_t__ FUNC_15 (struct perf_ftrace*) ;
 scalar_t__ FUNC_16 (struct perf_ftrace*) ;
 int FUNC_17 () ;
 int VAR_11 ;
 int FUNC_18 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (char*,char*) ;

__attribute__((used)) static int FUNC_20(struct perf_ftrace *VAR_13, int VAR_14, const char **VAR_15)
{
 char *VAR_16;
 int VAR_17;
 char VAR_18[4096];
 struct pollfd VAR_19 = {
  .events = VAR_4,
 };

 if (!FUNC_5(VAR_0)) {
  FUNC_9("ftrace only works for %s!\n",



  "root"

  );
  return -1;
 }

 FUNC_18(VAR_6, VAR_11);
 FUNC_18(VAR_8, VAR_11);
 FUNC_18(VAR_5, VAR_11);
 FUNC_18(VAR_7, VAR_11);

 if (FUNC_12(VAR_13) < 0) {
  FUNC_9("failed to reset ftrace\n");
  goto out;
 }


 if (FUNC_19("trace", "0") < 0)
  goto out;

 if (VAR_14 && FUNC_6(VAR_13->evlist,
    &VAR_13->target, VAR_15, 0,
    VAR_10) < 0) {
  goto out;
 }

 if (FUNC_16(VAR_13) < 0) {
  FUNC_9("failed to set ftrace pid\n");
  goto out_reset;
 }

 if (FUNC_13(VAR_13) < 0) {
  FUNC_9("failed to set tracing cpumask\n");
  goto out_reset;
 }

 if (FUNC_15(VAR_13) < 0) {
  FUNC_9("failed to set tracing filters\n");
  goto out_reset;
 }

 if (FUNC_14(VAR_13) < 0) {
  FUNC_9("failed to set graph depth\n");
  goto out_reset;
 }

 if (FUNC_19("current_tracer", VAR_13->tracer) < 0) {
  FUNC_9("failed to set current_tracer to %s\n", VAR_13->tracer);
  goto out_reset;
 }

 FUNC_17();

 VAR_16 = FUNC_3("trace_pipe");
 if (!VAR_16) {
  FUNC_9("failed to open trace_pipe\n");
  goto out_reset;
 }

 VAR_17 = FUNC_4(VAR_16, VAR_3);

 FUNC_10(VAR_16);

 if (VAR_17 < 0) {
  FUNC_9("failed to open trace_pipe\n");
  goto out_reset;
 }

 FUNC_1(VAR_17, VAR_1, VAR_2);
 VAR_19.fd = VAR_17;

 if (FUNC_19("tracing_on", "1") < 0) {
  FUNC_9("can't enable tracing\n");
  goto out_close_fd;
 }

 FUNC_7(VAR_13->evlist);

 while (!VAR_9) {
  if (FUNC_8(&VAR_19, 1, -1) < 0)
   break;

  if (VAR_19.revents & VAR_4) {
   int VAR_20 = FUNC_11(VAR_17, VAR_18, sizeof(VAR_18));
   if (VAR_20 < 0)
    break;
   if (FUNC_2(VAR_18, VAR_20, 1, VAR_12) != 1)
    break;
  }
 }

 FUNC_19("tracing_on", "0");


 while (1) {
  int VAR_21 = FUNC_11(VAR_17, VAR_18, sizeof(VAR_18));
  if (VAR_21 <= 0)
   break;
  if (FUNC_2(VAR_18, VAR_21, 1, VAR_12) != 1)
   break;
 }

out_close_fd:
 FUNC_0(VAR_17);
out_reset:
 FUNC_12(VAR_13);
out:
 return VAR_9 ? 0 : -1;
}
