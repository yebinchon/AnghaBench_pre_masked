
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_entries; int entries; } ;
struct evlist {int nr_groups; TYPE_1__ core; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct evlist *VAR_0)
{
 if (VAR_0->core.nr_entries) {
  VAR_0->nr_groups = VAR_0->core.nr_entries > 1 ? 1 : 0;
  FUNC_0(&VAR_0->core.entries);
 }
}
