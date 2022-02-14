
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t _u8 ;
struct TYPE_4__ {scalar_t__ FreePoolIdx; int ActiveActionsBitmap; size_t PendingPoolIdx; size_t ActivePoolIdx; TYPE_1__* ObjPool; } ;
struct TYPE_3__ {scalar_t__ NextIndex; size_t ActionID; size_t AdditionalData; int SyncObj; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;

_u8 FUNC_3(_u8 VAR_3, _u8 VAR_4)
{
    _u8 VAR_5 = VAR_0;


            FUNC_0();
    if (VAR_0 > VAR_2->FreePoolIdx)
    {

        VAR_5 = VAR_2->FreePoolIdx;


        if (VAR_0 > VAR_2->ObjPool[VAR_5].NextIndex)
        {
            VAR_2->FreePoolIdx = VAR_2->ObjPool[VAR_5].NextIndex;
        }
        else

        {

            VAR_2->FreePoolIdx = VAR_0;
        }
    }
    else
    {
  FUNC_1();
        return VAR_5;
    }
    VAR_2->ObjPool[VAR_5].ActionID = (_u8)VAR_3;
    if (VAR_1 > VAR_4)
    {
        VAR_2->ObjPool[VAR_5].AdditionalData = VAR_4;
    }



 while ( ( (VAR_1 > VAR_4) && (VAR_2->ActiveActionsBitmap & (1<<VAR_4)) ) ||
            ( (VAR_2->ActiveActionsBitmap & (1<<VAR_3)) && (VAR_1 == VAR_4) ) )
    {

        VAR_2->ObjPool[VAR_5].NextIndex = VAR_2->PendingPoolIdx;
        VAR_2->PendingPoolIdx = VAR_5;
  FUNC_1();


        FUNC_2(&VAR_2->ObjPool[VAR_5].SyncObj);


        FUNC_0();
    }


    if (VAR_1 > VAR_4)
    {
        VAR_2->ActiveActionsBitmap |= (1<<VAR_4);
    }
    else
    {
        VAR_2->ActiveActionsBitmap |= (1<<VAR_3);
    }

    VAR_2->ObjPool[VAR_5].NextIndex = VAR_2->ActivePoolIdx;
    VAR_2->ActivePoolIdx = VAR_5;

 FUNC_1();
    return VAR_5;
}
