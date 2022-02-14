
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_5__ {int DeviceId; } ;
typedef int PVOID ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int BOOLEAN ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int ,int ,int,int*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;

BOOLEAN FUNC_3(PFAT_VOLUME_INFO VAR_4, ULONG VAR_5, ULONG VAR_6, PVOID VAR_7)
{
    LARGE_INTEGER VAR_8;
    ULONG VAR_9;
    ARC_STATUS VAR_10;







    VAR_8.QuadPart = (ULONGLONG)VAR_5 * 512;
    VAR_10 = FUNC_1(VAR_4->DeviceId, &VAR_8, VAR_2);
    if (VAR_10 != VAR_0)
    {
        FUNC_2("FatReadVolumeSectors() Failed to seek\n");
        return VAR_1;
    }




    VAR_10 = FUNC_0(VAR_4->DeviceId, VAR_7, VAR_6 * 512, &VAR_9);
    if (VAR_10 != VAR_0 || VAR_9 != VAR_6 * 512)
    {
        FUNC_2("FatReadVolumeSectors() Failed to read\n");
        return VAR_1;
    }


    return VAR_3;
}
