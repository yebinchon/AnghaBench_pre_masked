
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double u64 ;
struct perf_stat_config {TYPE_1__* aggr_map; int * output; } ;
struct evsel {double scale; } ;
struct aggr_data {int id; double val; double ena; double run; int nr; } ;
struct TYPE_2__ {int* map; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct perf_stat_config*,struct evsel*,int,int) ;
 int FUNC_1 (struct perf_stat_config*,struct evsel*,int ,struct aggr_data*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (struct perf_stat_config*,int,int,struct evsel*,double,char*,double,double,double,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct perf_stat_config *VAR_2,
       struct evsel *VAR_3, int VAR_4,
       char *VAR_5, bool VAR_6,
       bool *VAR_7)
{
 struct aggr_data VAR_8;
 FILE *VAR_9 = VAR_2->output;
 u64 VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 double VAR_15;

 VAR_8.id = VAR_13 = VAR_2->aggr_map->map[VAR_4];
 VAR_8.val = VAR_8.ena = VAR_8.run = 0;
 VAR_8.nr = 0;
 if (!FUNC_1(VAR_2, VAR_3, VAR_0, &VAR_8))
  return;

 VAR_14 = VAR_8.nr;
 VAR_10 = VAR_8.ena;
 VAR_11 = VAR_8.run;
 VAR_12 = VAR_8.val;
 if (*VAR_7 && VAR_6) {
  *VAR_7 = 0;
  FUNC_0(VAR_2, VAR_3, VAR_13, VAR_14);
 }
 if (VAR_5 && !VAR_6)
  FUNC_2(VAR_9, "%s", VAR_5);

 VAR_15 = VAR_12 * VAR_3->scale;
 FUNC_4(VAR_2, VAR_13, VAR_14, VAR_3, VAR_15, VAR_5,
   VAR_11, VAR_10, 1.0, &VAR_1);
 if (!VAR_6)
  FUNC_3('\n', VAR_9);
}
