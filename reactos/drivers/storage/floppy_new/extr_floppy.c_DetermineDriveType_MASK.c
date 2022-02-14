
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_17__ {scalar_t__ NumberOfHeads; int MaximumTrack; scalar_t__ SectorsPerTrack; } ;
struct TYPE_16__ {size_t HighestDriveMediaType; } ;
struct TYPE_15__ {TYPE_3__* DeviceExtension; } ;
struct TYPE_14__ {scalar_t__ DriveType; } ;
struct TYPE_11__ {int DriverData; } ;
struct TYPE_13__ {TYPE_1__ CommonExtension; } ;
struct TYPE_12__ {scalar_t__ PageLength; scalar_t__ NumberOfHeads; int* NumberOfCylinders; scalar_t__ SectorsPerTrack; } ;
typedef int * PVOID ;
typedef TYPE_2__* PMODE_FLEXIBLE_DISK_PAGE ;
typedef TYPE_3__* PFUNCTIONAL_DEVICE_EXTENSION ;
typedef TYPE_4__* PDISK_DATA ;
typedef TYPE_5__* PDEVICE_OBJECT ;
typedef int MODE_PARAMETER_HEADER ;
typedef size_t LONG ;
typedef int BOOLEAN ;


 TYPE_2__* FUNC_0 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_7__* VAR_1 ;
 TYPE_6__* VAR_2 ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int ,int ) ;

ULONG
FUNC_7(
    PDEVICE_OBJECT VAR_13
    )
{
    PFUNCTIONAL_DEVICE_EXTENSION VAR_14 = VAR_13->DeviceExtension;
    PVOID VAR_15;
    PDISK_DATA VAR_16 = (PDISK_DATA) VAR_14->CommonExtension.DriverData;
    PMODE_FLEXIBLE_DISK_PAGE VAR_17;
    ULONG VAR_18;
    LONG VAR_19;
    UCHAR VAR_20;
    UCHAR VAR_21;
    USHORT VAR_22;
    BOOLEAN VAR_23 = VAR_3;

    FUNC_4();

    if (VAR_16->DriveType != VAR_0) {
        return(VAR_16->DriveType);
    }


    VAR_15 = FUNC_2(VAR_10, VAR_4);




    if (VAR_15 == ((void*)0)) {
        return(VAR_0);
    }

    FUNC_5(VAR_15, VAR_4);

    VAR_18 = FUNC_1(VAR_13,
                            VAR_15,
                            VAR_4,
                            VAR_6);

    if (VAR_18 < sizeof(MODE_PARAMETER_HEADER)) {





        VAR_18 = FUNC_1(VAR_13,
                                VAR_15,
                                VAR_4,
                                VAR_6);

        if (VAR_18 < sizeof(MODE_PARAMETER_HEADER)) {

            FUNC_3(VAR_15);
            return(VAR_0);
        }
    }





    VAR_17 = FUNC_0( VAR_15,
                                  VAR_18,
                                  VAR_6,
                                  VAR_12);





    if ((VAR_17 != ((void*)0)) &&
        (VAR_17->PageLength + 2 >=
         (UCHAR)FUNC_6(VAR_5, VAR_11))) {





       VAR_20 = VAR_17->NumberOfHeads;
       VAR_22 = VAR_17->NumberOfCylinders[1];
       VAR_22 |= VAR_17->NumberOfCylinders[0] << 8;
       VAR_21 = VAR_17->SectorsPerTrack;






       VAR_22--;





       for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {






            if (VAR_1[VAR_19].NumberOfHeads == VAR_20 &&
                VAR_1[VAR_19].MaximumTrack == VAR_22 &&
                VAR_1[VAR_19].SectorsPerTrack ==VAR_21) {

                FUNC_3(VAR_15);






                for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {

                    if (VAR_2[VAR_18].HighestDriveMediaType == VAR_19) {
                        return(VAR_18);
                    }
                }
                return(VAR_0);
           }
       }






       if (!VAR_23 && VAR_22 >= 0x0100) {
           VAR_22++;
           VAR_22 /= 3;
           VAR_22--;
           VAR_20 *= 3;
       } else {
           FUNC_3(VAR_15);
           return(VAR_0);
       }

    }

    FUNC_3(VAR_15);
    return(VAR_0);
}
