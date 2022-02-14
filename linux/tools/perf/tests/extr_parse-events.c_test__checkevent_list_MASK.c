
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int config; scalar_t__ config1; scalar_t__ config2; int exclude_user; int exclude_kernel; int exclude_hv; int precise_ip; scalar_t__ sample_type; int sample_period; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;
 struct evsel* FUNC_2 (struct evsel*) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_3)
{
 struct evsel *VAR_4 = FUNC_1(VAR_3);

 FUNC_0("wrong number of entries", 3 == VAR_3->core.nr_entries);


 FUNC_0("wrong type", VAR_1 == VAR_4->core.attr.type);
 FUNC_0("wrong config", 1 == VAR_4->core.attr.config);
 FUNC_0("wrong config1", 0 == VAR_4->core.attr.config1);
 FUNC_0("wrong config2", 0 == VAR_4->core.attr.config2);
 FUNC_0("wrong exclude_user", !VAR_4->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_4->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", !VAR_4->core.attr.exclude_hv);
 FUNC_0("wrong precise_ip", !VAR_4->core.attr.precise_ip);


 VAR_4 = FUNC_2(VAR_4);
 FUNC_0("wrong type", VAR_2 == VAR_4->core.attr.type);
 FUNC_0("wrong sample_type",
  VAR_0 == VAR_4->core.attr.sample_type);
 FUNC_0("wrong sample_period", 1 == VAR_4->core.attr.sample_period);
 FUNC_0("wrong exclude_user", VAR_4->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", !VAR_4->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_4->core.attr.exclude_hv);
 FUNC_0("wrong precise_ip", !VAR_4->core.attr.precise_ip);


 VAR_4 = FUNC_2(VAR_4);
 FUNC_0("wrong type", 1 == VAR_4->core.attr.type);
 FUNC_0("wrong config", 1 == VAR_4->core.attr.config);
 FUNC_0("wrong exclude_user", VAR_4->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_4->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", !VAR_4->core.attr.exclude_hv);
 FUNC_0("wrong precise_ip", VAR_4->core.attr.precise_ip);

 return 0;
}
