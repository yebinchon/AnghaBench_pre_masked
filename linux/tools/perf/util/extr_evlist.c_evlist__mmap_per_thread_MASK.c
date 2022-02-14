
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmap_params {int auxtrace_mp; } ;
struct TYPE_2__ {int threads; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (int *,struct evlist*,int,int) ;
 scalar_t__ FUNC_1 (struct evlist*,int,struct mmap_params*,int ,int,int*,int*) ;
 int FUNC_2 (struct evlist*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct evlist *VAR_0,
     struct mmap_params *VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_3(VAR_0->core.threads);

 FUNC_4("perf event ring buffer mmapped per thread\n");
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  int VAR_4 = -1;
  int VAR_5 = -1;

  FUNC_0(&VAR_1->auxtrace_mp, VAR_0, VAR_2,
           0);

  if (FUNC_1(VAR_0, VAR_2, VAR_1, 0, VAR_2,
      &VAR_4, &VAR_5))
   goto out_unmap;
 }

 return 0;

out_unmap:
 FUNC_2(VAR_0);
 return -1;
}
