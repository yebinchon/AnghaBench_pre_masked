
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_hpp {char* buf; size_t size; } ;
struct TYPE_3__ {int total_period; } ;
struct hists {TYPE_1__ stats; } ;
struct hist_entry {struct hists* hists; } ;
struct TYPE_4__ {scalar_t__ report_block; scalar_t__ report_hierarchy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct hist_entry*,char*,size_t,int *) ;
 scalar_t__ FUNC_2 (struct hist_entry*) ;
 int FUNC_3 (struct hist_entry*,struct perf_hpp*,struct hists*,int *) ;
 int FUNC_4 (struct hist_entry*,struct perf_hpp*) ;
 int FUNC_5 (struct hist_entry*,int ,int ,int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct hist_entry *VAR_1, size_t VAR_2,
          char *VAR_3, size_t VAR_4, FILE *VAR_5,
          bool VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 struct perf_hpp VAR_9 = {
  .buf = VAR_3,
  .size = VAR_2,
 };
 struct hists *VAR_10 = VAR_1->hists;
 u64 VAR_11 = VAR_10->stats.total_period;

 if (VAR_2 == 0 || VAR_2 > VAR_4)
  VAR_2 = VAR_9.size = VAR_4;

 if (VAR_0.report_hierarchy)
  return FUNC_3(VAR_1, &VAR_9, VAR_10, VAR_5);

 if (VAR_0.report_block)
  return FUNC_1(VAR_1, VAR_3, VAR_2, VAR_5);

 FUNC_4(VAR_1, &VAR_9);

 VAR_7 = FUNC_0(VAR_5, "%s\n", VAR_3);

 if (FUNC_2(VAR_1) && !VAR_6)
  VAR_8 = FUNC_5(VAR_1, VAR_11,
             0, VAR_5);

 VAR_7 += VAR_8;

 return VAR_7;
}
