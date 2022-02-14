
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_period; int config; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event_attr*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct perf_event_attr VAR_3 = {
  .sample_period = 1,
  .type = VAR_2,
  .config = VAR_1,
 };

 FUNC_0(&VAR_3, VAR_0,
    "perf_sw_event");
}
