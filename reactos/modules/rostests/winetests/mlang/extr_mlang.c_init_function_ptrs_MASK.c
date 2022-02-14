
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    HMODULE VAR_6;

    VAR_6 = FUNC_0("mlang.dll");
    VAR_1 = (void *)FUNC_1(VAR_6, "ConvertINetMultiByteToUnicode");
    VAR_2 = (void *)FUNC_1(VAR_6, "ConvertINetUnicodeToMultiByte");
    VAR_5 = (void *)FUNC_1(VAR_6, "Rfc1766ToLcidA");
    VAR_4 = (void *)FUNC_1(VAR_6, "LcidToRfc1766A");

    VAR_3 = (void *)FUNC_1(FUNC_0("kernel32.dll"), "GetCPInfoExA");

    return VAR_0;
}
