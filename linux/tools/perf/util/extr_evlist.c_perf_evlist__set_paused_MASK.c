
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_mmaps; } ;
struct evlist {TYPE_3__* overwrite_mmap; TYPE_1__ core; } ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_2__ core; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct evlist *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (!VAR_1->overwrite_mmap)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->core.nr_mmaps; VAR_3++) {
  int VAR_4 = VAR_1->overwrite_mmap[VAR_3].core.fd;
  int VAR_5;

  if (VAR_4 < 0)
   continue;
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_2 ? 1 : 0);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
