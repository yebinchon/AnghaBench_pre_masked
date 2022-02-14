
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tep_format_field {int dummy; } ;
struct perf_sample {int dummy; } ;
struct evsel {int needs_swap; } ;


 int FUNC_0 (struct tep_format_field*,struct perf_sample*,int ) ;
 struct tep_format_field* FUNC_1 (struct evsel*,char const*) ;

u64 FUNC_2(struct evsel *VAR_0, struct perf_sample *VAR_1,
         const char *VAR_2)
{
 struct tep_format_field *VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (!VAR_3)
  return 0;

 return VAR_3 ? FUNC_0(VAR_3, VAR_1, VAR_0->needs_swap) : 0;
}
