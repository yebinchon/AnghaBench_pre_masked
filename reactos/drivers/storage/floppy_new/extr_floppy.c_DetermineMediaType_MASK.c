
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_27__ {TYPE_6__* DeviceExtension; } ;
struct TYPE_26__ {int IsDMF; } ;
struct TYPE_21__ {int LowPart; } ;
struct TYPE_25__ {int BytesPerSector; int TracksPerCylinder; int SectorsPerTrack; void* MediaType; TYPE_2__ Cylinders; } ;
struct TYPE_20__ {scalar_t__ LowPart; } ;
struct TYPE_22__ {int DriverData; TYPE_1__ PartitionLength; } ;
struct TYPE_24__ {int TimeOutValue; TYPE_3__ CommonExtension; TYPE_7__ DiskGeometry; } ;
struct TYPE_23__ {int CdbLength; int TimeOutValue; scalar_t__* Cdb; } ;
struct TYPE_19__ {int NumberOfHeads; int MaximumTrack; int SectorsPerTrack; int BytesPerSector; void* MediaType; } ;
typedef TYPE_4__* PVOID ;
typedef TYPE_4__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_6__* PFUNCTIONAL_DEVICE_EXTENSION ;
typedef TYPE_7__* PDISK_GEOMETRY ;
typedef TYPE_8__* PDISK_DATA ;
typedef TYPE_9__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef size_t LONG ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*,TYPE_4__*,TYPE_4__*,int,int ) ;
 TYPE_13__* VAR_0 ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

NTSTATUS
FUNC_8(
    PDEVICE_OBJECT VAR_10
    )
{
    PFUNCTIONAL_DEVICE_EXTENSION VAR_11 = VAR_10->DeviceExtension;
    PDISK_GEOMETRY VAR_12;
    LONG VAR_13;
    NTSTATUS VAR_14;

    FUNC_5();

    VAR_12 = &(VAR_11->DiskGeometry);






    VAR_14 = FUNC_0(VAR_10);

    if (!FUNC_4(VAR_14)) {





       VAR_12->MediaType = VAR_9;

       return VAR_14;

    }





    for (VAR_13 = VAR_2 - 1; VAR_13 >= 0; VAR_13--) {






         if ((ULONG) (VAR_0[VAR_13].NumberOfHeads *
             (VAR_0[VAR_13].MaximumTrack + 1) *
             VAR_0[VAR_13].SectorsPerTrack *
             VAR_0[VAR_13].BytesPerSector) <=
             VAR_11->CommonExtension.PartitionLength.LowPart &&
             VAR_0[VAR_13].BytesPerSector ==
             VAR_12->BytesPerSector) {

             VAR_12->MediaType = VAR_0[VAR_13].MediaType;
             VAR_12->TracksPerCylinder = VAR_0[VAR_13].NumberOfHeads;
             VAR_12->SectorsPerTrack = VAR_0[VAR_13].SectorsPerTrack;
             VAR_12->Cylinders.LowPart = VAR_0[VAR_13].MaximumTrack+1;
             break;
         }
    }

    if (VAR_13 == -1) {





        VAR_12->MediaType = VAR_9;


    } else {



        PDISK_DATA VAR_15 = (PDISK_DATA) VAR_11->CommonExtension.DriverData;







            PSCSI_REQUEST_BLOCK VAR_16;
            PVOID VAR_17;






            VAR_17 = FUNC_2(VAR_4, VAR_12->BytesPerSector);



            if (VAR_17 == ((void*)0)) {
                return VAR_7;
            }


            VAR_16 = FUNC_2(VAR_4, VAR_6);




            if (VAR_16 == ((void*)0)) {

                FUNC_3(VAR_17);
                return VAR_7;
            }

            FUNC_7(VAR_17, VAR_12->BytesPerSector);
            FUNC_7(VAR_16, VAR_6);

            VAR_16->CdbLength = 10;
            VAR_16->Cdb[0] = VAR_5;
            VAR_16->Cdb[5] = 0;
            VAR_16->Cdb[8] = (UCHAR) 1;





            VAR_16->TimeOutValue = VAR_11->TimeOutValue;





            VAR_14 = FUNC_1(VAR_10,
                      VAR_16,
                      VAR_17,
                      VAR_12->BytesPerSector,
                      VAR_1
                      );

            if (FUNC_4(VAR_14)) {
                char *VAR_18 = (char *)VAR_17;

                VAR_18 += 3;


                if (FUNC_6(VAR_18, "MSDMF3.", 7) == 7) {
                    VAR_15->IsDMF = VAR_8;
                }

            }
            FUNC_3(VAR_17);
            FUNC_3(VAR_16);

    }
    return VAR_14;
}
