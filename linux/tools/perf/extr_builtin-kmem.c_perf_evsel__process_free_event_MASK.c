
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {scalar_t__ cpu; } ;
struct evsel {int dummy; } ;
struct alloc_stat {short alloc_cpu; int pingpong; int call_site; scalar_t__ last_alloc; } ;


 unsigned long FUNC_0 (struct evsel*,struct perf_sample*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alloc_stat* FUNC_1 (unsigned long,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_5,
       struct perf_sample *VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_5, VAR_6, "ptr");
 struct alloc_stat *VAR_8, *VAR_9;

 VAR_8 = FUNC_1(VAR_7, 0, &VAR_1, VAR_0);
 if (!VAR_8)
  return 0;

 VAR_4 += VAR_8->last_alloc;

 if ((short)VAR_6->cpu != VAR_8->alloc_cpu) {
  VAR_8->pingpong++;

  VAR_9 = FUNC_1(0, VAR_8->call_site,
          &VAR_2,
          VAR_3);
  if (!VAR_9)
   return -1;
  VAR_9->pingpong++;
 }
 VAR_8->alloc_cpu = -1;

 return 0;
}
