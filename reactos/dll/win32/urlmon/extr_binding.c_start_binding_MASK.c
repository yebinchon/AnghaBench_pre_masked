
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int IInternetProtocolEx_iface; } ;
struct TYPE_9__ {scalar_t__ download_state; int bindf; int state; int notif_hwnd; int IBinding_iface; int IInternetBindInfo_iface; int IInternetProtocolSink_iface; TYPE_5__* protocol; scalar_t__ redirect_url; int callback; } ;
typedef int REFIID ;
typedef int MSG ;
typedef int IUri ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ Binding ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *,int *,int ,int ,TYPE_1__**) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *,int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,int *,int ,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__,scalar_t__,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,scalar_t__) ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (TYPE_1__*,int,int ,int ) ;
 int FUNC_13 (TYPE_5__*,int *,int *) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static HRESULT FUNC_15(IMoniker *VAR_18, Binding *VAR_19, IUri *VAR_20, IBindCtx *VAR_21,
                             BOOL VAR_22, REFIID VAR_23, Binding **VAR_24)
{
    Binding *VAR_25 = ((void*)0);
    HRESULT VAR_26;
    MSG VAR_27;

    VAR_26 = FUNC_0(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, &VAR_25);
    if(FUNC_2(VAR_26))
        return VAR_26;

    VAR_26 = FUNC_4(VAR_25->callback, 0, &VAR_25->IBinding_iface);
    if(FUNC_2(VAR_26)) {
        FUNC_11("OnStartBinding failed: %08x\n", VAR_26);
        if(VAR_26 != VAR_6 && VAR_26 != VAR_7)
            VAR_26 = VAR_10;

        FUNC_14(VAR_25, VAR_26, ((void*)0));
        FUNC_5(&VAR_25->IBinding_iface);
        return VAR_26;
    }

    if(VAR_19) {
        FUNC_13(VAR_25->protocol, &VAR_25->IInternetProtocolSink_iface,
                &VAR_25->IInternetBindInfo_iface);
        if(VAR_19->redirect_url)
            FUNC_3(VAR_25->callback, 0, 0, VAR_2, VAR_19->redirect_url);
        FUNC_12(VAR_25, VAR_3 | (VAR_19->download_state == VAR_5 ? VAR_4 : 0),
                0, 0);
    }else {
        VAR_26 = FUNC_6(&VAR_25->protocol->IInternetProtocolEx_iface, VAR_20,
                &VAR_25->IInternetProtocolSink_iface, &VAR_25->IInternetBindInfo_iface,
                VAR_11|VAR_12, 0);

        FUNC_9("start ret %08x\n", VAR_26);

        if(FUNC_2(VAR_26) && VAR_26 != VAR_8) {
            FUNC_14(VAR_25, VAR_26, ((void*)0));
            FUNC_5(&VAR_25->IBinding_iface);

            return VAR_26;
        }
    }

    while(!(VAR_25->bindf & VAR_0) &&
          !(VAR_25->state & VAR_1)) {
        FUNC_7(0, ((void*)0), VAR_9, 5000, VAR_15);
        while (FUNC_8(&VAR_27, VAR_25->notif_hwnd, VAR_17, VAR_17+117, VAR_14|VAR_13)) {
            FUNC_10(&VAR_27);
            FUNC_1(&VAR_27);
        }
    }

    *VAR_24 = VAR_25;
    return VAR_16;
}
