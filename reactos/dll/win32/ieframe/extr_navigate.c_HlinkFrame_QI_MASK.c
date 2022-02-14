
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IWebBrowserPriv2IE9_iface; int ITargetFramePriv2_iface; int ITargetFrame2_iface; int ITargetFrame_iface; int IHlinkFrame_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ HlinkFrame ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,TYPE_1__*,void**) ;
 int VAR_7 ;

BOOL FUNC_3(HlinkFrame *VAR_8, REFIID VAR_9, void **VAR_10)
{
    if(FUNC_1(&VAR_1, VAR_9)) {
        FUNC_2("(%p)->(IID_IHlinkFrame %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->IHlinkFrame_iface;
    }else if(FUNC_1(&VAR_2, VAR_9)) {
        FUNC_2("(%p)->(IID_ITargetFrame %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->ITargetFrame_iface;
    }else if(FUNC_1(&VAR_3, VAR_9)) {
        FUNC_2("(%p)->(IID_ITargetFrame2 %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->ITargetFrame2_iface;
    }else if(FUNC_1(&VAR_4, VAR_9)) {
        FUNC_2("(%p)->(IID_ITargetFramePriv %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->ITargetFramePriv2_iface;
    }else if(FUNC_1(&VAR_5, VAR_9)) {
        FUNC_2("(%p)->(IID_ITargetFramePriv2 %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->ITargetFramePriv2_iface;
    }else if(FUNC_1(&VAR_6, VAR_9)) {
        FUNC_2("(%p)->(IID_IWebBrowserPriv2IE9 %p)\n", VAR_8, VAR_10);
        *VAR_10 = &VAR_8->IWebBrowserPriv2IE9_iface;
    }else {
        return VAR_0;
    }

    FUNC_0((IUnknown*)*VAR_10);
    return VAR_7;
}
