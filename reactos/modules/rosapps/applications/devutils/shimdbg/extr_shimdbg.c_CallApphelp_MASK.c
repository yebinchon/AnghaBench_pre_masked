
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PAPPHELP_CACHE_SERVICE_LOOKUP ;
typedef scalar_t__ NTSTATUS ;
typedef int APPHELPCACHESERVICECLASS ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned int) ;

void FUNC_2(APPHELPCACHESERVICECLASS VAR_0,
                PAPPHELP_CACHE_SERVICE_LOOKUP VAR_1)
{
    NTSTATUS VAR_2 = FUNC_0(VAR_0, VAR_1);
    FUNC_1("NtApphelpCacheControl returned 0x%x\n", (unsigned int)VAR_2);
}
