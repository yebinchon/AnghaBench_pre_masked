
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int type; int config; int sample_type; int read_format; int inherit; int sample_period; int freq; } ;


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
 int FUNC_0 (struct perf_event_attr*,char*) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct perf_event_attr VAR_12 = {
  .freq = 0,
  .sample_period = VAR_11,
  .inherit = 0,
  .type = VAR_7,
  .read_format = 0,
  .sample_type = 0,
  .config = VAR_5,
 };
 struct perf_event_attr VAR_13 = {
  .freq = 0,
  .sample_period = VAR_11,
  .inherit = 0,
  .type = VAR_10,
  .read_format = 0,
  .sample_type = 0,
  .config = VAR_6,
 };
 struct perf_event_attr VAR_14 = {
  .freq = 0,
  .sample_period = VAR_11,
  .inherit = 0,
  .type = VAR_9,
  .read_format = 0,
  .sample_type = 0,

  .config = 0xc0,
 };
 struct perf_event_attr VAR_15 = {
  .freq = 0,
  .sample_period = VAR_11,
  .inherit = 0,
  .type = VAR_8,
  .read_format = 0,
  .sample_type = 0,
  .config =
   VAR_0 |
   (VAR_2 << 8) |
   (VAR_3 << 16),
 };
 struct perf_event_attr VAR_16 = {
  .freq = 0,
  .sample_period = VAR_11,
  .inherit = 0,
  .type = VAR_8,
  .read_format = 0,
  .sample_type = 0,
  .config =
   VAR_1 |
   (VAR_2 << 8) |
   (VAR_4 << 16),
 };
 struct perf_event_attr VAR_17 = {
  .freq = 0,
  .sample_period = 0,
  .inherit = 0,

  .type = 7,
  .read_format = 0,
  .sample_type = 0,
  .config = 0,
 };

 FUNC_0(&VAR_12, "HARDWARE-cycles");
 FUNC_0(&VAR_13, "SOFTWARE-clock");
 FUNC_0(&VAR_14, "RAW-instruction-retired");
 FUNC_0(&VAR_15, "HW_CACHE-L1D-load");


 FUNC_0(&VAR_16, "HW_CACHE-LLC-miss");
 FUNC_0(&VAR_17, "Dynamic-msr-tsc");
}
