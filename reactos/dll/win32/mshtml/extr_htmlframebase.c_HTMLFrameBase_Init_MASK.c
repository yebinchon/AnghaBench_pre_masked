
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMHTMLElement ;
typedef int dispex_static_data_t ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int * nsiframe; int * nsframe; int element; TYPE_1__ IHTMLFrameBase2_iface; TYPE_2__ IHTMLFrameBase_iface; } ;
typedef TYPE_3__ HTMLFrameBase ;
typedef int HTMLDocumentNode ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;

void FUNC_4(HTMLFrameBase *VAR_5, HTMLDocumentNode *VAR_6, nsIDOMHTMLElement *VAR_7,
        dispex_static_data_t *VAR_8)
{
    nsresult VAR_9;

    VAR_5->IHTMLFrameBase_iface.lpVtbl = &VAR_1;
    VAR_5->IHTMLFrameBase2_iface.lpVtbl = &VAR_0;

    FUNC_0(&VAR_5->element, VAR_6, VAR_7, VAR_8);

    VAR_9 = FUNC_3(VAR_7, &VAR_2, (void**)&VAR_5->nsframe);
    if(FUNC_1(VAR_9)) {
        VAR_5->nsframe = ((void*)0);
        VAR_9 = FUNC_3(VAR_7, &VAR_3, (void**)&VAR_5->nsiframe);
        FUNC_2(VAR_9 == VAR_4);
    }else {
        VAR_5->nsiframe = ((void*)0);
    }
}
