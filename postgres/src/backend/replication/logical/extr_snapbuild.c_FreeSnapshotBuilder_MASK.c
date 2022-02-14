
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * snapshot; int context; } ;
typedef TYPE_1__ SnapBuild ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(SnapBuild *VAR_0)
{
 MemoryContext VAR_1 = VAR_0->context;


 if (VAR_0->snapshot != ((void*)0))
 {
  FUNC_1(VAR_0->snapshot);
  VAR_0->snapshot = ((void*)0);
 }


 FUNC_0(VAR_1);
}
