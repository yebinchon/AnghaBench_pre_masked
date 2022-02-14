
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(IActiveScript *VAR_1)
{
    ULONG VAR_2;
    HRESULT VAR_3;

    VAR_3 = FUNC_0(VAR_1);
    FUNC_2(VAR_3 == VAR_0, "Close failed: %08x\n", VAR_3);

    VAR_2 = FUNC_1(VAR_1);
    FUNC_2(!VAR_2, "ref=%u\n", VAR_2);
}
