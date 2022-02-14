
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; int overwrite; int refcnt; } ;
struct mmap {TYPE_2__ core; } ;
struct TYPE_3__ {int nr_mmaps; int threads; int cpus; } ;
struct evlist {TYPE_1__ core; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 struct mmap* FUNC_4 (int) ;

__attribute__((used)) static struct mmap *FUNC_5(struct evlist *VAR_0,
           bool VAR_1)
{
 int VAR_2;
 struct mmap *VAR_3;

 VAR_0->core.nr_mmaps = FUNC_1(VAR_0->core.cpus);
 if (FUNC_0(VAR_0->core.cpus))
  VAR_0->core.nr_mmaps = FUNC_2(VAR_0->core.threads);
 VAR_3 = FUNC_4(VAR_0->core.nr_mmaps * sizeof(struct mmap));
 if (!VAR_3)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->core.nr_mmaps; VAR_2++) {
  VAR_3[VAR_2].core.fd = -1;
  VAR_3[VAR_2].core.overwrite = VAR_1;
  FUNC_3(&VAR_3[VAR_2].core.refcnt, 0);
 }
 return VAR_3;
}
