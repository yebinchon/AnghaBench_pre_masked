
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int d; } ;
typedef TYPE_1__* MPI ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(MPI VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->flags & 4)
  FUNC_1(VAR_0->d);
 else
  FUNC_2(VAR_0->d);

 if (VAR_0->flags & ~7)
  FUNC_3("invalid flag value in mpi\n");
 FUNC_0(VAR_0);
}
