
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int IConnectionPointContainer_iface; } ;
struct TYPE_7__ {int IProvideClassInfo_iface; int IObjectSafety_iface; int IOleContainer_iface; int IObjectWithSite_iface; int IPersistHistory_iface; int ISupportErrorInfo_iface; int IHTMLDocument2_iface; int IPersistStreamInit_iface; TYPE_1__ cp_container; int IHlinkTarget_iface; int IOleControl_iface; int IOleCommandTarget_iface; int IServiceProvider_iface; int IOleInPlaceObjectWindowless_iface; int IOleInPlaceActiveObject_iface; int IViewObjectEx_iface; int IOleDocumentView_iface; int IOleDocument_iface; int IOleObject_iface; int IMonikerProp_iface; int IPersistFile_iface; int IPersistMoniker_iface; int IHTMLDocument7_iface; int IHTMLDocument6_iface; int IHTMLDocument5_iface; int IHTMLDocument4_iface; int IHTMLDocument3_iface; int IDispatchEx_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLDocument ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 int VAR_44 ;

__attribute__((used)) static BOOL FUNC_4(HTMLDocument *VAR_45, REFIID VAR_46, void **VAR_47)
{
    *VAR_47 = ((void*)0);

    if(FUNC_2(&VAR_40, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument2_iface;
    else if(FUNC_2(&VAR_4, VAR_46))
        *VAR_47 = &VAR_45->IDispatchEx_iface;
    else if(FUNC_2(&VAR_5, VAR_46))
        *VAR_47 = &VAR_45->IDispatchEx_iface;
    else if(FUNC_2(&VAR_7, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument2_iface;
    else if(FUNC_2(&VAR_8, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument2_iface;
    else if(FUNC_2(&VAR_9, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument3_iface;
    else if(FUNC_2(&VAR_10, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument4_iface;
    else if(FUNC_2(&VAR_11, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument5_iface;
    else if(FUNC_2(&VAR_12, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument6_iface;
    else if(FUNC_2(&VAR_13, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument7_iface;
    else if(FUNC_2(&VAR_29, VAR_46))
        *VAR_47 = &VAR_45->IPersistFile_iface;
    else if(FUNC_2(&VAR_32, VAR_46))
        *VAR_47 = &VAR_45->IPersistMoniker_iface;
    else if(FUNC_2(&VAR_30, VAR_46))
        *VAR_47 = &VAR_45->IPersistFile_iface;
    else if(FUNC_2(&VAR_16, VAR_46))
        *VAR_47 = &VAR_45->IMonikerProp_iface;
    else if(FUNC_2(&VAR_27, VAR_46))
        *VAR_47 = &VAR_45->IOleObject_iface;
    else if(FUNC_2(&VAR_22, VAR_46))
        *VAR_47 = &VAR_45->IOleDocument_iface;
    else if(FUNC_2(&VAR_23, VAR_46))
        *VAR_47 = &VAR_45->IOleDocumentView_iface;
    else if(FUNC_2(&VAR_24, VAR_46))
        *VAR_47 = &VAR_45->IOleInPlaceActiveObject_iface;
    else if(FUNC_2(&VAR_41, VAR_46))
        *VAR_47 = &VAR_45->IViewObjectEx_iface;
    else if(FUNC_2(&VAR_42, VAR_46))
        *VAR_47 = &VAR_45->IViewObjectEx_iface;
    else if(FUNC_2(&VAR_43, VAR_46))
        *VAR_47 = &VAR_45->IViewObjectEx_iface;
    else if(FUNC_2(&VAR_28, VAR_46))
        *VAR_47 = &VAR_45->IOleInPlaceActiveObject_iface;
    else if(FUNC_2(&VAR_25, VAR_46))
        *VAR_47 = &VAR_45->IOleInPlaceObjectWindowless_iface;
    else if(FUNC_2(&VAR_26, VAR_46))
        *VAR_47 = &VAR_45->IOleInPlaceObjectWindowless_iface;
    else if(FUNC_2(&VAR_37, VAR_46))
        *VAR_47 = &VAR_45->IServiceProvider_iface;
    else if(FUNC_2(&VAR_19, VAR_46))
        *VAR_47 = &VAR_45->IOleCommandTarget_iface;
    else if(FUNC_2(&VAR_21, VAR_46))
        *VAR_47 = &VAR_45->IOleControl_iface;
    else if(FUNC_2(&VAR_14, VAR_46))
        *VAR_47 = &VAR_45->IHlinkTarget_iface;
    else if(FUNC_2(&VAR_3, VAR_46))
        *VAR_47 = &VAR_45->cp_container.IConnectionPointContainer_iface;
    else if(FUNC_2(&VAR_34, VAR_46))
        *VAR_47 = &VAR_45->IPersistStreamInit_iface;
    else if(FUNC_2(&VAR_1, VAR_46))
        *VAR_47 = &VAR_45->IHTMLDocument2_iface;
    else if(FUNC_2(&VAR_39, VAR_46))
        *VAR_47 = &VAR_45->ISupportErrorInfo_iface;
    else if(FUNC_2(&VAR_31, VAR_46))
        *VAR_47 = &VAR_45->IPersistHistory_iface;
    else if(FUNC_2(&VAR_18, VAR_46))
        *VAR_47 = &VAR_45->IObjectWithSite_iface;
    else if(FUNC_2(&VAR_20, VAR_46))
        *VAR_47 = &VAR_45->IOleContainer_iface;
    else if(FUNC_2(&VAR_17, VAR_46))
        *VAR_47 = &VAR_45->IObjectSafety_iface;
    else if(FUNC_2(&VAR_35, VAR_46))
        *VAR_47 = &VAR_45->IProvideClassInfo_iface;
    else if(FUNC_2(&VAR_0, VAR_46)) {
        FUNC_0("(%p)->(CLSID_CMarkup %p)\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else if(FUNC_2(&VAR_36, VAR_46)) {
        FUNC_3("(%p)->(IID_IRunnableObject %p) returning NULL\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else if(FUNC_2(&VAR_33, VAR_46)) {
        FUNC_3("(%p)->(IID_IPersistPropertyBag %p) returning NULL\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else if(FUNC_2(&VAR_15, VAR_46)) {
        FUNC_3("(%p)->(IID_IMarshal %p) returning NULL\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else if(FUNC_2(&VAR_6, VAR_46)) {
        FUNC_3("(%p)->(IID_IExternalConnection %p) returning NULL\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else if(FUNC_2(&VAR_38, VAR_46)) {
        FUNC_3("(%p)->(IID_IStdMarshalInfo %p) returning NULL\n", VAR_45, VAR_47);
        *VAR_47 = ((void*)0);
    }else {
        return VAR_2;
    }

    if(*VAR_47)
        FUNC_1((IUnknown*)*VAR_47);
    return VAR_44;
}
