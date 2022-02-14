
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {int csv_sep; } ;
struct outstate {char* prefix; int nfields; int fh; int nr; int id; int evsel; } ;


 int FUNC_0 (struct perf_stat_config*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct perf_stat_config *VAR_0, void *VAR_1)
{
 struct outstate *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_2('\n', VAR_2->fh);
 if (VAR_2->prefix)
  FUNC_1(VAR_2->fh, "%s%d", VAR_2->prefix, VAR_0->csv_sep);
 FUNC_0(VAR_0, VAR_2->evsel, VAR_2->id, VAR_2->nr);
 for (VAR_3 = 0; VAR_3 < VAR_2->nfields; VAR_3++)
  FUNC_3(VAR_0->csv_sep, VAR_2->fh);
}
