
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct thread {int dummy; } ;
struct perf_sample {int flags; int ip; int addr; } ;
struct perf_event_attr {int dummy; } ;
struct TYPE_3__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
struct addr_location {TYPE_2__* sym; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_event_attr*) ;
 int FUNC_1 (struct thread*,struct addr_location*,struct perf_sample*) ;

__attribute__((used)) static const char *FUNC_2(struct perf_sample *VAR_4,
          struct evsel *VAR_5,
          struct thread *VAR_6,
          struct addr_location *VAR_7,
          u64 *VAR_8)
{
 struct addr_location VAR_9;
 struct perf_event_attr *VAR_10 = &VAR_5->core.attr;
 const char *VAR_11 = ((void*)0);

 if (VAR_4->flags & (VAR_0 | VAR_2)) {
  if (FUNC_0(VAR_10)) {
   FUNC_1(VAR_6, &VAR_9, VAR_4);
   if (VAR_9.sym)
    VAR_11 = VAR_9.sym->name;
   else
    *VAR_8 = VAR_4->addr;
  } else {
   *VAR_8 = VAR_4->addr;
  }
 } else if (VAR_4->flags & (VAR_1 | VAR_3)) {
  if (VAR_7->sym)
   VAR_11 = VAR_7->sym->name;
  else
   *VAR_8 = VAR_4->ip;
 }
 return VAR_11;
}
