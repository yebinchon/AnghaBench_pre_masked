
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_4__* bsc; TYPE_5__* nschannel; TYPE_2__ nsIAsyncVerifyRedirectCallback_iface; } ;
typedef TYPE_3__ nsRedirectCallback ;
struct TYPE_10__ {int IBindStatusCallback_iface; } ;
struct TYPE_13__ {TYPE_1__ bsc; } ;
typedef TYPE_4__ nsChannelBSC ;
struct TYPE_14__ {int nsIHttpChannel_iface; } ;
typedef TYPE_5__ nsChannel ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(nsChannel *VAR_3, nsChannelBSC *VAR_4, nsRedirectCallback **VAR_5)
{
    nsRedirectCallback *VAR_6;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->nsIAsyncVerifyRedirectCallback_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;

    FUNC_2(&VAR_3->nsIHttpChannel_iface);
    VAR_6->nschannel = VAR_3;

    FUNC_0(&VAR_4->bsc.IBindStatusCallback_iface);
    VAR_6->bsc = VAR_4;

    *VAR_5 = VAR_6;
    return VAR_1;
}
