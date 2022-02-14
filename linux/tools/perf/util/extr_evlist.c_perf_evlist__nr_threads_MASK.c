
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ system_wide; } ;
struct evsel {TYPE_1__ core; } ;
struct TYPE_4__ {int threads; } ;
struct evlist {TYPE_2__ core; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct evlist *VAR_0,
       struct evsel *VAR_1)
{
 if (VAR_1->core.system_wide)
  return 1;
 else
  return FUNC_0(VAR_0->core.threads);
}
