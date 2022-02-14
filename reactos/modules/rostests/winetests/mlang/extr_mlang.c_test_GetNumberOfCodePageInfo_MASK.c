
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IMultiLanguage2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(IMultiLanguage2 *VAR_2)
{
    HRESULT VAR_3;
    UINT VAR_4;

    VAR_4 = 0xdeadbeef;
    VAR_3 = FUNC_0(VAR_2, &VAR_4);
    FUNC_1( (VAR_3 == VAR_1) && VAR_4,
        "got 0x%x with %d (expected S_OK with '!= 0')\n", VAR_3, VAR_4);

    VAR_3 = FUNC_0(VAR_2, ((void*)0));
    FUNC_1(VAR_3 == VAR_0, "got 0x%x (expected E_INVALIDARG)\n", VAR_3);

}
