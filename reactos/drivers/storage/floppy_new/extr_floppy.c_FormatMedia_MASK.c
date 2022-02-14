
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_17__ {scalar_t__ MediaType; scalar_t__ NumberOfHeads; scalar_t__ SectorsPerTrack; int MaximumTrack; int BytesPerSector; } ;
struct TYPE_16__ {int PageLength; scalar_t__ NumberOfHeads; scalar_t__ SectorsPerTrack; int* NumberOfCylinders; int* BytesPerSector; } ;
struct TYPE_15__ {int CdbLength; int* Cdb; int TimeOutValue; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_3__* PMODE_FLEXIBLE_DISK_PAGE ;
typedef TYPE_4__* PDRIVE_MEDIA_CONSTANTS ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;
typedef int MODE_PARAMETER_HEADER ;
typedef scalar_t__ MEDIA_TYPE ;
typedef size_t DRIVE_MEDIA_TYPE ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_9 (int ,int ) ;

NTSTATUS
FUNC_10(
    PDEVICE_OBJECT VAR_19,
    MEDIA_TYPE VAR_20
    )
{
    PVOID VAR_21;
    PSCSI_REQUEST_BLOCK VAR_22;
    PMODE_FLEXIBLE_DISK_PAGE VAR_23;
    DRIVE_MEDIA_TYPE VAR_24;
    PDRIVE_MEDIA_CONSTANTS VAR_25;
    ULONG VAR_26;
    NTSTATUS VAR_27;

    FUNC_6();


    VAR_21 = FUNC_3(VAR_10, VAR_4);




    if (VAR_21 == ((void*)0)) {
        return(VAR_14);
    }

    FUNC_8(VAR_21, VAR_4);

    VAR_26 = FUNC_1(VAR_19,
                            VAR_21,
                            VAR_4,
                            VAR_6);

    if (VAR_26 < sizeof(MODE_PARAMETER_HEADER)) {
        FUNC_4(VAR_21);
        return(VAR_15);
    }





    VAR_23 = FUNC_0( VAR_21, VAR_26, VAR_6, VAR_18);





    if ((VAR_23 == ((void*)0)) ||
        (VAR_23->PageLength + 2 <
         (UCHAR)FUNC_9(VAR_5, VAR_17))) {

        FUNC_4(VAR_21);
        return(VAR_15);

    }







    for (VAR_24 = VAR_0;
    VAR_2[VAR_24].MediaType != VAR_20;
    VAR_24--) {
         if (VAR_24 == VAR_1) {

             FUNC_4(VAR_21);
             return(VAR_16);

         }
    }

    VAR_25 = &VAR_2[VAR_24];

    if ((VAR_23->NumberOfHeads != VAR_25->NumberOfHeads) ||
        (VAR_23->SectorsPerTrack != VAR_25->SectorsPerTrack) ||
        ((VAR_23->NumberOfCylinders[0] != (UCHAR)((VAR_25->MaximumTrack+1) >> 8)) &&
         (VAR_23->NumberOfCylinders[1] != (UCHAR)VAR_25->MaximumTrack+1)) ||
        (VAR_23->BytesPerSector[0] != VAR_25->BytesPerSector >> 8 )) {





        VAR_23->NumberOfHeads = VAR_25->NumberOfHeads;
        VAR_23->SectorsPerTrack = VAR_25->SectorsPerTrack;
        VAR_23->NumberOfCylinders[0] = (UCHAR)((VAR_25->MaximumTrack+1) >> 8);
        VAR_23->NumberOfCylinders[1] = (UCHAR)VAR_25->MaximumTrack+1;
        VAR_23->BytesPerSector[0] = VAR_25->BytesPerSector >> 8;





        FUNC_8(VAR_21, sizeof(MODE_PARAMETER_HEADER));





        VAR_26 = VAR_23->PageLength + 2;





        FUNC_7((PCHAR) VAR_21 + sizeof(MODE_PARAMETER_HEADER),
                VAR_23,
                VAR_26
                );
            VAR_26 += sizeof(MODE_PARAMETER_HEADER);







        VAR_22 = FUNC_3(VAR_9, VAR_13);




        if (VAR_22 == ((void*)0)) {

            FUNC_4(VAR_21);
            return(VAR_14);
        }

        FUNC_8(VAR_22, VAR_13);

        VAR_22->CdbLength = 6;
        VAR_22->Cdb[0] = VAR_12;
        VAR_22->Cdb[4] = (UCHAR) VAR_26;





        VAR_22->Cdb[1] |= 0x10;





        VAR_22->TimeOutValue = 2;





        VAR_27 = FUNC_2(VAR_19,
                  VAR_22,
                  VAR_21,
                  VAR_26,
                  VAR_18
                  );





        FUNC_4(VAR_21);

        if (!FUNC_5(VAR_27)) {
            FUNC_4(VAR_22);
            return(VAR_27);
        }

    } else {





        FUNC_4(VAR_21);






        VAR_22 = FUNC_3(VAR_9, VAR_13);




        if (VAR_22 == ((void*)0)) {
            return(VAR_14);
        }

    }

    FUNC_8(VAR_22, VAR_13);

    VAR_22->CdbLength = 6;

    VAR_22->Cdb[0] = VAR_11;





    VAR_22->TimeOutValue = 10 * 60;

    VAR_27 = FUNC_2(VAR_19,
                                     VAR_22,
                                     ((void*)0),
                                     0,
                                     VAR_3
                                     );
    FUNC_4(VAR_22);

    return(VAR_27);

}
