
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ config; int bp_type; scalar_t__ bp_len; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct TYPE_4__ {int nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct evlist *VAR_4)
{
 struct evsel *VAR_5 = FUNC_1(VAR_4);

 FUNC_0("wrong number of entries", 1 == VAR_4->core.nr_entries);
 FUNC_0("wrong type", VAR_3 == VAR_5->core.attr.type);
 FUNC_0("wrong config", 0 == VAR_5->core.attr.config);
 FUNC_0("wrong bp_type", (VAR_1 | VAR_2) ==
      VAR_5->core.attr.bp_type);
 FUNC_0("wrong bp_len", VAR_0 ==
     VAR_5->core.attr.bp_len);

 return 0;
}
