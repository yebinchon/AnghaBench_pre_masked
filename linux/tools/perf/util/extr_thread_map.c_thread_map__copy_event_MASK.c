
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_thread_map {int nr; int refcnt; TYPE_1__* map; } ;
struct perf_record_thread_map {unsigned int nr; TYPE_2__* entries; } ;
typedef int pid_t ;
struct TYPE_4__ {int comm; scalar_t__ pid; } ;
struct TYPE_3__ {int comm; } ;


 int FUNC_0 (struct perf_thread_map*,unsigned int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct perf_thread_map *VAR_0,
       struct perf_record_thread_map *VAR_1)
{
 unsigned VAR_2;

 VAR_0->nr = (int) VAR_1->nr;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  FUNC_0(VAR_0, VAR_2, (pid_t) VAR_1->entries[VAR_2].pid);
  VAR_0->map[VAR_2].comm = FUNC_2(VAR_1->entries[VAR_2].comm, 16);
 }

 FUNC_1(&VAR_0->refcnt, 1);
}
