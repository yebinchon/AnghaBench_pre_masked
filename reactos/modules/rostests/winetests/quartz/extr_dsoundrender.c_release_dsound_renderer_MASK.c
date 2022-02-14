
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_1 == 0, "IUnknown_Release failed with %x\n", VAR_1);
}
