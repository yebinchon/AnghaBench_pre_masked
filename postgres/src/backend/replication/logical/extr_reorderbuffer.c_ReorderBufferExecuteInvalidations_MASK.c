
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ninvalidations; int * invalidations; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(ReorderBuffer *VAR_0, ReorderBufferTXN *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ninvalidations; VAR_2++)
  FUNC_0(&VAR_1->invalidations[VAR_2]);
}
