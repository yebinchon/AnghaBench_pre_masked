
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_entries; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct evlist*) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_0)
{
 FUNC_0("wrong events count",
   FUNC_1() == VAR_0->core.nr_entries);

 return FUNC_2(VAR_0);
}
