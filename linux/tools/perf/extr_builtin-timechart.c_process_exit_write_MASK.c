
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {int dummy; } ;
struct perf_sample {int time; int tid; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_1 (struct timechart*,int ,int ,int ,long) ;

__attribute__((used)) static int
FUNC_2(struct timechart *VAR_1,
     struct evsel *VAR_2,
     struct perf_sample *VAR_3)
{
 long VAR_4 = FUNC_0(VAR_2, VAR_3, "ret");
 return FUNC_1(VAR_1, VAR_3->tid, VAR_0,
     VAR_3->time, VAR_4);
}
