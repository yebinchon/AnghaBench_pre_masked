
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; scalar_t__ sample_type; int sample_period; } ;
struct TYPE_5__ {TYPE_3__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {scalar_t__ nr_groups; TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct evlist *VAR_2)
{
 struct evsel *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("wrong number of entries", 1 == VAR_2->core.nr_entries);
 FUNC_0("wrong number of groups", 0 == VAR_2->nr_groups);
 FUNC_0("wrong type", VAR_1 == VAR_3->core.attr.type);
 FUNC_0("wrong sample_type",
  VAR_0 == VAR_3->core.attr.sample_type);
 FUNC_0("wrong sample_period", 1 == VAR_3->core.attr.sample_period);
 return 0;
}
