
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tp_name ;
struct TYPE_10__ {int * table; } ;
struct trace {TYPE_2__ syscalls; TYPE_5__* sctbl; } ;
struct syscall {int nonexistent; char const* name; int is_exit; int is_open; int nr_args; TYPE_4__* args; TYPE_7__* tp_format; TYPE_6__* fmt; } ;
struct TYPE_11__ {int nr_fields; TYPE_4__* fields; } ;
struct TYPE_15__ {TYPE_3__ format; } ;
struct TYPE_14__ {char const* alias; } ;
struct TYPE_9__ {scalar_t__ max_id; } ;
struct TYPE_13__ {TYPE_1__ syscalls; } ;
struct TYPE_12__ {char const* name; struct TYPE_12__* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (struct syscall*,int) ;
 int FUNC_6 (struct syscall*) ;
 TYPE_6__* FUNC_7 (char const*) ;
 char* FUNC_8 (TYPE_5__*,int) ;
 void* FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct trace *VAR_1, int VAR_2)
{
 char VAR_3[128];
 struct syscall *VAR_4;
 const char *VAR_5 = FUNC_8(VAR_1->sctbl, VAR_2);

 if (VAR_1->syscalls.table == ((void*)0)) {
  VAR_1->syscalls.table = FUNC_2(VAR_1->sctbl->syscalls.max_id + 1, sizeof(*VAR_4));
  if (VAR_1->syscalls.table == ((void*)0))
   return -VAR_0;
 }

 VAR_4 = VAR_1->syscalls.table + VAR_2;
 if (VAR_4->nonexistent)
  return 0;

 if (VAR_5 == ((void*)0)) {
  VAR_4->nonexistent = 1;
  return 0;
 }

 VAR_4->name = VAR_5;
 VAR_4->fmt = FUNC_7(VAR_4->name);

 FUNC_3(VAR_3, sizeof(VAR_3), "sys_enter_%s", VAR_4->name);
 VAR_4->tp_format = FUNC_9("syscalls", VAR_3);

 if (FUNC_0(VAR_4->tp_format) && VAR_4->fmt && VAR_4->fmt->alias) {
  FUNC_3(VAR_3, sizeof(VAR_3), "sys_enter_%s", VAR_4->fmt->alias);
  VAR_4->tp_format = FUNC_9("syscalls", VAR_3);
 }

 if (FUNC_5(VAR_4, FUNC_0(VAR_4->tp_format) ? 6 : VAR_4->tp_format->format.nr_fields))
  return -VAR_0;

 if (FUNC_0(VAR_4->tp_format))
  return FUNC_1(VAR_4->tp_format);

 VAR_4->args = VAR_4->tp_format->format.fields;





 if (VAR_4->args && (!FUNC_4(VAR_4->args->name, "__syscall_nr") || !FUNC_4(VAR_4->args->name, "nr"))) {
  VAR_4->args = VAR_4->args->next;
  --VAR_4->nr_args;
 }

 VAR_4->is_exit = !FUNC_4(VAR_5, "exit_group") || !FUNC_4(VAR_5, "exit");
 VAR_4->is_open = !FUNC_4(VAR_5, "open") || !FUNC_4(VAR_5, "openat");

 return FUNC_6(VAR_4);
}
