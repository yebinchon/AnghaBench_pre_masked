
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ropt; int * dopt; } ;
typedef int RestoreOptions ;
typedef int DumpOptions ;
typedef TYPE_1__ Archive ;


 int * FUNC_0 (int *) ;

void
FUNC_1(Archive *VAR_0, DumpOptions *VAR_1, RestoreOptions *VAR_2)
{

 if (VAR_1 == ((void*)0) && VAR_2 != ((void*)0))
  VAR_1 = FUNC_0(VAR_2);


 VAR_0->dopt = VAR_1;
 VAR_0->ropt = VAR_2;
}
