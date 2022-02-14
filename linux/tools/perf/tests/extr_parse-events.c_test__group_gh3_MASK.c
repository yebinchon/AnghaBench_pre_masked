
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ config; int exclude_kernel; int exclude_hv; int exclude_guest; int exclude_host; int precise_ip; int exclude_user; } ;
struct TYPE_6__ {int nr_members; TYPE_2__ attr; } ;
struct evsel {struct evsel* leader; TYPE_3__ core; int group_name; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {int nr_groups; TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evsel*) ;
 int FUNC_3 (struct evsel*) ;
 struct evsel* FUNC_4 (struct evsel*) ;

__attribute__((used)) static int FUNC_5(struct evlist *VAR_3)
{
 struct evsel *VAR_4, *VAR_5;

 FUNC_0("wrong number of entries", 2 == VAR_3->core.nr_entries);
 FUNC_0("wrong number of groups", 1 == VAR_3->nr_groups);


 VAR_4 = VAR_5 = FUNC_1(VAR_3);
 FUNC_0("wrong type", VAR_2 == VAR_4->core.attr.type);
 FUNC_0("wrong config",
   VAR_1 == VAR_4->core.attr.config);
 FUNC_0("wrong exclude_user", !VAR_4->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_4->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_4->core.attr.exclude_hv);
 FUNC_0("wrong exclude guest", !VAR_4->core.attr.exclude_guest);
 FUNC_0("wrong exclude host", VAR_4->core.attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_4->core.attr.precise_ip);
 FUNC_0("wrong group name", !VAR_4->group_name);
 FUNC_0("wrong leader", FUNC_3(VAR_4));
 FUNC_0("wrong core.nr_members", VAR_4->core.nr_members == 2);
 FUNC_0("wrong group_idx", FUNC_2(VAR_4) == 0);


 VAR_4 = FUNC_4(VAR_4);
 FUNC_0("wrong type", VAR_2 == VAR_4->core.attr.type);
 FUNC_0("wrong config",
   VAR_0 == VAR_4->core.attr.config);
 FUNC_0("wrong exclude_user", !VAR_4->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_4->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_4->core.attr.exclude_hv);
 FUNC_0("wrong exclude guest", VAR_4->core.attr.exclude_guest);
 FUNC_0("wrong exclude host", !VAR_4->core.attr.exclude_host);
 FUNC_0("wrong precise_ip", !VAR_4->core.attr.precise_ip);
 FUNC_0("wrong leader", VAR_4->leader == VAR_5);
 FUNC_0("wrong group_idx", FUNC_2(VAR_4) == 1);

 return 0;
}
