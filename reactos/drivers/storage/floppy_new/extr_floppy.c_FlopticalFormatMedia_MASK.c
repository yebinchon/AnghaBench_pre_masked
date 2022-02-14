
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_12__ {scalar_t__ Status; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {int NumberOfHeads; int SectorsPerTrack; int BytesPerSector; } ;
struct TYPE_9__ {int EndCylinderNumber; int StartCylinderNumber; int EndHeadNumber; int StartHeadNumber; } ;
typedef int * PVOID ;
typedef int * PIRP ;
typedef TYPE_1__* PFORMAT_PARAMETERS ;
typedef TYPE_2__* PDRIVE_MEDIA_CONSTANTS ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int KEVENT ;
typedef TYPE_4__ IO_STATUS_BLOCK ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int ,int *,int,TYPE_3__*,int *,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

NTSTATUS
FUNC_9(
    PDEVICE_OBJECT VAR_11,
    PFORMAT_PARAMETERS VAR_12
    )
{
    IO_STATUS_BLOCK VAR_13;
    PIRP VAR_14;
    KEVENT VAR_15;
    LARGE_INTEGER VAR_16;
    ULONG VAR_17;
    PVOID VAR_18;
    PDRIVE_MEDIA_CONSTANTS VAR_19;
    NTSTATUS VAR_20;

    FUNC_7();

    VAR_19 = &VAR_1[VAR_0];





    VAR_17 = ((VAR_12->EndCylinderNumber - VAR_12->StartCylinderNumber) *
        VAR_19->NumberOfHeads +
        VAR_12->EndHeadNumber - VAR_12->StartHeadNumber + 1) *
        VAR_19->SectorsPerTrack *
        VAR_19->BytesPerSector;


    VAR_18 = FUNC_0(VAR_7, VAR_17);




    if (VAR_18 == ((void*)0)) {
        return(VAR_9);
    }

    FUNC_8(VAR_18, VAR_17);

    VAR_16.QuadPart =
    (VAR_12->StartCylinderNumber * VAR_19->NumberOfHeads +
    VAR_12->StartHeadNumber) * VAR_19->SectorsPerTrack *
    VAR_19->BytesPerSector;






    FUNC_4(&VAR_15, VAR_8, VAR_3);





    VAR_14 = FUNC_2(
       VAR_4,
       VAR_11,
       VAR_18,
       VAR_17,
       &VAR_16,
       &VAR_15,
       &VAR_13);

    if (VAR_14 != ((void*)0)) {
        VAR_20 = FUNC_3(VAR_11, VAR_14);

        if (VAR_20 == VAR_10) {





            FUNC_5(&VAR_15, VAR_2, VAR_5, VAR_3, ((void*)0));
        }





        if (FUNC_6(VAR_20)) {
            VAR_20 = VAR_13.Status;
        }
    } else {
       VAR_20 = VAR_9;
    }

    FUNC_1(VAR_18);

    return(VAR_20);

}
