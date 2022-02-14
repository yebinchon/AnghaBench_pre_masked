
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_4__ {int TXStart; int TXCount; size_t TXNext; int * TXSize; int TXQueueHead; } ;
typedef int PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int PNDIS_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int *,int *,int *,int *) ;

__attribute__((used)) static VOID FUNC_5(
    PNIC_ADAPTER VAR_3)
{
    PNDIS_BUFFER VAR_4;
    UINT VAR_5, VAR_6, VAR_7;
    PUCHAR VAR_8;
    ULONG VAR_9;
    UINT VAR_10;
    UINT VAR_11;

    FUNC_0(VAR_1, ("Called.\n"));

    VAR_10 = VAR_3->TXStart * VAR_0;
    VAR_11 = (VAR_3->TXStart + VAR_3->TXCount) * VAR_0;

    FUNC_4(VAR_3->TXQueueHead,
                    ((void*)0),
                    ((void*)0),
                    &VAR_4,
                    &VAR_3->TXSize[VAR_3->TXNext]);

    FUNC_0(VAR_2, ("Packet (%d) is now size (%d).\n",
        VAR_3->TXNext,
        VAR_3->TXSize[VAR_3->TXNext]));

    FUNC_3(VAR_4, (PVOID)&VAR_8, &VAR_6);

    VAR_9 = VAR_10 + VAR_3->TXNext * VAR_0;
    VAR_7 = VAR_11 - VAR_9;


    for (;;) {
        VAR_5 = (VAR_6 < VAR_7)? VAR_6 : VAR_7;

        FUNC_1(VAR_3, VAR_9, VAR_8, VAR_5);

        VAR_8 = (PUCHAR)((ULONG_PTR) VAR_8 + VAR_5);
        VAR_6 -= VAR_5;
        VAR_9 += VAR_5;
        VAR_7 -= VAR_5;

        if (VAR_6 == 0) {


            FUNC_2(VAR_4, &VAR_4);
            if (!VAR_4)
                break;

            FUNC_3(VAR_4, (PVOID)&VAR_8, &VAR_6);
        }

        if (VAR_7 == 0) {

            VAR_9 = VAR_10;
            VAR_7 = VAR_3->TXCount * VAR_0;
        }
    }
}
