
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int dummy; } ;
struct perf_record_auxtrace_info {int dummy; } ;
struct auxtrace_record {int (* info_fill ) (struct auxtrace_record*,struct perf_session*,struct perf_record_auxtrace_info*,size_t) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct auxtrace_record*,struct perf_session*,struct perf_record_auxtrace_info*,size_t) ;

int FUNC_2(struct auxtrace_record *VAR_0,
          struct perf_session *VAR_1,
          struct perf_record_auxtrace_info *VAR_2,
          size_t VAR_3)
{
 if (VAR_0)
  return VAR_0->info_fill(VAR_0, VAR_1, VAR_2, VAR_3);
 return FUNC_0();
}
