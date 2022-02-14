
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_script {int allocated; int threads; int cpus; TYPE_1__* session; } ;
struct evlist {int core; } ;
struct TYPE_2__ {struct evlist* evlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct evlist*,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct perf_script *VAR_2)
{
 struct evlist *VAR_3 = VAR_2->session->evlist;

 if (!VAR_2->cpus || !VAR_2->threads)
  return 0;

 if (FUNC_0(VAR_2->allocated, "stats double allocation\n"))
  return -VAR_0;

 FUNC_2(&VAR_3->core, VAR_2->cpus, VAR_2->threads);

 if (FUNC_1(VAR_3, 1))
  return -VAR_1;

 VAR_2->allocated = 1;
 return 0;
}
