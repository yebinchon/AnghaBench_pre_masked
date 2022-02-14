
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleInPlaceSite ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
    IOleInPlaceSite *VAR_3 = (IOleInPlaceSite*)0xff00ff00;
    HRESULT VAR_4;

    if(!VAR_2)
        return;

    VAR_4 = FUNC_3(VAR_2, VAR_0);
    FUNC_4(VAR_4 == VAR_1, "Show failed: %08x\n", VAR_4);

    VAR_4 = FUNC_0(VAR_2, 0);
    FUNC_4(VAR_4 == VAR_1, "CloseView failed: %08x\n", VAR_4);

    VAR_4 = FUNC_2(VAR_2, ((void*)0));
    FUNC_4(VAR_4 == VAR_1, "SetInPlaceSite failed: %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    FUNC_4(VAR_4 == VAR_1, "SetInPlaceSite failed: %08x\n", VAR_4);
    FUNC_4(VAR_3 == ((void*)0), "inplacesite=%p, expected NULL\n", VAR_3);
}
