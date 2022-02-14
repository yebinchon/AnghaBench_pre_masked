
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_buffer*,int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct perf_buffer *VAR_1)
{
 int VAR_2;

 while (1) {
  VAR_2 = FUNC_0(VAR_1, 100);
  if (VAR_2 < 0 && VAR_2 != -VAR_0) {
   FUNC_1("failed perf_buffer__poll: %d\n", VAR_2);
   return;
  }
 }
}
