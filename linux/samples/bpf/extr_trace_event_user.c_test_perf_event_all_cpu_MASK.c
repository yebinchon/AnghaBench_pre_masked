
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ inherit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,...) ;
 int* FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int * VAR_4 ;
 int FUNC_9 (struct perf_event_attr*,int,int,int,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct perf_event_attr *VAR_5)
{
 int VAR_6 = FUNC_10(VAR_3);
 int *VAR_7 = FUNC_6(VAR_6 * sizeof(int));
 int VAR_8, VAR_9 = 0;


 VAR_5->inherit = 0;


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7[VAR_8] = FUNC_9(VAR_5, -1, VAR_8, -1, 0);
  if (VAR_7[VAR_8] < 0) {
   FUNC_8("sys_perf_event_open failed\n");
   VAR_9 = 1;
   goto all_cpu_err;
  }
  FUNC_0(FUNC_5(VAR_7[VAR_8], VAR_2, VAR_4[0]) == 0);
  FUNC_0(FUNC_5(VAR_7[VAR_8], VAR_1) == 0);
 }

 if (FUNC_3() < 0) {
  VAR_9 = 1;
  goto all_cpu_err;
 }
 FUNC_7();
all_cpu_err:
 for (VAR_8--; VAR_8 >= 0; VAR_8--) {
  FUNC_5(VAR_7[VAR_8], VAR_0);
  FUNC_1(VAR_7[VAR_8]);
 }
 FUNC_2(VAR_7);
 if (VAR_9)
  FUNC_4(0);
}
