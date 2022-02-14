
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exclude_kernel; int exclude_hv; int precise_ip; int exclude_user; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct evsel* FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evlist*) ;

__attribute__((used)) static int
FUNC_3(struct evlist *VAR_0)
{
 struct evsel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("wrong exclude_user", !VAR_1->core.attr.exclude_user);
 FUNC_0("wrong exclude_kernel", VAR_1->core.attr.exclude_kernel);
 FUNC_0("wrong exclude_hv", VAR_1->core.attr.exclude_hv);
 FUNC_0("wrong precise_ip", !VAR_1->core.attr.precise_ip);

 return FUNC_2(VAR_0);
}
