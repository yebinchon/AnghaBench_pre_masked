
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_13__ {int * doc_host; int * outer; TYPE_2__ IWebBrowserPriv2IE9_iface; TYPE_1__ ITargetFramePriv2_iface; TYPE_5__ ITargetFrame2_iface; TYPE_4__ ITargetFrame_iface; TYPE_3__ IHlinkFrame_iface; } ;
typedef int IUnknown ;
typedef TYPE_6__ HlinkFrame ;
typedef int DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(HlinkFrame *VAR_5, IUnknown *VAR_6, DocHost *VAR_7)
{
    VAR_5->IHlinkFrame_iface.lpVtbl = &VAR_0;
    VAR_5->ITargetFrame_iface.lpVtbl = &VAR_3;
    VAR_5->ITargetFrame2_iface.lpVtbl = &VAR_1;
    VAR_5->ITargetFramePriv2_iface.lpVtbl = &VAR_2;
    VAR_5->IWebBrowserPriv2IE9_iface.lpVtbl = &VAR_4;

    VAR_5->outer = VAR_6;
    VAR_5->doc_host = VAR_7;
}
