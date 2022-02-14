
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__* Unused0; scalar_t__* Unused3; int BytesPerSector; int SectorsPerCluster; int OEMID; } ;
typedef TYPE_1__* PNTFSBootSector ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

BOOL FUNC_1(PNTFSBootSector VAR_2)
{
    ULONG VAR_3;
    ULONG VAR_4;


    if (FUNC_0(VAR_2->OEMID, "NTFS    ", 8) != 8)
    {
        return VAR_0;
    }


    for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
    {
        if (VAR_2->Unused0[VAR_3] != 0)
        {
            return VAR_0;
        }
    }


    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
    {
        if (VAR_2->Unused3[VAR_3] != 0)
        {
            return VAR_0;
        }
    }


    VAR_4 = VAR_2->BytesPerSector * VAR_2->SectorsPerCluster;
    if (VAR_4 != 512 && VAR_4 != 1024 &&
        VAR_4 != 2048 && VAR_4 != 4096 &&
        VAR_4 != 8192 && VAR_4 != 16384 &&
        VAR_4 != 32768 && VAR_4 != 65536)
    {
        return VAR_0;
    }

    return VAR_1;
}
