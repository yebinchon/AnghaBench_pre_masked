
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int post_data_len; int * post_data; int * headers; } ;
typedef TYPE_2__ request_data_t ;
struct TYPE_6__ {int IBindStatusCallback_iface; } ;
struct TYPE_8__ {TYPE_1__ bsc; } ;
typedef TYPE_3__ nsChannelBSC ;
typedef int WCHAR ;
typedef int IWebBrowser2 ;
typedef int IUri ;
typedef int IUnknown ;
typedef int ITargetFramePriv2 ;
typedef int IHTMLWindow2 ;
typedef int IBindCtx ;
typedef int HTMLOuterWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ,int *,int *,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int,int *,int *,int const*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *,int *,int *,int ,int ,TYPE_3__**) ;
 int FUNC_15 (int *,int *,int *,void**) ;
 int VAR_11 ;

HRESULT FUNC_16(HTMLOuterWindow *VAR_12, IUri *VAR_13, const WCHAR *VAR_14, request_data_t *VAR_15, IHTMLWindow2 **VAR_16)
{
    IWebBrowser2 *VAR_17;
    IHTMLWindow2 *VAR_18;
    IBindCtx *VAR_19;
    nsChannelBSC *VAR_20;
    HRESULT VAR_21;

    if(VAR_15)
        VAR_21 = FUNC_14(((void*)0), VAR_15->headers,
                VAR_15->post_data, VAR_15->post_data_len, VAR_2,
                &VAR_20);
    else
        VAR_21 = FUNC_14(((void*)0), ((void*)0), ((void*)0), 0, VAR_2, &VAR_20);
    if(FUNC_2(VAR_21))
        return VAR_21;

    VAR_21 = FUNC_1(0, &VAR_20->bsc.IBindStatusCallback_iface, ((void*)0), &VAR_19);
    if(FUNC_2(VAR_21)) {
        FUNC_4(&VAR_20->bsc.IBindStatusCallback_iface);
        return VAR_21;
    }

    VAR_21 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_7, (void**)&VAR_17);
    if(FUNC_12(VAR_21)) {
        ITargetFramePriv2 *VAR_22;

        VAR_21 = FUNC_8(VAR_17, &VAR_6, (void**)&VAR_22);
        if(FUNC_12(VAR_21)) {
            VAR_21 = FUNC_6(VAR_22,
                    VAR_3|VAR_4, VAR_19, &VAR_20->bsc.IBindStatusCallback_iface,
                    VAR_14, VAR_13, VAR_11);
            FUNC_7(VAR_22);

            if(FUNC_12(VAR_21))
                VAR_21 = FUNC_15((IUnknown*)VAR_17, &VAR_8, &VAR_5, (void**)&VAR_18);
        }
        if(FUNC_2(VAR_21)) {
            FUNC_9(VAR_17);
            FUNC_10(VAR_17);
        }
    }else {
        FUNC_13("Could not create InternetExplorer instance: %08x\n", VAR_21);
    }

    FUNC_4(&VAR_20->bsc.IBindStatusCallback_iface);
    FUNC_3(VAR_19);
    if(FUNC_2(VAR_21))
        return VAR_21;

    FUNC_11(VAR_17, VAR_10);
    FUNC_10(VAR_17);

    if(VAR_16)
        *VAR_16 = VAR_18;
    else
        FUNC_5(VAR_18);
    return VAR_9;
}
