
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int tid; } ;
struct perf_sample {scalar_t__ cpu; int ip; int cpumode; int tid; int pid; } ;
struct perf_env {TYPE_1__* cpu; } ;
struct machine {struct perf_env* env; } ;
struct dso {char* long_name; scalar_t__ short_name; } ;
struct addr_location {char level; int filtered; scalar_t__ cpu; int socket; TYPE_3__* sym; int addr; TYPE_4__* map; int * srcline; } ;
struct TYPE_8__ {struct dso* dso; } ;
struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_6__ {scalar_t__ sym_list; scalar_t__ dso_list; } ;
struct TYPE_5__ {int socket_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 struct thread* FUNC_1 (struct machine*,int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*,int ,int ,struct addr_location*) ;
 scalar_t__ FUNC_6 (struct thread*) ;

int FUNC_7(struct machine *VAR_4, struct addr_location *VAR_5,
       struct perf_sample *VAR_6)
{
 struct thread *VAR_7 = FUNC_1(VAR_4, VAR_6->pid,
       VAR_6->tid);

 if (VAR_7 == ((void*)0))
  return -1;

 FUNC_0(" ... thread: %s:%d\n", FUNC_4(VAR_7), VAR_7->tid);
 FUNC_5(VAR_7, VAR_6->cpumode, VAR_6->ip, VAR_5);
 FUNC_0(" ...... dso: %s\n",
      VAR_5->map ? VAR_5->map->dso->long_name :
   VAR_5->level == 'H' ? "[hypervisor]" : "<not found>");

 if (FUNC_6(VAR_7))
  VAR_5->filtered |= (1 << VAR_2);

 VAR_5->sym = ((void*)0);
 VAR_5->cpu = VAR_6->cpu;
 VAR_5->socket = -1;
 VAR_5->srcline = ((void*)0);

 if (VAR_5->cpu >= 0) {
  struct perf_env *VAR_8 = VAR_4->env;

  if (VAR_8 && VAR_8->cpu)
   VAR_5->socket = VAR_8->cpu[VAR_5->cpu].socket_id;
 }

 if (VAR_5->map) {
  struct dso *VAR_9 = VAR_5->map->dso;

  if (VAR_3.dso_list &&
      (!VAR_9 || !(FUNC_3(VAR_3.dso_list,
        VAR_9->short_name) ||
          (VAR_9->short_name != VAR_9->long_name &&
    FUNC_3(VAR_3.dso_list,
         VAR_9->long_name))))) {
   VAR_5->filtered |= (1 << VAR_0);
  }

  VAR_5->sym = FUNC_2(VAR_5->map, VAR_5->addr);
 }

 if (VAR_3.sym_list &&
  (!VAR_5->sym || !FUNC_3(VAR_3.sym_list,
      VAR_5->sym->name))) {
  VAR_5->filtered |= (1 << VAR_1);
 }

 return 0;
}
