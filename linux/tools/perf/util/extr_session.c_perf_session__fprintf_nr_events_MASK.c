
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {TYPE_1__* evlist; int header; } ;
struct TYPE_2__ {int stats; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

size_t FUNC_3(struct perf_session *VAR_1, FILE *VAR_2)
{
 size_t VAR_3;
 const char *VAR_4 = "";

 if (FUNC_2(&VAR_1->header, VAR_0))
  VAR_4 = " (excludes AUX area (e.g. instruction trace) decoded / synthesized events)";

 VAR_3 = FUNC_1(VAR_2, "\nAggregated stats:%s\n", VAR_4);

 VAR_3 += FUNC_0(&VAR_1->evlist->stats, VAR_2);
 return VAR_3;
}
