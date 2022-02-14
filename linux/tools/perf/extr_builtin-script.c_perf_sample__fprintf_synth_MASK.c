
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample {int dummy; } ;
struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
typedef int FILE ;
 int FUNC_0 (struct perf_sample*,int *) ;
 int FUNC_1 (struct perf_sample*,int *) ;
 int FUNC_2 (struct perf_sample*,int *) ;
 int FUNC_3 (struct perf_sample*,int *) ;
 int FUNC_4 (struct perf_sample*,int *) ;
 int FUNC_5 (struct perf_sample*,int *) ;

__attribute__((used)) static int FUNC_6(struct perf_sample *VAR_0,
          struct evsel *VAR_1, FILE *VAR_2)
{
 switch (VAR_1->core.attr.config) {
 case 130:
  return FUNC_3(VAR_0, VAR_2);
 case 131:
  return FUNC_2(VAR_0, VAR_2);
 case 129:
  return FUNC_4(VAR_0, VAR_2);
 case 132:
  return FUNC_1(VAR_0, VAR_2);
 case 128:
  return FUNC_5(VAR_0, VAR_2);
 case 133:
  return FUNC_0(VAR_0, VAR_2);
 default:
  break;
 }

 return 0;
}
