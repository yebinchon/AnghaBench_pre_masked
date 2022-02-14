
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_3;
    LPWSTR VAR_4;

    VAR_3 = FUNC_1(VAR_2, &VAR_4);
    FUNC_3(VAR_3 == VAR_0, "GetName failed: %08x\n", VAR_3);
    FUNC_3(FUNC_2(VAR_4, VAR_1) == 0, "Got incorrect type\n");
    FUNC_0(VAR_4);
}
