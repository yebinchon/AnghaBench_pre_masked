
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int refcnt; int prev; int overwrite; } ;
struct mmap {TYPE_1__ core; } ;


 scalar_t__ FUNC_0 (struct mmap*) ;
 int FUNC_1 (struct mmap*) ;
 int FUNC_2 (struct mmap*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mmap *VAR_0)
{
 if (!VAR_0->core.overwrite) {
  u64 VAR_1 = VAR_0->core.prev;

  FUNC_2(VAR_0, VAR_1);
 }

 if (FUNC_3(&VAR_0->core.refcnt) == 1 && FUNC_0(VAR_0))
  FUNC_1(VAR_0);
}
