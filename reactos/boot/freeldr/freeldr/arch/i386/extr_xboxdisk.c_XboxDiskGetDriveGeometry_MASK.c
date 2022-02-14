
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {int LogicalCyls; int LogicalHeads; int SectorsPerTrack; int Capabilities; int BytesPerSector; } ;
struct TYPE_4__ {int Cylinders; int Heads; int Sectors; int BytesPerSector; } ;
typedef int PUCHAR ;
typedef TYPE_1__* PGEOMETRY ;
typedef TYPE_2__ IDE_DRIVE_IDENTIFY ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int ,int ,int ,int ) ;

BOOLEAN
FUNC_3(UCHAR VAR_9, PGEOMETRY VAR_10)
{
    IDE_DRIVE_IDENTIFY VAR_11;
    ULONG VAR_12;
    BOOLEAN VAR_13;

    VAR_13 = VAR_0;

    if (!FUNC_2(VAR_7,
                            VAR_8,
                            0,
                            1,
                            0,
                            0,
                            0,
                            ((VAR_9 & 0x0f) == 0 ? VAR_3 : VAR_4),
                            (VAR_13 ? VAR_1 : VAR_2),
                            (PUCHAR) &VAR_11))
    {
        FUNC_0("XboxDiskPolledRead() failed\n");
        return VAR_0;
    }

    VAR_10->Cylinders = VAR_11.LogicalCyls;
    VAR_10->Heads = VAR_11.LogicalHeads;
    VAR_10->Sectors = VAR_11.SectorsPerTrack;

    if (!VAR_13 && (VAR_11.Capabilities & VAR_5) != 0)
    {

        VAR_10->BytesPerSector = 512;
    }
    else
    {
        FUNC_1("BytesPerSector %d\n", VAR_11.BytesPerSector);
        if (VAR_11.BytesPerSector == 0)
        {
            VAR_10->BytesPerSector = 512;
        }
        else
        {
            for (VAR_12 = 1 << 15; VAR_12; VAR_12 /= 2)
            {
                if ((VAR_11.BytesPerSector & VAR_12) != 0)
                {
                    VAR_10->BytesPerSector = VAR_12;
                    break;
                }
            }
        }
    }
    FUNC_1("Cylinders %d\n", VAR_10->Cylinders);
    FUNC_1("Heads %d\n", VAR_10->Heads);
    FUNC_1("Sectors %d\n", VAR_10->Sectors);
    FUNC_1("BytesPerSector %d\n", VAR_10->BytesPerSector);

    return VAR_6;
}
