
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcnt; scalar_t__ base; } ;
struct mmap {TYPE_1__ core; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmap*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct mmap *VAR_0)
{
 FUNC_0(VAR_0->core.base && FUNC_3(&VAR_0->core.refcnt) == 0);

 if (FUNC_2(&VAR_0->core.refcnt))
  FUNC_1(VAR_0);
}
