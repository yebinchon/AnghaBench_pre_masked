
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int config; scalar_t__ sample_period; int sample_type; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evsel*) ;
 struct evsel* FUNC_3 (struct evsel*) ;

__attribute__((used)) static int FUNC_4(struct evlist *VAR_2)
{
 struct evsel *VAR_3 = FUNC_1(VAR_2);


 FUNC_0("wrong number of entries", 2 == VAR_2->core.nr_entries);
 FUNC_0("wrong type", VAR_1 == VAR_3->core.attr.type);
 FUNC_0("wrong config", 1 == VAR_3->core.attr.config);





 FUNC_0("wrong period", 0 == VAR_3->core.attr.sample_period);
 FUNC_0("wrong callgraph", !FUNC_2(VAR_3));
 FUNC_0("wrong time", !(VAR_0 & VAR_3->core.attr.sample_type));


 VAR_3 = FUNC_3(VAR_3);
 FUNC_0("wrong type", VAR_1 == VAR_3->core.attr.type);
 FUNC_0("wrong config", 2 == VAR_3->core.attr.config);





 FUNC_0("wrong period", 0 == VAR_3->core.attr.sample_period);
 FUNC_0("wrong callgraph", !FUNC_2(VAR_3));
 FUNC_0("wrong time", !(VAR_0 & VAR_3->core.attr.sample_type));

 return 0;
}
