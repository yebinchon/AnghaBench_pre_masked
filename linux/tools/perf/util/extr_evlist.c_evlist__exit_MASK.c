
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pollfd; } ;
struct evlist {TYPE_1__ core; int overwrite_mmap; int mmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct evlist *VAR_0)
{
 FUNC_1(&VAR_0->mmap);
 FUNC_1(&VAR_0->overwrite_mmap);
 FUNC_0(&VAR_0->core.pollfd);
}
