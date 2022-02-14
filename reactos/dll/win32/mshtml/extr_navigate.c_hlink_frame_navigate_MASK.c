
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int IBindStatusCallback_iface; int request_data; } ;
struct TYPE_11__ {TYPE_2__ bsc; } ;
typedef TYPE_3__ nsChannelBSC ;
struct TYPE_12__ {int request_headers; int post_data_contains_headers; int post_data_stream; } ;
typedef TYPE_4__ nsChannel ;
typedef char WCHAR ;
struct TYPE_13__ {TYPE_1__* doc_obj; } ;
struct TYPE_9__ {scalar_t__ client; } ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IHlinkFrame ;
typedef int IHlink ;
typedef int IBindCtx ;
typedef TYPE_5__ HTMLDocument ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_12 (int *,int *,int *,int ,int,TYPE_3__**) ;
 scalar_t__ FUNC_13 (int *,int *,int *,void**) ;
 int FUNC_14 (int ,int ,int *,int *) ;

HRESULT FUNC_15(HTMLDocument *VAR_8, LPCWSTR VAR_9, nsChannel *VAR_10, DWORD VAR_11, BOOL *VAR_12)
{
    IHlinkFrame *VAR_13;
    nsChannelBSC *VAR_14;
    IBindCtx *VAR_15;
    IMoniker *VAR_16;
    IHlink *VAR_17;
    HRESULT VAR_18;

    *VAR_12 = VAR_2;

    VAR_18 = FUNC_13((IUnknown*)VAR_8->doc_obj->client, &VAR_6, &VAR_6,
            (void**)&VAR_13);
    if(FUNC_3(VAR_18))
        return VAR_7;

    VAR_18 = FUNC_12(((void*)0), ((void*)0), ((void*)0), 0, VAR_2, &VAR_14);
    if(FUNC_3(VAR_18)) {
        FUNC_7(VAR_13);
        return VAR_18;
    }

    if(VAR_10)
        FUNC_14(VAR_10->post_data_stream, VAR_10->post_data_contains_headers,
                &VAR_10->request_headers, &VAR_14->bsc.request_data);

    VAR_18 = FUNC_1(0, &VAR_14->bsc.IBindStatusCallback_iface, ((void*)0), &VAR_15);
    if(FUNC_11(VAR_18))
       VAR_18 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                &VAR_5, (LPVOID*)&VAR_17);

    if(FUNC_11(VAR_18))
        VAR_18 = FUNC_2(((void*)0), VAR_9, &VAR_16);

    if(FUNC_11(VAR_18)) {
        FUNC_8(VAR_17, VAR_3, VAR_16, ((void*)0));

        if(VAR_11 & VAR_4) {
            static const WCHAR VAR_19[] = {'_','b','l','a','n','k',0};
            FUNC_9(VAR_17, VAR_19);
        }

        VAR_18 = FUNC_6(VAR_13, VAR_11, VAR_15,
                &VAR_14->bsc.IBindStatusCallback_iface, VAR_17);
        FUNC_10(VAR_16);
        *VAR_12 = VAR_18 == VAR_7;
        VAR_18 = VAR_7;
    }

    FUNC_7(VAR_13);
    FUNC_4(VAR_15);
    FUNC_5(&VAR_14->bsc.IBindStatusCallback_iface);
    return VAR_18;
}
