
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_2, 0);
    FUNC_0(VAR_4 == VAR_1, "CoInternetCompareUrl failed: %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, VAR_3, 0);
    FUNC_0(VAR_4 == VAR_0, "CoInternetCompareUrl failed: %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_3, VAR_2, 0);
    FUNC_0(VAR_4 == VAR_0, "CoInternetCompareUrl failed: %08x\n", VAR_4);
}
