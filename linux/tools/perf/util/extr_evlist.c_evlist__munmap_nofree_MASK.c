
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_mmaps; } ;
struct evlist {int * overwrite_mmap; TYPE_1__ core; int * mmap; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct evlist *VAR_0)
{
 int VAR_1;

 if (VAR_0->mmap)
  for (VAR_1 = 0; VAR_1 < VAR_0->core.nr_mmaps; VAR_1++)
   FUNC_0(&VAR_0->mmap[VAR_1]);

 if (VAR_0->overwrite_mmap)
  for (VAR_1 = 0; VAR_1 < VAR_0->core.nr_mmaps; VAR_1++)
   FUNC_0(&VAR_0->overwrite_mmap[VAR_1]);
}
