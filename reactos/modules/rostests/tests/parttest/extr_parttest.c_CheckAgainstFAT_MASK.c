
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Signature1; int BytesPerSector; int FATCount; int Media; int SectorsPerCluster; } ;
typedef TYPE_1__* PFATBootSector ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_0(PFATBootSector VAR_2)
{
    if (VAR_2->Signature1 != 0xaa55)
    {
        return VAR_0;
    }

    if (VAR_2->BytesPerSector != 512 &&
        VAR_2->BytesPerSector != 1024 &&
        VAR_2->BytesPerSector != 2048 &&
        VAR_2->BytesPerSector != 4096)
    {
        return VAR_0;
    }

    if (VAR_2->FATCount != 1 &&
        VAR_2->FATCount != 2)
    {
        return VAR_0;
    }

    if (VAR_2->Media != 0xf0 &&
        VAR_2->Media != 0xf8 &&
        VAR_2->Media != 0xf9 &&
        VAR_2->Media != 0xfa &&
        VAR_2->Media != 0xfb &&
        VAR_2->Media != 0xfc &&
        VAR_2->Media != 0xfd &&
        VAR_2->Media != 0xfe &&
        VAR_2->Media != 0xff)
    {
        return VAR_0;
    }

    if (VAR_2->SectorsPerCluster != 1 &&
        VAR_2->SectorsPerCluster != 2 &&
        VAR_2->SectorsPerCluster != 4 &&
        VAR_2->SectorsPerCluster != 8 &&
        VAR_2->SectorsPerCluster != 16 &&
        VAR_2->SectorsPerCluster != 32 &&
        VAR_2->SectorsPerCluster != 64 &&
        VAR_2->SectorsPerCluster != 128)
    {
        return VAR_0;
    }

    if (VAR_2->BytesPerSector * VAR_2->SectorsPerCluster > 32 * 1024)
    {
        return VAR_0;
    }

    return VAR_1;
}
