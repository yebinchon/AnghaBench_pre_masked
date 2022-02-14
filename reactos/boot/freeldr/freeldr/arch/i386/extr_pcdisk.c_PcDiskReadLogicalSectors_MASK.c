
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int PVOID ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,...) ;
 scalar_t__ VAR_0 ;

BOOLEAN FUNC_4(UCHAR VAR_1, ULONGLONG VAR_2, ULONG VAR_3, PVOID VAR_4)
{
    BOOLEAN VAR_5;

    FUNC_3("PcDiskReadLogicalSectors() DriveNumber: 0x%x SectorNumber: %I64d SectorCount: %d Buffer: 0x%x\n",
          VAR_1, VAR_2, VAR_3, VAR_4);






    VAR_5 = FUNC_0(VAR_1);

    if ((VAR_1 >= 0x80) && VAR_5)
    {
        FUNC_3("Using Int 13 Extensions for read. DiskInt13ExtensionsSupported(%d) = %s\n", VAR_1, VAR_5 ? "TRUE" : "FALSE");


        return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    }
    else
    {

        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    }

    return VAR_0;
}
