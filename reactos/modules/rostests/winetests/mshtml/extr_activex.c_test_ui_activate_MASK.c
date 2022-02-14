
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleInPlaceSite ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,void**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    IOleInPlaceSite *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_5(VAR_5 == VAR_2, "Could not get IOleInPlaceSite iface: %08x\n", VAR_5);

    FUNC_4(VAR_1);
    VAR_5 = FUNC_2(VAR_4);
    FUNC_5(VAR_5 == VAR_2, "OnUIActivate failed: %08x\n", VAR_5);
    FUNC_0(VAR_1);

    FUNC_3(VAR_4);
}
