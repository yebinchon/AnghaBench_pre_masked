
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


typedef int nsresult ;
typedef int nsIRequest ;
struct TYPE_9__ {TYPE_5__* window; } ;
struct TYPE_11__ {TYPE_2__ bsc; scalar_t__ is_doc_channel; int nscontext; TYPE_3__* nschannel; int nslistener; } ;
typedef TYPE_4__ nsChannelBSC ;
struct TYPE_13__ {scalar_t__ readystate; } ;
struct TYPE_8__ {TYPE_6__* outer_window; } ;
struct TYPE_12__ {TYPE_1__ base; } ;
struct TYPE_10__ {int response_status; int nsIHttpChannel_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_5(nsChannelBSC *VAR_4)
{
    nsresult VAR_5;


    if(!VAR_4->nschannel->response_status)
        VAR_4->nschannel->response_status = 200;

    VAR_5 = FUNC_2(VAR_4->nslistener,
            (nsIRequest*)&VAR_4->nschannel->nsIHttpChannel_iface, VAR_4->nscontext);
    if(FUNC_1(VAR_5)) {
        FUNC_0("OnStartRequest failed: %08x\n", VAR_5);
        return VAR_1;
    }

    if(VAR_4->is_doc_channel) {
        if(!VAR_4->bsc.window)
            return VAR_0;
        FUNC_4(VAR_4->bsc.window);
        if(VAR_4->bsc.window->base.outer_window->readystate != VAR_2)
            FUNC_3(VAR_4->bsc.window->base.outer_window, VAR_2);
    }

    return VAR_3;
}
