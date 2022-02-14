
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int freq; int config; int precise_ip; int sample_type; int type; int sample_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct perf_event_attr*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct perf_event_attr VAR_13 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_8,
  .config = VAR_5,
 };
 struct perf_event_attr VAR_14 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_11,
  .config = VAR_6,
 };
 struct perf_event_attr VAR_15 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_9,
  .config =
   VAR_1 |
   (VAR_2 << 8) |
   (VAR_3 << 16),
 };
 struct perf_event_attr VAR_16 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_9,
  .config =
   VAR_0 |
   (VAR_2 << 8) |
   (VAR_4 << 16),
 };
 struct perf_event_attr VAR_17 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_10,

  .config = 0xc0,
 };
 struct perf_event_attr VAR_18 = {
  .sample_freq = VAR_12,
  .freq = 1,
  .type = VAR_10,

  .config = 0x21d0,

  .sample_type = VAR_7,

  .precise_ip = 2,
 };

 FUNC_0("Test HW_CPU_CYCLES\n");
 FUNC_1(&VAR_13);
 FUNC_2(&VAR_13);

 FUNC_0("Test SW_CPU_CLOCK\n");
 FUNC_1(&VAR_14);
 FUNC_2(&VAR_14);

 FUNC_0("Test HW_CACHE_L1D\n");
 FUNC_1(&VAR_15);
 FUNC_2(&VAR_15);

 FUNC_0("Test HW_CACHE_BPU\n");
 FUNC_1(&VAR_16);
 FUNC_2(&VAR_16);

 FUNC_0("Test Instruction Retired\n");
 FUNC_1(&VAR_17);
 FUNC_2(&VAR_17);

 FUNC_0("Test Lock Load\n");
 FUNC_1(&VAR_18);
 FUNC_2(&VAR_18);

 FUNC_0("*** PASS ***\n");
}
