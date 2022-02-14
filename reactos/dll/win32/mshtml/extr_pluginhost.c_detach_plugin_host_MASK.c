
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * doc; int entry; TYPE_2__* element; TYPE_1__* sink; int * plugin_unk; scalar_t__ ip_object; scalar_t__ ui_active; } ;
struct TYPE_8__ {int * plugin_host; } ;
struct TYPE_7__ {int IDispatch_iface; int * host; int cookie; int iid; } ;
typedef TYPE_3__ PluginHost ;
typedef int IOleObject ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,TYPE_3__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*) ;

void FUNC_17(PluginHost *VAR_3)
{
    HRESULT VAR_4;

    FUNC_12("%p\n", VAR_3);

    if(!VAR_3->doc)
        return;

    if(VAR_3->ip_object) {
        if(VAR_3->ui_active)
            FUNC_6(VAR_3->ip_object);
        FUNC_5(VAR_3->ip_object);
    }

    if(VAR_3->plugin_unk) {
        IOleObject *VAR_5;

        VAR_4 = FUNC_10(VAR_3->plugin_unk, &VAR_1, (void**)&VAR_5);
        if(FUNC_11(VAR_4)) {
            if(!VAR_3->ip_object)
                FUNC_7(VAR_5, VAR_2);
            FUNC_9(VAR_5, ((void*)0));
            FUNC_8(VAR_5);
        }
    }

    if(VAR_3->sink) {
        IConnectionPointContainer *VAR_6;
        IConnectionPoint *VAR_7;

        FUNC_13(VAR_3->plugin_unk != ((void*)0));

        VAR_4 = FUNC_10(VAR_3->plugin_unk, &VAR_0, (void**)&VAR_6);
        if(FUNC_11(VAR_4)) {
            VAR_4 = FUNC_0(VAR_6, &VAR_3->sink->iid, &VAR_7);
            FUNC_1(VAR_6);
            if(FUNC_11(VAR_4)) {
                FUNC_3(VAR_7, VAR_3->sink->cookie);
                FUNC_2(VAR_7);
            }
        }

        VAR_3->sink->host = ((void*)0);
        FUNC_4(&VAR_3->sink->IDispatch_iface);
        VAR_3->sink = ((void*)0);
    }

    FUNC_16(VAR_3);

    if(VAR_3->element) {
        VAR_3->element->plugin_host = ((void*)0);
        VAR_3->element = ((void*)0);
    }

    FUNC_15(&VAR_3->entry);
    FUNC_14(&VAR_3->entry);
    VAR_3->doc = ((void*)0);
}
