
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
    VAR_0 = FUNC_1("advpack.dll");

    if (VAR_0)
    {
        VAR_1 = (void *)FUNC_0(VAR_0, "AddDelBackupEntry");
        VAR_3 = (void *)FUNC_0(VAR_0, "ExtractFiles");
        VAR_4 = (void *)FUNC_0(VAR_0, "ExtractFilesW");
        VAR_2 = (void*)FUNC_0(VAR_0, "AdvInstallFile");
    }
}
