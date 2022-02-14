
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_14__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {scalar_t__ Refercount; int Link; struct TYPE_13__* Next; int Flags; int * Child; int * Fcb; } ;
struct TYPE_12__ {scalar_t__ NumOfMcb; int McbLock; int McbList; } ;
typedef int * PLIST_ENTRY ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef int LONGLONG ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_13 (int *) ;
 scalar_t__ VAR_4 ;

PEXT2_MCB
FUNC_14(PEXT2_VCB VAR_5, BOOLEAN VAR_6, ULONG VAR_7)
{
    PEXT2_MCB VAR_8 = ((void*)0);
    PEXT2_MCB VAR_9 = ((void*)0);
    PEXT2_MCB VAR_10 = ((void*)0);
    PLIST_ENTRY VAR_11 = ((void*)0);
    ULONG VAR_12 = 0;
    LARGE_INTEGER VAR_13, VAR_14;

    if (!FUNC_3(&VAR_5->McbLock, VAR_6)) {
        return ((void*)0);
    }

    FUNC_12(&VAR_13);

    while (VAR_7--) {

        BOOLEAN VAR_15 = VAR_4;

        if (FUNC_9(&VAR_5->McbList)) {
            break;
        }

        while (VAR_12++ < VAR_5->NumOfMcb) {

            FUNC_12(&VAR_14);
            if (VAR_14.QuadPart > VAR_13.QuadPart + (LONGLONG)10*1000*1000) {
                break;
            }

            VAR_11 = FUNC_13(&VAR_5->McbList);
            VAR_10 = FUNC_1(VAR_11, VAR_0, VAR_2);
            FUNC_0(FUNC_8(VAR_10->Flags, VAR_3));

            if (VAR_10->Fcb == ((void*)0) && !FUNC_10(VAR_10) &&
                    VAR_10->Refercount == 0 &&
                    (VAR_10->Child == ((void*)0) || FUNC_11(VAR_10))) {

                FUNC_6(VAR_5, VAR_10);
                FUNC_2(VAR_10->Flags, VAR_3);
                FUNC_5(&VAR_5->NumOfMcb);


                if (VAR_8) {
                    FUNC_0(VAR_9 != ((void*)0));
                    VAR_9->Next = VAR_10;
                    VAR_9 = VAR_10;
                } else {
                    VAR_8 = VAR_9 = VAR_10;
                }
                VAR_9->Next = ((void*)0);
                VAR_15 = VAR_1;

            } else {

                FUNC_7(&VAR_5->McbList, &VAR_10->Link);
                VAR_10 = ((void*)0);
            }
        }

        if (VAR_15)
            break;
    }

    FUNC_4(&VAR_5->McbLock);

    return VAR_8;
}
