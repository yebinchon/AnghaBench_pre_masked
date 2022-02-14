
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct evsel* sys_exit; struct evsel* sys_enter; } ;
struct TYPE_10__ {TYPE_3__ events; } ;
struct trace {TYPE_4__ syscalls; int kernel_syscallchains; int opts; struct evlist* evlist; } ;
struct TYPE_7__ {int exclude_callchain_kernel; } ;
struct TYPE_8__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;
struct TYPE_11__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (struct evlist*,struct evsel*) ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct evsel*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_3 (struct evsel*,int ) ;
 scalar_t__ FUNC_4 (struct evsel*,int) ;
 struct evsel* FUNC_5 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct trace *VAR_4)
{
 int VAR_5 = -1;
 struct evlist *VAR_6 = VAR_4->evlist;
 struct evsel *VAR_7, *VAR_8;

 VAR_7 = FUNC_5("sys_enter", VAR_2);
 if (VAR_7 == ((void*)0))
  goto out;

 if (FUNC_3(VAR_7, VAR_0))
  goto out_delete_sys_enter;

 VAR_8 = FUNC_5("sys_exit", VAR_3);
 if (VAR_8 == ((void*)0))
  goto out_delete_sys_enter;

 if (FUNC_4(VAR_8, VAR_5))
  goto out_delete_sys_exit;

 FUNC_2(VAR_7, &VAR_4->opts, &VAR_1);
 FUNC_2(VAR_8, &VAR_4->opts, &VAR_1);

 FUNC_0(VAR_6, VAR_7);
 FUNC_0(VAR_6, VAR_8);

 if (VAR_1.enabled && !VAR_4->kernel_syscallchains) {





  VAR_8->core.attr.exclude_callchain_kernel = 1;
 }

 VAR_4->syscalls.events.sys_enter = VAR_7;
 VAR_4->syscalls.events.sys_exit = VAR_8;

 VAR_5 = 0;
out:
 return VAR_5;

out_delete_sys_exit:
 FUNC_1(VAR_8);
out_delete_sys_enter:
 FUNC_1(VAR_7);
 goto out;
}
