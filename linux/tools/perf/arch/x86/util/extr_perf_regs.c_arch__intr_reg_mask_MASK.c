
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct perf_event_attr {int sample_regs_intr; int precise_ip; int disabled; int exclude_kernel; int sample_period; int sample_type; int config; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct perf_event_attr*,int ,int,int,int ) ;

uint64_t FUNC_3(void)
{
 struct perf_event_attr VAR_5 = {
  .type = VAR_4,
  .config = VAR_0,
  .sample_type = VAR_3,
  .sample_regs_intr = VAR_2,
  .precise_ip = 1,
  .disabled = 1,
  .exclude_kernel = 1,
 };
 int VAR_6;



 VAR_5.sample_period = 1;

 FUNC_1(&VAR_5);

 VAR_6 = FUNC_2(&VAR_5, 0, -1, -1, 0);
 if (VAR_6 != -1) {
  FUNC_0(VAR_6);
  return (VAR_2 | VAR_1);
 }

 return VAR_1;
}
