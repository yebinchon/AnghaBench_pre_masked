
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int rootStart; int BytesPerCluster; int SectorsPerCluster; } ;
struct TYPE_7__ {TYPE_1__ FatInfo; } ;
typedef int* PULONG ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int,int*) ;
 int FUNC_3 (TYPE_2__*,int,int*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

NTSTATUS
FUNC_5(
    PDEVICE_EXTENSION VAR_2,
    ULONG VAR_3,
    ULONG VAR_4,
    PULONG VAR_5,
    BOOLEAN VAR_6)
{
    ULONG VAR_7;
    ULONG VAR_8;
    NTSTATUS VAR_9;





    if (VAR_3 == 0)
    {
        FUNC_1("OffsetToCluster is called with FirstCluster = 0!\n");
        FUNC_0(VAR_0);
    }

    if (VAR_3 == 1)
    {

        *VAR_5 = VAR_2->FatInfo.rootStart + VAR_4
            / (VAR_2->FatInfo.BytesPerCluster) * VAR_2->FatInfo.SectorsPerCluster;
        return VAR_1;
    }
    else
    {
        VAR_7 = VAR_3;
        if (VAR_6)
        {
            for (VAR_8 = 0; VAR_8 < VAR_4 / VAR_2->FatInfo.BytesPerCluster; VAR_8++)
            {
                VAR_9 = FUNC_3 (VAR_2, VAR_7, &VAR_7);
                if (!FUNC_4(VAR_9))
                    return VAR_9;
            }
            *VAR_5 = VAR_7;
        }
        else
        {
            for (VAR_8 = 0; VAR_8 < VAR_4 / VAR_2->FatInfo.BytesPerCluster; VAR_8++)
            {
                VAR_9 = FUNC_2 (VAR_2, VAR_7, &VAR_7);
                if (!FUNC_4(VAR_9))
                    return VAR_9;
            }
            *VAR_5 = VAR_7;
       }
       return VAR_1;
   }
}
