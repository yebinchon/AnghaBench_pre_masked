
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_13__ {int ref; int is_dispiface; int cookie; TYPE_1__ IDispatch_iface; int * typeinfo; int iid; TYPE_3__* host; } ;
struct TYPE_12__ {int plugin_unk; } ;
struct TYPE_11__ {scalar_t__ typekind; int guid; } ;
typedef scalar_t__ TYPEKIND ;
typedef TYPE_2__ TYPEATTR ;
typedef TYPE_3__ PluginHost ;
typedef TYPE_4__ PHEventSink ;
typedef int IUnknown ;
typedef int ITypeInfo ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__**) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (char*,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 TYPE_4__* FUNC_12 (int) ;

__attribute__((used)) static PHEventSink *FUNC_13(PluginHost *VAR_5, ITypeInfo *VAR_6)
{
    IConnectionPointContainer *VAR_7;
    PHEventSink *VAR_8;
    IConnectionPoint *VAR_9;
    TYPEATTR *VAR_10;
    TYPEKIND VAR_11;
    GUID VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_6(VAR_6, &VAR_10);
    if(FUNC_0(VAR_13))
        return ((void*)0);

    VAR_11 = VAR_10->typekind;
    VAR_12 = VAR_10->guid;
    FUNC_7(VAR_6, VAR_10);

    FUNC_9("guid %s typekind %d\n", FUNC_11(&VAR_12), VAR_11);

    if(VAR_11 != VAR_4 && VAR_11 != VAR_3) {
        FUNC_10("invalid typekind %d\n", VAR_11);
        return ((void*)0);
    }

    VAR_13 = FUNC_8(VAR_5->plugin_unk, &VAR_1, (void**)&VAR_7);
    if(FUNC_0(VAR_13)) {
        FUNC_10("Could not get IConnectionPointContainer iface: %08x\n", VAR_13);
        return ((void*)0);
    }

    VAR_13 = FUNC_1(VAR_7, &VAR_12, &VAR_9);
    FUNC_2(VAR_7);
    if(FUNC_0(VAR_13)) {
        FUNC_10("Could not find %s connection point\n", FUNC_11(&VAR_12));
        return ((void*)0);
    }

    VAR_8 = FUNC_12(sizeof(*VAR_8));
    if(VAR_8) {
        VAR_8->IDispatch_iface.lpVtbl = &VAR_2;
        VAR_8->ref = 1;
        VAR_8->host = VAR_5;
        VAR_8->iid = VAR_12;
        VAR_8->is_dispiface = VAR_11 == VAR_3;

        FUNC_5(VAR_6);
        VAR_8->typeinfo = VAR_6;

        VAR_13 = FUNC_3(VAR_9, (IUnknown*)&VAR_8->IDispatch_iface, &VAR_8->cookie);
    }else {
        VAR_13 = VAR_0;
    }

    FUNC_4(VAR_9);
    if(FUNC_0(VAR_13)) {
        FUNC_10("Advise failed: %08x\n", VAR_13);
        return ((void*)0);
    }

    return VAR_8;
}
