
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ Port; scalar_t__ Protocol; int Address; } ;
struct TYPE_12__ {scalar_t__ Port; scalar_t__ Protocol; TYPE_1__* Next; int * Address; } ;
struct TYPE_11__ {struct TYPE_11__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int * PIP_ADDRESS ;
typedef TYPE_2__* PAF_SEARCH ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int KIRQL ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__) ;

PADDRESS_FILE FUNC_9(
    PAF_SEARCH VAR_7)
{
    PLIST_ENTRY VAR_8;
    PIP_ADDRESS VAR_9;
    KIRQL VAR_10;
    PADDRESS_FILE VAR_11 = ((void*)0);
    BOOLEAN VAR_12 = VAR_4;
    PADDRESS_FILE VAR_13;

    FUNC_6(&VAR_2, &VAR_10);

    if (VAR_7->Next == &VAR_1)
    {
        FUNC_7(&VAR_2, VAR_10);
        return ((void*)0);
    }


    VAR_13 = FUNC_2(VAR_7->Next, VAR_0, VAR_5);

    VAR_8 = VAR_7->Next;

    while (VAR_8 != &VAR_1) {
        VAR_11 = FUNC_2(VAR_8, VAR_0, VAR_5);

        VAR_9 = &VAR_11->Address;

        FUNC_5(VAR_3, ("Comparing: ((%d, %d, %s), (%d, %d, %s)).\n",
            FUNC_8(VAR_11->Port),
            VAR_11->Protocol,
            FUNC_0(VAR_9),
            FUNC_8(VAR_7->Port),
            VAR_7->Protocol,
            FUNC_0(VAR_7->Address)));


        if ((VAR_11->Port == VAR_7->Port) &&
            (VAR_11->Protocol == VAR_7->Protocol) &&
            (FUNC_1(VAR_9, VAR_7->Address))) {

            VAR_12 = VAR_6;
            break;
        }
        VAR_8 = VAR_8->Flink;
    }

    if (VAR_12)
    {
        VAR_7->Next = VAR_8->Flink;

        if (VAR_7->Next != &VAR_1)
        {

            FUNC_4(FUNC_2(VAR_7->Next, VAR_0, VAR_5));
        }



        FUNC_4(VAR_11);
    }
    else
        VAR_11 = ((void*)0);

    FUNC_3(VAR_13);

    FUNC_7(&VAR_2, VAR_10);

    return VAR_11;
}
