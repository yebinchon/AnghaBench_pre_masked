
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 () ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    IActiveScript *VAR_2;
    ULONG VAR_3;
    HRESULT VAR_4;

    VAR_2 = FUNC_2();

    VAR_4 = FUNC_1(VAR_2, VAR_0);
    FUNC_3(VAR_4 == VAR_1, "SetScriptState(SCRIPTSTATE_UNINITIALIZED) failed: %08x\n", VAR_4);

    VAR_3 = FUNC_0(VAR_2);
    FUNC_3(!VAR_3, "ref = %d\n", VAR_3);
}
