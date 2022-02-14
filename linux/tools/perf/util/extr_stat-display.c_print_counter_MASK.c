
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;
struct perf_stat_config {int * output; } ;
struct evsel {double scale; } ;
struct aggr_data {int cpu; double val; double ena; double run; } ;
typedef int FILE ;


 int FUNC_0 (struct perf_stat_config*,struct evsel*,int ,struct aggr_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (struct evsel*) ;
 int FUNC_4 (struct perf_stat_config*,int,int ,struct evsel*,double,char*,double,double,double,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct perf_stat_config *VAR_2,
     struct evsel *VAR_3, char *VAR_4)
{
 FILE *VAR_5 = VAR_2->output;
 u64 VAR_6, VAR_7, VAR_8;
 double VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_3); VAR_10++) {
  struct aggr_data VAR_11 = { .cpu = VAR_10 };

  if (!FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_11))
   return;
  VAR_8 = VAR_11.val;
  VAR_6 = VAR_11.ena;
  VAR_7 = VAR_11.run;

  if (VAR_4)
   FUNC_1(VAR_5, "%s", VAR_4);

  VAR_9 = VAR_8 * VAR_3->scale;
  FUNC_4(VAR_2, VAR_10, 0, VAR_3, VAR_9, VAR_4, VAR_7, VAR_6, 1.0,
    &VAR_1);

  FUNC_2('\n', VAR_5);
 }
}
