
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_19 = FUNC_0("ntdll");
    HMODULE VAR_20 = FUNC_0("kernel32");

    VAR_8 = (void *)FUNC_1(VAR_19, "NtCreateFile");
    VAR_14 = (void *)FUNC_1(VAR_19, "RtlDosPathNameToNtPathName_U");
    VAR_13 = (void *)FUNC_1(VAR_19, "RtlAnsiStringToUnicodeString");
    VAR_16 = (void *)FUNC_1(VAR_19, "RtlInitAnsiString");
    VAR_15 = (void *)FUNC_1(VAR_19, "RtlFreeUnicodeString");

    VAR_2=(void*)FUNC_1(VAR_20, "FindFirstFileExA");
    VAR_11=(void*)FUNC_1(VAR_20, "ReplaceFileA");
    VAR_12=(void*)FUNC_1(VAR_20, "ReplaceFileW");
    VAR_6=(void*)FUNC_1(VAR_20, "GetSystemWindowsDirectoryA");
    VAR_7 = (void *) FUNC_1(VAR_20, "GetVolumeNameForVolumeMountPointA");
    VAR_10 = (void *) FUNC_1(VAR_20, "QueueUserAPC");
    VAR_3 = (void *) FUNC_1(VAR_20, "GetFileInformationByHandleEx");
    VAR_9 = (void *) FUNC_1(VAR_20, "OpenFileById");
    VAR_18 = (void *) FUNC_1(VAR_20, "SetFileValidData");
    VAR_0 = (void *) FUNC_1(VAR_20, "CopyFile2");
    VAR_1 = (void *) FUNC_1(VAR_20, "CreateFile2");
    VAR_4 = (void *) FUNC_1(VAR_20, "GetFinalPathNameByHandleA");
    VAR_5 = (void *) FUNC_1(VAR_20, "GetFinalPathNameByHandleW");
    VAR_17 = (void *) FUNC_1(VAR_20, "SetFileInformationByHandle");
}
