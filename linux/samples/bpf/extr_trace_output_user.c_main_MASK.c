
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_buffer_opts {int sample_cb; } ;
struct perf_buffer {int dummy; } ;
typedef int filename ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct perf_buffer*) ;
 scalar_t__ FUNC_2 (char*) ;
 int * VAR_4 ;
 struct perf_buffer* FUNC_3 (int ,int,struct perf_buffer_opts*) ;
 int FUNC_4 (struct perf_buffer*,int) ;
 int * FUNC_5 (char*,char*) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int VAR_6 ;
 int FUNC_8 () ;

int FUNC_9(int VAR_7, char **VAR_8)
{
 struct perf_buffer_opts VAR_9 = {};
 struct perf_buffer *VAR_10;
 char VAR_11[256];
 FILE *VAR_12;
 int VAR_13;

 FUNC_7(VAR_11, sizeof(VAR_11), "%s_kern.o", VAR_8[0]);

 if (FUNC_2(VAR_11)) {
  FUNC_6("%s", VAR_2);
  return 1;
 }

 VAR_9.sample_cb = VAR_5;
 VAR_10 = FUNC_3(VAR_4[0], 8, &VAR_9);
 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13) {
  FUNC_6("failed to setup perf_buffer: %d\n", VAR_13);
  return 1;
 }

 VAR_12 = FUNC_5("taskset 1 dd if=/dev/zero of=/dev/null", "r");
 (void) VAR_12;

 VAR_6 = FUNC_8();
 while ((VAR_13 = FUNC_4(VAR_10, 1000)) >= 0 && VAR_3 < VAR_0) {
 }
 FUNC_0(0, VAR_1);
 return VAR_13;
}
