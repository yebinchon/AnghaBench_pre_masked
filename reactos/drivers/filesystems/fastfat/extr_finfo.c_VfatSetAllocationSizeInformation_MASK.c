
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef scalar_t__ ULONG ;
struct TYPE_33__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_41__ {TYPE_1__ u; int LowPart; int HighPart; } ;
struct TYPE_36__ {scalar_t__ FileSize; unsigned short FirstCluster; scalar_t__ FirstClusterHigh; } ;
struct TYPE_34__ {scalar_t__ FileSize; scalar_t__ FirstCluster; } ;
struct TYPE_32__ {TYPE_4__ Fat; TYPE_2__ FatX; } ;
struct TYPE_37__ {scalar_t__ LowPart; } ;
struct TYPE_38__ {TYPE_5__ u; } ;
struct TYPE_39__ {TYPE_6__ AllocationSize; } ;
struct TYPE_40__ {scalar_t__ LastCluster; scalar_t__ LastOffset; int Flags; TYPE_16__ entry; TYPE_7__ RFCB; int PathNameU; } ;
struct TYPE_35__ {scalar_t__ BytesPerCluster; scalar_t__ FatType; } ;
struct TYPE_31__ {TYPE_3__ FatInfo; } ;
struct TYPE_30__ {int SectionObjectPointer; } ;
typedef TYPE_8__* PVFATFCB ;
typedef TYPE_9__* PLARGE_INTEGER ;
typedef TYPE_10__* PFILE_OBJECT ;
typedef TYPE_11__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_11__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_9__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_11__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_7 (TYPE_11__*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (TYPE_10__*,TYPE_8__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_11__*,TYPE_8__*) ;
 int FUNC_11 (TYPE_11__*,scalar_t__,int) ;
 scalar_t__ FUNC_12 (TYPE_11__*,TYPE_16__*) ;
 int FUNC_13 (TYPE_11__*,TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_11__*) ;

NTSTATUS
FUNC_15(
    PFILE_OBJECT VAR_10,
    PVFATFCB VAR_11,
    PDEVICE_EXTENSION VAR_12,
    PLARGE_INTEGER VAR_13)
{
    ULONG VAR_14;
    ULONG VAR_15, VAR_16;
    NTSTATUS VAR_17;

    ULONG VAR_18 = VAR_12->FatInfo.BytesPerCluster;
    ULONG VAR_19 = VAR_13->u.LowPart;
    ULONG VAR_20;
    BOOLEAN VAR_21 = VAR_0, VAR_22 = FUNC_14(VAR_12);

    FUNC_1("VfatSetAllocationSizeInformation(File <%wZ>, AllocationSize %d %u)\n",
           &VAR_11->PathNameU, VAR_13->HighPart, VAR_13->LowPart);

    if (VAR_22)
        VAR_14 = VAR_11->entry.FatX.FileSize;
    else
        VAR_14 = VAR_11->entry.Fat.FileSize;

    if (VAR_13->u.HighPart > 0)
    {
        return VAR_6;
    }

    if (VAR_14 == VAR_19)
    {
        return VAR_7;
    }

    VAR_16 = FUNC_12(VAR_12, &VAR_11->entry);

    if (VAR_19 > VAR_11->RFCB.AllocationSize.u.LowPart)
    {
        VAR_21 = VAR_9;
        if (VAR_16 == 0)
        {
            VAR_11->LastCluster = VAR_11->LastOffset = 0;
            VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_16, VAR_9);
            if (!FUNC_5(VAR_17))
            {
                FUNC_2("NextCluster failed. Status = %x\n", VAR_17);
                return VAR_17;
            }

            if (VAR_16 == 0xffffffff)
            {
                return VAR_5;
            }

            VAR_17 = FUNC_7(VAR_12, VAR_16,
                                     FUNC_8(VAR_19 - 1, VAR_18),
                                     &VAR_20, VAR_9);
            if (VAR_20 == 0xffffffff || !FUNC_5(VAR_17))
            {

                VAR_20 = VAR_15 = VAR_16;
                VAR_17 = VAR_7;
                while (FUNC_5(VAR_17) && VAR_15 != 0xffffffff && VAR_15 > 1)
                {
                    VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_20, VAR_0);
                    FUNC_11(VAR_12, VAR_15, 0);
                    VAR_15 = VAR_20;
                }
                return VAR_5;
            }

            if (VAR_22)
            {
                VAR_11->entry.FatX.FirstCluster = VAR_16;
            }
            else
            {
                if (VAR_12->FatInfo.FatType == VAR_1)
                {
                    VAR_11->entry.Fat.FirstCluster = (unsigned short)(VAR_16 & 0x0000FFFF);
                    VAR_11->entry.Fat.FirstClusterHigh = VAR_16 >> 16;
                }
                else
                {
                    FUNC_0((VAR_16 >> 16) == 0);
                    VAR_11->entry.Fat.FirstCluster = (unsigned short)(VAR_16 & 0x0000FFFF);
                }
            }
        }
        else
        {
            if (VAR_11->LastCluster > 0)
            {
                if (VAR_11->RFCB.AllocationSize.u.LowPart - VAR_18 == VAR_11->LastOffset)
                {
                    VAR_15 = VAR_11->LastCluster;
                    VAR_17 = VAR_7;
                }
                else
                {
                    VAR_17 = FUNC_7(VAR_12, VAR_11->LastCluster,
                                             VAR_11->RFCB.AllocationSize.u.LowPart - VAR_18 - VAR_11->LastOffset,
                                             &VAR_15, VAR_0);
                }
            }
            else
            {
                VAR_17 = FUNC_7(VAR_12, VAR_16,
                                         VAR_11->RFCB.AllocationSize.u.LowPart - VAR_18,
                                         &VAR_15, VAR_0);
            }

            if (!FUNC_5(VAR_17))
            {
                return VAR_17;
            }

            VAR_11->LastCluster = VAR_15;
            VAR_11->LastOffset = VAR_11->RFCB.AllocationSize.u.LowPart - VAR_18;



            VAR_17 = FUNC_7(VAR_12, VAR_15,
                                     FUNC_8(VAR_19 - 1, VAR_18) - VAR_11->LastOffset,
                                     &VAR_20, VAR_9);
            if (VAR_20 == 0xffffffff || !FUNC_5(VAR_17))
            {

                VAR_20 = VAR_15;
                VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_20, VAR_0);
                FUNC_11(VAR_12, VAR_15, 0xffffffff);
                VAR_15 = VAR_20;
                while (FUNC_5(VAR_17) && VAR_15 != 0xffffffff && VAR_15 > 1)
                {
                    VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_20, VAR_0);
                    FUNC_11(VAR_12, VAR_15, 0);
                    VAR_15 = VAR_20;
                }
                return VAR_5;
            }
        }
        FUNC_9(VAR_10, VAR_11, VAR_19, VAR_18, FUNC_14(VAR_12));
    }
    else if (VAR_19 + VAR_18 <= VAR_11->RFCB.AllocationSize.u.LowPart)
    {
        FUNC_1("Check for the ability to set file size\n");
        if (!FUNC_4(VAR_10->SectionObjectPointer,
                                  (PLARGE_INTEGER)VAR_13))
        {
            FUNC_1("Couldn't set file size!\n");
            return VAR_8;
        }
        FUNC_1("Can set file size\n");

        VAR_21 = VAR_9;

        VAR_11->LastCluster = VAR_11->LastOffset = 0;
        FUNC_9(VAR_10, VAR_11, VAR_19, VAR_18, FUNC_14(VAR_12));
        if (VAR_19 > 0)
        {
            VAR_17 = FUNC_7(VAR_12, VAR_16,
                                     FUNC_8(VAR_19 - 1, VAR_18),
                                     &VAR_15, VAR_0);

            VAR_20 = VAR_15;
            VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_20, VAR_0);
            FUNC_11(VAR_12, VAR_15, 0xffffffff);
            VAR_15 = VAR_20;
        }
        else
        {
            if (VAR_22)
            {
                VAR_11->entry.FatX.FirstCluster = 0;
            }
            else
            {
                if (VAR_12->FatInfo.FatType == VAR_1)
                {
                    VAR_11->entry.Fat.FirstCluster = 0;
                    VAR_11->entry.Fat.FirstClusterHigh = 0;
                }
                else
                {
                    VAR_11->entry.Fat.FirstCluster = 0;
                }
            }

            VAR_20 = VAR_15 = VAR_16;
            VAR_17 = VAR_7;
        }

        while (FUNC_5(VAR_17) && 0xffffffff != VAR_15 && VAR_15 > 1)
        {
            VAR_17 = FUNC_6(VAR_12, VAR_16, &VAR_20, VAR_0);
            FUNC_11(VAR_12, VAR_15, 0);
            VAR_15 = VAR_20;
        }

        if (VAR_12->FatInfo.FatType == VAR_1)
        {
            FUNC_3(VAR_12);
        }
    }
    else
    {
        FUNC_9(VAR_10, VAR_11, VAR_19, VAR_18, FUNC_14(VAR_12));
    }


    VAR_11->Flags |= VAR_2;
    if (VAR_21)
    {
        FUNC_10(VAR_12, VAR_11);

        FUNC_13(VAR_12, VAR_11, VAR_4, VAR_3);
    }
    return VAR_7;
}
