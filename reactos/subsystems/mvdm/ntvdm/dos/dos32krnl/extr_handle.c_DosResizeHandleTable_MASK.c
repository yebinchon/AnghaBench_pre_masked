
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_5__ {scalar_t__ CurrentPsp; } ;
struct TYPE_4__ {scalar_t__ HandleTableSize; void* HandleTablePtr; int HandleTable; } ;
typedef TYPE_1__* PDOS_PSP ;
typedef int LPBYTE ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int *) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

BOOLEAN FUNC_10(WORD VAR_4)
{
    PDOS_PSP VAR_5;
    LPBYTE VAR_6;
    WORD VAR_7;


    VAR_5 = FUNC_8(VAR_2->CurrentPsp);

    if (VAR_4 == VAR_5->HandleTableSize)
    {

        return VAR_3;
    }

    if (VAR_5->HandleTableSize > VAR_0)
    {

        VAR_7 = (FUNC_5(VAR_5->HandleTablePtr) >> 4) + FUNC_4(VAR_5->HandleTablePtr);

        if (VAR_4 <= VAR_0)
        {

            VAR_6 = FUNC_3(VAR_5->HandleTablePtr);


            FUNC_7(VAR_5->HandleTable, VAR_6, VAR_4);


            FUNC_1(VAR_7);


            VAR_5->HandleTableSize = VAR_4;
            VAR_5->HandleTablePtr = FUNC_6(0x18, VAR_2->CurrentPsp);
        }
        else
        {

            if (!FUNC_2(VAR_7, VAR_4, ((void*)0)))
            {

                VAR_7 = FUNC_0(VAR_4, ((void*)0));
                if (VAR_7 == 0) return VAR_1;


                VAR_6 = FUNC_9(VAR_7, 0);


                FUNC_7(VAR_6,
                              FUNC_3(VAR_5->HandleTablePtr),
                              VAR_5->HandleTableSize);


                VAR_5->HandleTablePtr = FUNC_6(0, VAR_7);
            }


            VAR_5->HandleTableSize = VAR_4;
        }
    }
    else if (VAR_4 > VAR_0)
    {
        VAR_7 = FUNC_0(VAR_4, ((void*)0));
        if (VAR_7 == 0) return VAR_1;


        VAR_6 = FUNC_9(VAR_7, 0);


        FUNC_7(VAR_6,
                      FUNC_3(VAR_5->HandleTablePtr),
                      VAR_5->HandleTableSize);


        VAR_5->HandleTableSize = VAR_4;
        VAR_5->HandleTablePtr = FUNC_6(0, VAR_7);
    }

    return VAR_3;
}
