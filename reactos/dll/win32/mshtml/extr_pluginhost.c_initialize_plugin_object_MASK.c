
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int control ;
typedef int container ;
struct TYPE_11__ {int plugin_unk; int * disp; int IAdviseSinkEx_iface; int IOleClientSite_iface; int IPropertyNotifySink_iface; } ;
struct TYPE_10__ {int member_0; int dwAmbientFlags; int * pPropertyNotifySink; int * pAdviseSink; int * pClientSite; } ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ QACONTROL ;
typedef TYPE_2__ QACONTAINER ;
typedef TYPE_3__ PluginHost ;
typedef int IViewObjectEx ;
typedef int IQuickActivate ;
typedef int IOleObject ;
typedef int IOleCommandTarget ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int IClientSecurity ;
typedef int IAdviseSink ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,void**) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_18(PluginHost *VAR_11)
{
    IClientSecurity *VAR_12;
    IQuickActivate *VAR_13;
    IOleObject *VAR_14 = ((void*)0);
    IOleCommandTarget *VAR_15;
    IViewObjectEx *VAR_16;
    IDispatchEx *VAR_17;
    IDispatch *VAR_18;
    HRESULT VAR_19;





    VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_1, (void**)&VAR_12);
    if(FUNC_13(VAR_19)) {
        FUNC_1("Handle IClientSecurity\n");
        FUNC_2(VAR_12);
        return;
    }

    VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_6, (void**)&VAR_13);
    if(FUNC_13(VAR_19)) {
        QACONTAINER VAR_20 = {sizeof(VAR_20)};
        QACONTROL VAR_21 = {sizeof(VAR_21)};

        FUNC_14("Using IQuickActivate\n");

        VAR_20.pClientSite = &VAR_11->IOleClientSite_iface;
        VAR_20.dwAmbientFlags = VAR_9|VAR_8|VAR_10;
        VAR_20.pAdviseSink = &VAR_11->IAdviseSinkEx_iface;
        VAR_20.pPropertyNotifySink = &VAR_11->IPropertyNotifySink_iface;

        VAR_19 = FUNC_7(VAR_13, &VAR_20, &VAR_21);
        FUNC_8(VAR_13);
        if(FUNC_0(VAR_19))
            FUNC_1("QuickActivate failed: %08x\n", VAR_19);
    }else {
        DWORD VAR_22 = 0;

        VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_5, (void**)&VAR_14);
        if(FUNC_13(VAR_19)) {
            VAR_19 = FUNC_4(VAR_14, VAR_0, &VAR_22);
            FUNC_14("GetMiscStatus returned %08x %x\n", VAR_19, VAR_22);

            VAR_19 = FUNC_6(VAR_14, &VAR_11->IOleClientSite_iface);
            FUNC_5(VAR_14);
            if(FUNC_0(VAR_19)) {
                FUNC_1("SetClientSite failed: %08x\n", VAR_19);
                return;
            }
        }else {
            FUNC_14("Plugin does not support IOleObject\n");
        }
    }

    FUNC_16(VAR_11);

    if(VAR_14) {
        VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_7, (void**)&VAR_16);
        if(FUNC_13(VAR_19)) {
            DWORD VAR_23 = 0;

            VAR_19 = FUNC_12(VAR_16, VAR_0, 0, (IAdviseSink*)&VAR_11->IAdviseSinkEx_iface);
            if(FUNC_0(VAR_19))
                FUNC_15("SetAdvise failed: %08x\n", VAR_19);

            VAR_19 = FUNC_10(VAR_16, &VAR_23);
            FUNC_11(VAR_16);
            FUNC_14("GetViewStatus returned %08x %x\n", VAR_19, VAR_23);
        }
    }

    FUNC_17(VAR_11);



    VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_3, (void**)&VAR_17);
    if(FUNC_13(VAR_19)) {
        FUNC_1("Use IDispatchEx\n");
        VAR_11->disp = (IDispatch*)VAR_17;
    }else {
        VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_2, (void**)&VAR_18);
        if(FUNC_13(VAR_19))
            VAR_11->disp = VAR_18;
        else
            FUNC_14("no IDispatch iface\n");
    }

    VAR_19 = FUNC_9(VAR_11->plugin_unk, &VAR_4, (void**)&VAR_15);
    if(FUNC_13(VAR_19)) {
        FUNC_1("Use IOleCommandTarget\n");
        FUNC_3(VAR_15);
    }
}
