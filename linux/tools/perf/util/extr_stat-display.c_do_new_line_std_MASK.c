
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {scalar_t__ aggr_mode; } ;
struct outstate {int fh; int nr; int id; int evsel; int prefix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_stat_config*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct perf_stat_config *VAR_1,
       struct outstate *VAR_2)
{
 FUNC_2('\n', VAR_2->fh);
 FUNC_3(VAR_2->prefix, VAR_2->fh);
 FUNC_0(VAR_1, VAR_2->evsel, VAR_2->id, VAR_2->nr);
 if (VAR_1->aggr_mode == VAR_0)
  FUNC_1(VAR_2->fh, "        ");
 FUNC_1(VAR_2->fh, "                                                 ");
}
