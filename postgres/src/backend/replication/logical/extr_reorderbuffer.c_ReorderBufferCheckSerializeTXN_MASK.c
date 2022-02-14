
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nentries_mem; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_1, ReorderBufferTXN *VAR_2)
{




 if (VAR_2->nentries_mem >= VAR_0)
 {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_2->nentries_mem == 0);
 }
}
