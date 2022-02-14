
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_members; } ;
struct evsel {TYPE_1__ core; } ;
struct TYPE_4__ {int event_group; } ;


 scalar_t__ FUNC_0 (struct evsel*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(struct evsel *VAR_1)
{
 if (!VAR_0.event_group)
  return 0;

 return FUNC_0(VAR_1) && VAR_1->core.nr_members > 1;
}
