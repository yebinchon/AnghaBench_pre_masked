
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int * HMODULE ;
typedef int ExtendedProxyFileInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int const**,int *) ;
 scalar_t__ FUNC_2 (int *,int const**,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int const** VAR_4 ;
 int const** VAR_5 ;

__attribute__((used)) static void FUNC_4( void )
{
    HRESULT VAR_6;
    const ExtendedProxyFileInfo *VAR_7;
    HMODULE VAR_8 = FUNC_0(((void*)0));


    VAR_6 = FUNC_1(((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_6 == VAR_1, "Incorrect return code %x\n",VAR_6);
    VAR_7 = ((void*)0);
    VAR_6 = FUNC_1(VAR_8, &VAR_7, ((void*)0));
    FUNC_3(VAR_6 == VAR_2, "Incorrect return code %x\n",VAR_6);
    VAR_6 = FUNC_1(VAR_8, VAR_5, ((void*)0));
    FUNC_3(VAR_6 == VAR_2, "Incorrect return code %x\n",VAR_6);

    VAR_6 = FUNC_1(VAR_8, VAR_4, ((void*)0));
    FUNC_3(VAR_6 == VAR_3 || VAR_6 == VAR_0, "NdrDllRegisterProxy failed %x\n",VAR_6);
    if (VAR_6 == VAR_3)
    {
        VAR_6 = FUNC_2(VAR_8,VAR_4, ((void*)0));
        FUNC_3(VAR_6 == VAR_3, "NdrDllUnregisterProxy failed %x\n",VAR_6);
    }
}
