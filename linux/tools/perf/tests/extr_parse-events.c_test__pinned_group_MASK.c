
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ config; int pinned; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; struct evsel* leader; int group_name; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;
 struct evsel* FUNC_2 (struct evsel*) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_4)
{
 struct evsel *VAR_5, *VAR_6;

 FUNC_0("wrong number of entries", 3 == VAR_4->core.nr_entries);


 VAR_5 = VAR_6 = FUNC_1(VAR_4);
 FUNC_0("wrong type", VAR_3 == VAR_5->core.attr.type);
 FUNC_0("wrong config",
   VAR_2 == VAR_5->core.attr.config);
 FUNC_0("wrong group name", !VAR_5->group_name);
 FUNC_0("wrong leader", VAR_5->leader == VAR_6);
 FUNC_0("wrong pinned", VAR_5->core.attr.pinned);


 VAR_5 = FUNC_2(VAR_5);
 FUNC_0("wrong type", VAR_3 == VAR_5->core.attr.type);
 FUNC_0("wrong config",
   VAR_1 == VAR_5->core.attr.config);
 FUNC_0("wrong pinned", !VAR_5->core.attr.pinned);


 VAR_5 = FUNC_2(VAR_5);
 FUNC_0("wrong config",
   VAR_0 == VAR_5->core.attr.config);
 FUNC_0("wrong pinned", !VAR_5->core.attr.pinned);

 return 0;
}
