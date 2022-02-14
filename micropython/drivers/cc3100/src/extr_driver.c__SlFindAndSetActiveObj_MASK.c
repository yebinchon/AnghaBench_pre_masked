
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t _u8 ;
typedef int _SlReturnVal_t ;
typedef scalar_t__ _SlOpcode_t ;
struct TYPE_10__ {scalar_t__ ActionAsyncOpcode; int AsyncEventHandler; } ;
struct TYPE_6__ {size_t ActionIndex; int AsyncEvtHandler; } ;
struct TYPE_7__ {TYPE_1__ AsyncExt; } ;
struct TYPE_9__ {size_t ActivePoolIdx; TYPE_3__* ObjPool; TYPE_2__ FunctionParams; } ;
struct TYPE_8__ {int AdditionalData; scalar_t__ ActionID; size_t NextIndex; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* VAR_12 ;
 TYPE_4__* VAR_13 ;

_SlReturnVal_t FUNC_0(_SlOpcode_t VAR_14, _u8 VAR_15)
{
    _u8 VAR_16;

    VAR_16 = VAR_13->ActivePoolIdx;


  while (VAR_1 > VAR_16)




    {

        if (VAR_13->ObjPool[VAR_16].AdditionalData & VAR_5)
        {
            VAR_14 &= ~VAR_6;
        }

        if ((VAR_13->ObjPool[VAR_16].ActionID == VAR_3) && (VAR_15 == VAR_13->ObjPool[VAR_16].AdditionalData) &&
      ( (VAR_7 == VAR_14) || (VAR_8 == VAR_14)

                        || (VAR_9 == VAR_14)

                          )

               )
        {
            VAR_13->FunctionParams.AsyncExt.ActionIndex = VAR_16;
            return VAR_10;
        }

        if ( (VAR_12[ VAR_13->ObjPool[VAR_16].ActionID - VAR_2].ActionAsyncOpcode == VAR_14) &&
            ( ((VAR_15 == (VAR_13->ObjPool[VAR_16].AdditionalData & VAR_0) ) && (VAR_4 > VAR_15)) || (VAR_4 == (VAR_13->ObjPool[VAR_16].AdditionalData & VAR_0)) ) )
        {

            VAR_13->FunctionParams.AsyncExt.AsyncEvtHandler = VAR_12[ VAR_13->ObjPool[VAR_16].ActionID - VAR_2].AsyncEventHandler;
            VAR_13->FunctionParams.AsyncExt.ActionIndex = VAR_16;
            return VAR_10;
        }
        VAR_16 = VAR_13->ObjPool[VAR_16].NextIndex;
    }

    return VAR_11;



}
