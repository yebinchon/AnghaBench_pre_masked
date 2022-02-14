
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RFC1766TOLCIDA ;
typedef scalar_t__ LCIDTORFC1766A ;
typedef scalar_t__ ISCONVERTINETSTRINGAVAILABLE ;
typedef int HMODULE ;
typedef scalar_t__ CONVERTINETUNICODETOMULTIBYTE ;
typedef int * CONVERTINETSTRING ;
typedef scalar_t__ CONVERTINETMULTIBYTETOUNICODE ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(void)
{
    HMODULE VAR_8;
    if (VAR_1 != ((void*)0))
        return VAR_7;
    VAR_8 = FUNC_1(FUNC_2("mlang.dll"));
    if (!VAR_8)
        return VAR_3;
    VAR_1 = (CONVERTINETSTRING)FUNC_0(VAR_8, "ConvertINetString");
    VAR_0 = (CONVERTINETMULTIBYTETOUNICODE)FUNC_0(VAR_8, "ConvertINetMultiByteToUnicode");
    VAR_2 = (CONVERTINETUNICODETOMULTIBYTE)FUNC_0(VAR_8, "ConvertINetUnicodeToMultiByte");
    VAR_4 = (ISCONVERTINETSTRINGAVAILABLE)FUNC_0(VAR_8, "IsConvertINetStringAvailable");
    VAR_5 = (LCIDTORFC1766A)FUNC_0(VAR_8, "LcidToRfc1766A");
    VAR_6 = (RFC1766TOLCIDA)FUNC_0(VAR_8, "Rfc1766ToLcidA");
    return VAR_7;
}
