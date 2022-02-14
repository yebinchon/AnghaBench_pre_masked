
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_14__ {int * DirectoryTableBase; } ;
struct TYPE_18__ {TYPE_1__ Pcb; } ;
struct TYPE_15__ {int Valid; int PageFrameNumber; } ;
struct TYPE_16__ {scalar_t__ Long; TYPE_2__ Hard; } ;
struct TYPE_17__ {TYPE_3__ u; } ;
typedef scalar_t__ PVOID ;
typedef int * PULONG ;
typedef TYPE_4__* PMMPDE ;
typedef int PFN_NUMBER ;
typedef TYPE_5__* PEPROCESS ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int *,TYPE_4__*,int *,scalar_t__,TYPE_5__*,int *,int *) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_4__*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 TYPE_5__* FUNC_15 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static PULONG
FUNC_16(PEPROCESS VAR_6, PVOID VAR_7, BOOLEAN VAR_8)
{
    PFN_NUMBER VAR_9;
    PULONG VAR_10;
    PMMPDE VAR_11;

    if (VAR_7 < VAR_3)
    {

        FUNC_0(VAR_6 != ((void*)0));

        if(VAR_6 != FUNC_15())
        {
            PMMPDE VAR_12;
            ULONG VAR_13 = FUNC_10(VAR_7);



            FUNC_0(VAR_8 == VAR_1);

            VAR_12 = FUNC_12(FUNC_14(VAR_6->Pcb.DirectoryTableBase[0]));
            if (VAR_12 == ((void*)0))
            {
                FUNC_3(VAR_2);
            }
            VAR_11 = VAR_12 + VAR_13;
            if (VAR_11->u.Hard.Valid == 0)
            {
                FUNC_13(VAR_12);
                return ((void*)0);
            }
            else
            {
                VAR_9 = VAR_11->u.Hard.PageFrameNumber;
            }
            FUNC_13(VAR_12);
            VAR_10 = FUNC_12(VAR_9);
            if (VAR_10 == ((void*)0))
            {
                FUNC_3(VAR_2);
            }
            return VAR_10 + FUNC_7(VAR_7);
        }

        VAR_11 = FUNC_5(VAR_7);
        VAR_10 = (PULONG)FUNC_6(VAR_7);
        if (VAR_11->u.Hard.Valid == 0)
        {
            NTSTATUS VAR_14;
            if (VAR_8 == VAR_1)
            {
                return ((void*)0);
            }
            FUNC_0(VAR_11->u.Long == 0);

            FUNC_4(VAR_11, VAR_0);

            VAR_14 = FUNC_8(0x1,
                                     VAR_10,
                                     VAR_11,
                                     ((void*)0),
                                     VAR_1,
                                     FUNC_15(),
                                     ((void*)0),
                                     ((void*)0));
            FUNC_1(VAR_14);
            FUNC_0(FUNC_2() == VAR_5);
            FUNC_0(VAR_11->u.Hard.Valid == 1);
        }
        return (PULONG)FUNC_6(VAR_7);
    }


    FUNC_0(VAR_6 == ((void*)0));
    VAR_11 = FUNC_5(VAR_7);
    VAR_10 = (PULONG)FUNC_6(VAR_7);
    if (VAR_11->u.Hard.Valid == 0)
    {

        if(!FUNC_11(VAR_11))
        {

            if(VAR_8 == VAR_1)
                return ((void*)0);
            FUNC_9(VAR_7, VAR_4);
        }
    }
    return VAR_10;
}
