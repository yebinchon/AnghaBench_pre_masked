
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ is_prop_notif; int prop_notif_cookie; int IPropertyNotifySink_iface; int document; } ;
typedef int IUnknown ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef int HRESULT ;
typedef TYPE_1__ DocHost ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *,void**) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(DocHost *VAR_2, BOOL VAR_3)
{
    IConnectionPointContainer *VAR_4;
    IConnectionPoint *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_6(VAR_2->document, &VAR_0, (void**)&VAR_4);
    if(FUNC_0(VAR_6))
        return;

    VAR_6 = FUNC_1(VAR_4, &VAR_1, &VAR_5);
    FUNC_2(VAR_4);
    if(FUNC_0(VAR_6))
        return;

    if(VAR_3)
        VAR_6 = FUNC_3(VAR_5, (IUnknown*)&VAR_2->IPropertyNotifySink_iface, &VAR_2->prop_notif_cookie);
    else
        VAR_6 = FUNC_5(VAR_5, VAR_2->prop_notif_cookie);
    FUNC_4(VAR_5);

    if(FUNC_7(VAR_6))
        VAR_2->is_prop_notif = VAR_3;
}
