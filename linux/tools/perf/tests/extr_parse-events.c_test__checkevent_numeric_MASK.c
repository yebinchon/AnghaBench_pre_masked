
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int config; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct evlist *VAR_0)
{
 struct evsel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("wrong number of entries", 1 == VAR_0->core.nr_entries);
 FUNC_0("wrong type", 1 == VAR_1->core.attr.type);
 FUNC_0("wrong config", 1 == VAR_1->core.attr.config);
 return 0;
}
