
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ depCount; struct TYPE_6__* pending_next; } ;
typedef TYPE_1__ TocEntry ;
typedef scalar_t__ RestorePass ;
typedef int ParallelReadyList ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(TocEntry *VAR_0,
       ParallelReadyList *VAR_1,
       RestorePass VAR_2)
{
 TocEntry *VAR_3;
 TocEntry *VAR_4;

 for (VAR_3 = VAR_0->pending_next; VAR_3 != VAR_0; VAR_3 = VAR_4)
 {

  VAR_4 = VAR_3->pending_next;

  if (VAR_3->depCount == 0 &&
   FUNC_0(VAR_3) == VAR_2)
  {

   FUNC_1(VAR_3);

   FUNC_2(VAR_1, VAR_3);
  }
 }
}
