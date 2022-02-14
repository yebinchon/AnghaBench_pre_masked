
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isFree; int * connection; } ;
typedef TYPE_1__ ParallelSlot ;
typedef int PGconn ;



__attribute__((used)) static void
FUNC_0(ParallelSlot *VAR_0, PGconn *VAR_1)
{
 VAR_0->connection = VAR_1;

 VAR_0->isFree = 1;
}
