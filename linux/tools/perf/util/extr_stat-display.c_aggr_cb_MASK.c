
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {int (* aggr_get_id ) (struct perf_stat_config*,int ,int) ;} ;
struct perf_counts_values {scalar_t__ ena; scalar_t__ run; scalar_t__ val; } ;
struct evsel {TYPE_1__* counts; } ;
struct aggr_data {int id; scalar_t__ ena; scalar_t__ run; int val; int nr; } ;
struct TYPE_2__ {int scaled; } ;


 int FUNC_0 (struct evsel*) ;
 struct perf_counts_values* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (struct evsel*) ;
 int FUNC_3 (struct perf_stat_config*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct perf_stat_config *VAR_0,
      struct evsel *VAR_1, void *VAR_2, bool VAR_3)
{
 struct aggr_data *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_1); VAR_5++) {
  struct perf_counts_values *VAR_7;

  VAR_6 = VAR_0->aggr_get_id(VAR_0, FUNC_0(VAR_1), VAR_5);
  if (VAR_6 != VAR_4->id)
   continue;
  if (VAR_3)
   VAR_4->nr++;
  VAR_7 = FUNC_1(VAR_1->counts, VAR_5, 0);




  if (VAR_7->ena == 0 || VAR_7->run == 0 ||
      VAR_1->counts->scaled == -1) {
   VAR_4->ena = 0;
   VAR_4->run = 0;
   break;
  }
  VAR_4->val += VAR_7->val;
  VAR_4->ena += VAR_7->ena;
  VAR_4->run += VAR_7->run;
 }
}
