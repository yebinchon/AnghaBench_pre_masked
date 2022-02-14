
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int READYSTATE ;
typedef int IPropertyNotifySink ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(READYSTATE VAR_5)
{
    IPropertyNotifySink *VAR_6;
    HRESULT VAR_7;

    VAR_4 = VAR_5;

    VAR_7 = FUNC_0(VAR_3, &VAR_1, (void**)&VAR_6);
    FUNC_3(VAR_7 == VAR_2, "Could not get IPropertyNotifySink iface: %08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_6, VAR_0);
    FUNC_3(VAR_7 == VAR_2, "OnChanged(DISPID_READYSTATE) failed: %08x\n", VAR_7);

    FUNC_2(VAR_6);
}
