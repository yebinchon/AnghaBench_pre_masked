
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int post_data_len; scalar_t__ post_data; int headers; } ;
struct TYPE_9__ {TYPE_2__ request_data; int IBindStatusCallback_iface; } ;
struct TYPE_7__ {TYPE_3__ bsc; int is_doc_channel; } ;
typedef TYPE_1__ nsChannelBSC ;
typedef int WCHAR ;
typedef int IMoniker ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_3__*,int *,int *,int) ;
 int FUNC_6 (scalar_t__,scalar_t__*,int) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_2__*) ;

HRESULT FUNC_8(IMoniker *VAR_10, const WCHAR *VAR_11, BYTE *VAR_12, DWORD VAR_13,
        BOOL VAR_14, nsChannelBSC **VAR_15)
{
    nsChannelBSC *VAR_16;
    DWORD VAR_17;

    VAR_16 = FUNC_3(sizeof(*VAR_16));
    if(!VAR_16)
        return VAR_7;

    VAR_17 = VAR_0 | VAR_1 | VAR_6;
    if(VAR_13)
        VAR_17 |= VAR_2 | VAR_5 | VAR_4 | VAR_3;

    FUNC_5(&VAR_16->bsc, &VAR_9, VAR_10, VAR_17);
    VAR_16->is_doc_channel = VAR_14;

    if(VAR_11) {
        VAR_16->bsc.request_data.headers = FUNC_4(VAR_11);
        if(!VAR_16->bsc.request_data.headers) {
            FUNC_1(&VAR_16->bsc.IBindStatusCallback_iface);
            return VAR_7;
        }
    }

    if(VAR_12) {
        VAR_16->bsc.request_data.post_data = FUNC_0(0, VAR_13+1);
        if(!VAR_16->bsc.request_data.post_data) {
            FUNC_7(&VAR_16->bsc.request_data);
            FUNC_1(&VAR_16->bsc.IBindStatusCallback_iface);
            return VAR_7;
        }

        FUNC_6(VAR_16->bsc.request_data.post_data, VAR_12, VAR_13);
        ((BYTE*)VAR_16->bsc.request_data.post_data)[VAR_13] = 0;
        VAR_16->bsc.request_data.post_data_len = VAR_13;
    }

    FUNC_2("created %p\n", VAR_16);
    *VAR_15 = VAR_16;
    return VAR_8;
}
