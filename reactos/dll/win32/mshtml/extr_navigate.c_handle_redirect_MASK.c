
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_12__ {int nsIAsyncVerifyRedirectCallback_iface; TYPE_5__* nschannel; } ;
typedef TYPE_1__ nsRedirectCallback ;
typedef int nsIChannelEventSink ;
typedef int nsIChannel ;
struct TYPE_13__ {TYPE_5__* nschannel; } ;
typedef TYPE_2__ nsChannelBSC ;
struct TYPE_14__ {int nsIHttpChannel_iface; } ;
typedef TYPE_3__ nsChannel ;
typedef int WCHAR ;
struct TYPE_15__ {int nsIHttpChannel_iface; int notif_callback; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*,TYPE_5__*,...) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_1__**) ;
 int FUNC_5 (int const*,TYPE_5__*,TYPE_3__**) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,void**) ;

__attribute__((used)) static HRESULT FUNC_12(nsChannelBSC *VAR_3, const WCHAR *VAR_4)
{
    nsRedirectCallback *VAR_5;
    nsIChannelEventSink *VAR_6;
    nsChannel *VAR_7;
    nsresult VAR_8;
    HRESULT VAR_9;

    FUNC_3("(%p)->(%s)\n", VAR_3, FUNC_6(VAR_4));

    if(!VAR_3->nschannel || !VAR_3->nschannel->notif_callback)
        return VAR_2;

    VAR_8 = FUNC_11(VAR_3->nschannel->notif_callback, &VAR_0, (void**)&VAR_6);
    if(FUNC_1(VAR_8))
        return VAR_2;

    VAR_9 = FUNC_5(VAR_4, VAR_3->nschannel, &VAR_7);
    if(FUNC_2(VAR_9)) {
        FUNC_3("%p %p->%p\n", VAR_3, VAR_3->nschannel, VAR_7);

        VAR_9 = FUNC_4(VAR_7, VAR_3, &VAR_5);
        FUNC_10(&VAR_7->nsIHttpChannel_iface);
    }

    if(FUNC_2(VAR_9)) {
        VAR_8 = FUNC_8(VAR_6, (nsIChannel*)&VAR_3->nschannel->nsIHttpChannel_iface,
                (nsIChannel*)&VAR_5->nschannel->nsIHttpChannel_iface, VAR_1,
                &VAR_5->nsIAsyncVerifyRedirectCallback_iface);

        if(FUNC_1(VAR_8))
            FUNC_0("AsyncOnChannelRedirect failed: %08x\n", VAR_9);
        else if(VAR_3->nschannel != VAR_5->nschannel)
            FUNC_0("nschannel not updated\n");

        FUNC_7(&VAR_5->nsIAsyncVerifyRedirectCallback_iface);
    }

    FUNC_9(VAR_6);
    return VAR_9;
}
