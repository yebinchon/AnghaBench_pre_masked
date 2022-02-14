
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {char* buf; int size; } ;
struct hists {int dummy; } ;
typedef int bf ;
struct TYPE_2__ {scalar_t__ report_hierarchy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hists*,struct perf_hpp*,int *) ;
 int FUNC_2 (struct hists*,struct perf_hpp*,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(struct hists *VAR_1, FILE *VAR_2)
{
 char VAR_3[1024];
 struct perf_hpp VAR_4 = {
  .buf = VAR_3,
  .size = sizeof(VAR_3),
 };

 FUNC_0(VAR_2, "# ");

 if (VAR_0.report_hierarchy)
  return FUNC_1(VAR_1, &VAR_4, VAR_2);
 else
  return FUNC_2(VAR_1, &VAR_4, VAR_2);

}
