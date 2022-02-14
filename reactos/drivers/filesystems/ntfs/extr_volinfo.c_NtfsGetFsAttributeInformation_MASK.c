
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FileSystemAttributes; int MaximumComponentNameLength; int FileSystemNameLength; int FileSystemName; } ;
typedef int* PULONG ;
typedef TYPE_1__* PFILE_FS_ATTRIBUTE_INFORMATION ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_FS_ATTRIBUTE_INFORMATION ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static
NTSTATUS
FUNC_3(PDEVICE_EXTENSION VAR_6,
                              PFILE_FS_ATTRIBUTE_INFORMATION VAR_7,
                              PULONG VAR_8)
{
    FUNC_1(VAR_6);

    FUNC_0("NtfsGetFsAttributeInformation()\n");
    FUNC_0("FsAttributeInfo = %p\n", VAR_7);
    FUNC_0("BufferLength %lu\n", *VAR_8);
    FUNC_0("Required length %lu\n", (sizeof(FILE_FS_ATTRIBUTE_INFORMATION) + 8));

    if (*VAR_8 < sizeof (FILE_FS_ATTRIBUTE_INFORMATION))
        return VAR_4;

    if (*VAR_8 < (sizeof(FILE_FS_ATTRIBUTE_INFORMATION) + 8))
        return VAR_3;

    VAR_7->FileSystemAttributes =
        VAR_0 | VAR_2 | VAR_1;
    VAR_7->MaximumComponentNameLength = 255;
    VAR_7->FileSystemNameLength = 8;

    FUNC_2(VAR_7->FileSystemName, L"NTFS", 8);

    FUNC_0("Finished NtfsGetFsAttributeInformation()\n");

    *VAR_8 -= (sizeof(FILE_FS_ATTRIBUTE_INFORMATION) + 8);
    FUNC_0("BufferLength %lu\n", *VAR_8);

    return VAR_5;
}
