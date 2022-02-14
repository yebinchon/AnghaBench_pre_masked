
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {int * FreeCredentialsHandle; scalar_t__ Initialize; } ;
typedef TYPE_1__* PSECPKG_FUNCTION_TABLE ;
typedef scalar_t__ PBYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static PSECPKG_FUNCTION_TABLE FUNC_3(PSECPKG_FUNCTION_TABLE VAR_15,
                                                 ULONG VAR_16)
{
    size_t VAR_17;
    PSECPKG_FUNCTION_TABLE VAR_18;

    if (VAR_16 == VAR_8)
        VAR_17 = VAR_1;
    else if (VAR_16 == VAR_9)
        VAR_17 = VAR_2;
    else if (VAR_16 == VAR_10)
        VAR_17 = VAR_3;
    else if (VAR_16 == VAR_11)
        VAR_17 = VAR_4;
    else if (VAR_16 == VAR_12)
        VAR_17 = VAR_5;
    else if (VAR_16 == VAR_13)
        VAR_17 = VAR_6;
    else if (VAR_16 == VAR_14)
        VAR_17 = VAR_7;
    else {
        FUNC_1(VAR_0, "Unknown package version 0x%x\n", VAR_16);
        return ((void*)0);
    }

    VAR_18 = (PSECPKG_FUNCTION_TABLE)((PBYTE)VAR_15 + VAR_17);






    if (FUNC_0((void *) VAR_15->Initialize == (void *) VAR_18->FreeCredentialsHandle &&
               VAR_18->FreeCredentialsHandle != ((void*)0)))
    {
        FUNC_2("Invalid function pointers for next package\n");
        return ((void*)0);
    }

    return VAR_18;
}
