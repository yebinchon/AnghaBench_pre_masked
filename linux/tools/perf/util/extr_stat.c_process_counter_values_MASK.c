
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {int aggr_mode; int * stats; int scale; } ;
struct perf_counts_values {int run; int ena; int val; } ;
struct evsel {int percore; int snapshot; TYPE_1__* counts; } ;
struct TYPE_2__ {struct perf_counts_values aggr; } ;
 scalar_t__ FUNC_0 (struct evsel*,struct perf_counts_values*,int,int*) ;
 int FUNC_1 (struct perf_counts_values*,int ,int *) ;
 int FUNC_2 (struct evsel*,int,int,struct perf_counts_values*) ;
 int FUNC_3 (struct evsel*,int ,int,int *) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(struct perf_stat_config *VAR_1, struct evsel *VAR_2,
         int VAR_3, int VAR_4,
         struct perf_counts_values *VAR_5)
{
 struct perf_counts_values *VAR_6 = &VAR_2->counts->aggr;
 static struct perf_counts_values VAR_7;
 bool VAR_8 = 0;

 if (FUNC_0(VAR_2, VAR_5, VAR_3, &VAR_8)) {
  FUNC_4("failed to read per-pkg counter\n");
  return -1;
 }

 if (VAR_8)
  VAR_5 = &VAR_7;

 switch (VAR_1->aggr_mode) {
 case 129:
 case 134:
 case 133:
 case 130:
 case 131:
  if (!VAR_2->snapshot)
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_1(VAR_5, VAR_1->scale, ((void*)0));
  if ((VAR_1->aggr_mode == 131) && (!VAR_2->percore)) {
   FUNC_3(VAR_2, VAR_5->val,
             VAR_3, &VAR_0);
  }

  if (VAR_1->aggr_mode == 129) {
   if (VAR_1->stats)
    FUNC_3(VAR_2,
     VAR_5->val, 0, &VAR_1->stats[VAR_4]);
   else
    FUNC_3(VAR_2,
     VAR_5->val, 0, &VAR_0);
  }
  break;
 case 132:
  VAR_6->val += VAR_5->val;
  VAR_6->ena += VAR_5->ena;
  VAR_6->run += VAR_5->run;
 case 128:
 default:
  break;
 }

 return 0;
}
