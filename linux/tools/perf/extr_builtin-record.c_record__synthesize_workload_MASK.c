
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tail_synthesize; int sample_address; } ;
struct record {TYPE_3__ opts; TYPE_2__* session; int tool; TYPE_5__* evlist; } ;
struct perf_thread_map {int dummy; } ;
struct TYPE_9__ {int pid; } ;
struct TYPE_10__ {TYPE_4__ workload; } ;
struct TYPE_6__ {int host; } ;
struct TYPE_7__ {TYPE_1__ machines; } ;


 int FUNC_0 (int *,struct perf_thread_map*,int ,int *,int ) ;
 int FUNC_1 (struct perf_thread_map*) ;
 int VAR_0 ;
 struct perf_thread_map* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct record *VAR_1, bool VAR_2)
{
 int VAR_3;
 struct perf_thread_map *VAR_4;

 if (VAR_1->opts.tail_synthesize != VAR_2)
  return 0;

 VAR_4 = FUNC_2(VAR_1->evlist->workload.pid);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_3 = FUNC_0(&VAR_1->tool, VAR_4,
       VAR_0,
       &VAR_1->session->machines.host,
       VAR_1->opts.sample_address);
 FUNC_1(VAR_4);
 return VAR_3;
}
