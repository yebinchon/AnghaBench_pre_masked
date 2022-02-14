
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* schunks; struct TYPE_4__* spages; scalar_t__ pagetable; } ;
typedef TYPE_1__ TIDBitmap ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(TIDBitmap *VAR_0)
{
 if (VAR_0->pagetable)
  FUNC_0(VAR_0->pagetable);
 if (VAR_0->spages)
  FUNC_1(VAR_0->spages);
 if (VAR_0->schunks)
  FUNC_1(VAR_0->schunks);
 FUNC_1(VAR_0);
}
