
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FiberData {size_t nPrio; size_t nRealPrio; int leQueue; scalar_t__ nBoost; int nQuantumQueued; int pFiber; scalar_t__ bExitPrev; struct FiberData* pfdPrev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct FiberData*) ;
 int VAR_1 ;
 struct FiberData* VAR_2 ;

void FUNC_3(struct FiberData * VAR_3)
{
 struct FiberData * VAR_4;

 VAR_4 = VAR_3->pfdPrev;


 if(VAR_4)
 {

  if(VAR_3->bExitPrev)
  {
   if(VAR_2 == VAR_4)
    VAR_2 = 0;

   FUNC_0(VAR_4->pFiber);
   FUNC_2(VAR_4);
  }

  else
  {

   VAR_4->nQuantumQueued = VAR_1;


   if(VAR_4->nBoost)
   {
    VAR_4->nBoost = 0;
    VAR_4->nPrio = VAR_4->nRealPrio;
   }


   FUNC_1
   (
    &VAR_0[VAR_4->nPrio],
    &VAR_4->leQueue
   );
  }
 }
}
