
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;
struct perf_stat_output_ctx {int ctx; int (* print_metric ) (struct perf_stat_config*,int ,char const*,char*,char*,double) ;} ;
struct perf_stat_config {int dummy; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evsel*) ;
 char* FUNC_1 (int ,double) ;
 double FUNC_2 (struct runtime_stat*,int ,int,int) ;
 int FUNC_3 (struct perf_stat_config*,int ,char const*,char*,char*,double) ;
 int FUNC_4 (struct perf_stat_config*,int ,char const*,char*,char*,double) ;

__attribute__((used)) static void FUNC_5(struct perf_stat_config *VAR_2,
       int VAR_3,
       struct evsel *VAR_4, double VAR_5,
       struct perf_stat_output_ctx *VAR_6,
       struct runtime_stat *VAR_7)
{
 double VAR_8, VAR_9 = 0.0;
 const char *VAR_10;
 int VAR_11 = FUNC_0(VAR_4);

 VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_11, VAR_3);

 if (VAR_8)
  VAR_9 = VAR_5 / VAR_8 * 100.0;

 VAR_10 = FUNC_1(VAR_0, VAR_9);

 if (VAR_9)
  VAR_6->print_metric(VAR_2, VAR_6->ctx, VAR_10, "%7.2f%%", "frontend cycles idle",
      VAR_9);
 else
  VAR_6->print_metric(VAR_2, VAR_6->ctx, ((void*)0), ((void*)0), "frontend cycles idle", 0);
}
