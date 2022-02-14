
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int exclude_kernel; int exclude_hv; int pinned; int precise_ip; int exclude_user; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct TYPE_6__ {int nr_entries; } ;
struct evlist {TYPE_3__ core; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct evlist *VAR_1)
{
 struct evsel *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("wrong number of entries", 1 == VAR_1->core.nr_entries);
 FUNC_0("wrong type", VAR_0 == VAR_2->core.attr.type);
 FUNC_0("wrong exclude_user",
   !VAR_2->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel",
   VAR_2->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_2->core.attr.exclude_hv);
 FUNC_0("wrong precise_ip", !VAR_2->core.attr.precise_ip);
 FUNC_0("wrong pinned", !VAR_2->core.attr.pinned);

 return 0;
}
