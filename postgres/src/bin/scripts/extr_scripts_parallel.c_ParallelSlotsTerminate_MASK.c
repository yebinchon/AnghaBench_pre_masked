
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * connection; } ;
typedef TYPE_1__ ParallelSlot ;
typedef int PGconn ;


 int FUNC_0 (int *) ;

void
FUNC_1(ParallelSlot *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  PGconn *VAR_3 = VAR_0[VAR_2].connection;

  if (VAR_3 == ((void*)0))
   continue;

  FUNC_0(VAR_3);
 }
}
