
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t _u8 ;
struct TYPE_4__ {size_t PendingPoolIdx; int ActiveActionsBitmap; size_t ActivePoolIdx; size_t FreePoolIdx; TYPE_1__* ObjPool; } ;
struct TYPE_3__ {scalar_t__ ActionID; int AdditionalData; size_t NextIndex; int * pRespArgs; int SyncObj; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t*,size_t) ;
 TYPE_2__* VAR_3 ;

void FUNC_4(_u8 VAR_4)
{

    _u8 VAR_5;


     FUNC_0();




 VAR_5 = VAR_3->PendingPoolIdx;

 while(VAR_1 > VAR_5)
 {

  if ( (VAR_3->ObjPool[VAR_5].ActionID == VAR_3->ObjPool[VAR_4].ActionID) &&
   ( (VAR_2 == (VAR_3->ObjPool[VAR_5].AdditionalData & VAR_0)) ||
   ((VAR_2 > (VAR_3->ObjPool[VAR_4].AdditionalData & VAR_0)) && ( (VAR_3->ObjPool[VAR_5].AdditionalData & VAR_0) == (VAR_3->ObjPool[VAR_4].AdditionalData & VAR_0) ))) )
  {

   FUNC_3(&VAR_3->PendingPoolIdx, VAR_5);
    FUNC_2(&VAR_3->ObjPool[VAR_5].SyncObj);
    break;
  }
  VAR_5 = VAR_3->ObjPool[VAR_5].NextIndex;
 }


  if (VAR_2 > (VAR_3->ObjPool[VAR_4].AdditionalData & VAR_0))
  {

   VAR_3->ActiveActionsBitmap &= ~(1<<(VAR_3->ObjPool[VAR_4].AdditionalData & VAR_0));
  }
  else
  {

   VAR_3->ActiveActionsBitmap &= ~(1<<VAR_3->ObjPool[VAR_4].ActionID);
  }


    VAR_3->ObjPool[VAR_4].pRespArgs = ((void*)0);
    VAR_3->ObjPool[VAR_4].ActionID = 0;
    VAR_3->ObjPool[VAR_4].AdditionalData = VAR_2;


    FUNC_3(&VAR_3->ActivePoolIdx, VAR_4);

    VAR_3->ObjPool[VAR_4].NextIndex = VAR_3->FreePoolIdx;
    VAR_3->FreePoolIdx = VAR_4;
 FUNC_1();
}
