
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_3;
    GUID VAR_4;

    VAR_3 = FUNC_0(VAR_1, &VAR_4);
    FUNC_2(VAR_3 == VAR_0, "GetId failed: %08x\n", VAR_3);
    FUNC_2(FUNC_1(&VAR_4, &VAR_2, sizeof VAR_4) == 0, "Got incorrect GUID\n");
}
