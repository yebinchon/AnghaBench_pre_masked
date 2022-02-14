
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ config; int exclude_user; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;

__attribute__((used)) static int FUNC_2(struct evlist *VAR_2)
{
 struct evsel *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("wrong type", VAR_3->core.attr.type == VAR_1);
 FUNC_0("wrong config", VAR_3->core.attr.config == VAR_0);
 FUNC_0("wrong exclude_user", VAR_3->core.attr.exclude_user);
 return 0;
}
