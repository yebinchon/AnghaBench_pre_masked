
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nr_namespaces; struct perf_ns_link_info* link_info; void* tid; void* pid; } ;
union perf_event {TYPE_1__ namespaces; } ;
typedef size_t u64 ;
struct perf_ns_link_info {size_t dev; size_t ino; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (union perf_event*,struct perf_ns_link_info*) ;

__attribute__((used)) static void FUNC_3(union perf_event *VAR_0,
     bool VAR_1)
{
 u64 VAR_2;

 VAR_0->namespaces.pid = FUNC_0(VAR_0->namespaces.pid);
 VAR_0->namespaces.tid = FUNC_0(VAR_0->namespaces.tid);
 VAR_0->namespaces.nr_namespaces = FUNC_1(VAR_0->namespaces.nr_namespaces);

 for (VAR_2 = 0; VAR_2 < VAR_0->namespaces.nr_namespaces; VAR_2++) {
  struct perf_ns_link_info *VAR_3 = &VAR_0->namespaces.link_info[VAR_2];

  VAR_3->dev = FUNC_1(VAR_3->dev);
  VAR_3->ino = FUNC_1(VAR_3->ino);
 }

 if (VAR_1)
  FUNC_2(VAR_0, &VAR_0->namespaces.link_info[VAR_2]);
}
