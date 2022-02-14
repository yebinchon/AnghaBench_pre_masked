
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct evsel* sys_exit; struct evsel* sys_enter; } ;
struct TYPE_5__ {TYPE_3__ events; } ;
struct TYPE_4__ {int entries; int nr; } ;
struct trace {TYPE_2__ syscalls; TYPE_1__ ev_qualifier_ids; int not_ev_qualifier; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct evsel*,char*) ;

__attribute__((used)) static int FUNC_3(struct trace *VAR_2)
{
 int VAR_3 = -1;
 struct evsel *VAR_4;
 char *VAR_5 = FUNC_0("id", !VAR_2->not_ev_qualifier,
      VAR_2->ev_qualifier_ids.nr,
      VAR_2->ev_qualifier_ids.entries);

 if (VAR_5 == ((void*)0))
  goto out_enomem;

 if (!FUNC_2(VAR_2->syscalls.events.sys_enter,
       VAR_5)) {
  VAR_4 = VAR_2->syscalls.events.sys_exit;
  VAR_3 = FUNC_2(VAR_4, VAR_5);
 }

 FUNC_1(VAR_5);
out:
 return VAR_3;
out_enomem:
 VAR_1 = VAR_0;
 goto out;
}
