
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int type; } ;
struct TYPE_4__ {int nr_namespaces; TYPE_1__ header; struct perf_ns_link_info* link_info; void* tid; void* pid; } ;
union perf_event {TYPE_2__ namespaces; } ;
typedef size_t u32 ;
struct perf_tool {int namespace_events; } ;
struct perf_ns_link_info {int dummy; } ;
struct machine {scalar_t__ id_hdr_size; } ;
typedef void* pid_t ;
typedef int perf_event__handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_1 (void*,int ,struct perf_ns_link_info*) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (struct perf_tool*,union perf_event*,struct machine*,int ) ;

int FUNC_4(struct perf_tool *VAR_2,
          union perf_event *VAR_3,
          pid_t VAR_4, pid_t VAR_5,
          perf_event__handler_t VAR_6,
          struct machine *VAR_7)
{
 u32 VAR_8;
 struct perf_ns_link_info *VAR_9;

 if (!VAR_2 || !VAR_2->namespace_events)
  return 0;

 FUNC_0(&VAR_3->namespaces, 0, (sizeof(VAR_3->namespaces) +
        (VAR_0 * sizeof(struct perf_ns_link_info)) +
        VAR_7->id_hdr_size));

 VAR_3->namespaces.pid = VAR_5;
 VAR_3->namespaces.tid = VAR_4;

 VAR_3->namespaces.nr_namespaces = VAR_0;

 VAR_9 = VAR_3->namespaces.link_info;

 for (VAR_8 = 0; VAR_8 < VAR_3->namespaces.nr_namespaces; VAR_8++)
  FUNC_1(VAR_4, FUNC_2(VAR_8),
          &VAR_9[VAR_8]);

 VAR_3->namespaces.header.type = VAR_1;

 VAR_3->namespaces.header.size = (sizeof(VAR_3->namespaces) +
   (VAR_0 * sizeof(struct perf_ns_link_info)) +
   VAR_7->id_hdr_size);

 if (FUNC_3(VAR_2, VAR_3, VAR_7, VAR_6) != 0)
  return -1;

 return 0;
}
