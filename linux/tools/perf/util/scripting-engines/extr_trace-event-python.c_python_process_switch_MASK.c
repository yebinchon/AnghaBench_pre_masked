
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct tables {int dbe; scalar_t__ db_export_mode; } ;
struct perf_sample {int dummy; } ;
struct machine {int dummy; } ;


 int FUNC_0 (int *,union perf_event*,struct perf_sample*,struct machine*) ;
 struct tables VAR_0 ;

__attribute__((used)) static void FUNC_1(union perf_event *VAR_1,
      struct perf_sample *VAR_2,
      struct machine *VAR_3)
{
 struct tables *VAR_4 = &VAR_0;

 if (VAR_4->db_export_mode)
  FUNC_0(&VAR_4->dbe, VAR_1, VAR_2, VAR_3);
}
