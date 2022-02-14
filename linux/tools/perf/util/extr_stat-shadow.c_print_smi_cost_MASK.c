
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;
struct perf_stat_output_ctx {int ctx; int (* print_metric ) (struct perf_stat_config*,int ,char const*,char*,char*,double) ;} ;
struct perf_stat_config {int dummy; } ;
struct evsel {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evsel*) ;
 double FUNC_1 (struct runtime_stat*,int ,int,int) ;
 int FUNC_2 (struct perf_stat_config*,int ,char const*,char*,char*,double) ;
 int FUNC_3 (struct perf_stat_config*,int ,char const*,char*,char*,double) ;

__attribute__((used)) static void FUNC_4(struct perf_stat_config *VAR_4,
      int VAR_5, struct evsel *VAR_6,
      struct perf_stat_output_ctx *VAR_7,
      struct runtime_stat *VAR_8)
{
 double VAR_9, VAR_10, VAR_11, VAR_12 = 0.0;
 int VAR_13 = FUNC_0(VAR_6);
 const char *VAR_14 = ((void*)0);

 VAR_9 = FUNC_1(VAR_8, VAR_3, VAR_13, VAR_5);
 VAR_10 = FUNC_1(VAR_8, VAR_1, VAR_13, VAR_5);
 VAR_11 = FUNC_1(VAR_8, VAR_2, VAR_13, VAR_5);

 if ((VAR_11 == 0) || (VAR_10 == 0))
  return;

 if (VAR_9)
  VAR_12 = (VAR_10 - VAR_11) / VAR_10 * 100.00;

 if (VAR_12 > 10)
  VAR_14 = VAR_0;
 VAR_7->print_metric(VAR_4, VAR_7->ctx, VAR_14, "%8.1f%%", "SMI cycles%", VAR_12);
 VAR_7->print_metric(VAR_4, VAR_7->ctx, ((void*)0), "%4.0f", "SMI#", VAR_9);
}
