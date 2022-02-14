
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpu; } ;
struct mmap {TYPE_2__ core; } ;
struct TYPE_3__ {int nr_mmaps; } ;
struct evlist {struct mmap* mmap; TYPE_1__ core; } ;



__attribute__((used)) static struct mmap *FUNC_0(struct evlist *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->core.nr_mmaps; VAR_2++) {
  struct mmap *VAR_3 = &VAR_0->mmap[VAR_2];

  if (VAR_3->core.cpu == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
