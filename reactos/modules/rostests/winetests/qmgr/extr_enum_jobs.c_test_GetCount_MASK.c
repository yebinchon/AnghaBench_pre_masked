
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_3;
    ULONG VAR_4, VAR_5;

    VAR_3 = FUNC_0(VAR_1, &VAR_4);
    FUNC_1(VAR_3 == VAR_0, "GetCount failed: %08x\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, &VAR_5);
    FUNC_1(VAR_3 == VAR_0, "GetCount failed: %08x\n", VAR_3);

    FUNC_1(VAR_5 == VAR_4 + 1, "Got incorrect count\n");
}
