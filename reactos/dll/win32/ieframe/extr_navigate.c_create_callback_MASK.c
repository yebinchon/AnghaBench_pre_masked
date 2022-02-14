
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_13__ {int ref; int * post_data; int * binding; TYPE_4__* doc_host; int * headers; int post_data_len; int * url; TYPE_3__ IHttpSecurity_iface; TYPE_2__ IHttpNegotiate_iface; TYPE_1__ IBindStatusCallback_iface; } ;
struct TYPE_12__ {int IOleClientSite_iface; } ;
typedef int PBYTE ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_4__ DocHost ;
typedef TYPE_5__ BindStatusCallback ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static BindStatusCallback *FUNC_5(DocHost *VAR_3, LPCWSTR VAR_4, PBYTE VAR_5,
        ULONG VAR_6, LPCWSTR VAR_7)
{
    BindStatusCallback *VAR_8 = FUNC_3(sizeof(BindStatusCallback));

    VAR_8->IBindStatusCallback_iface.lpVtbl = &VAR_0;
    VAR_8->IHttpNegotiate_iface.lpVtbl = &VAR_1;
    VAR_8->IHttpSecurity_iface.lpVtbl = &VAR_2;

    VAR_8->ref = 1;
    VAR_8->url = FUNC_2(VAR_4);
    VAR_8->post_data = ((void*)0);
    VAR_8->post_data_len = VAR_6;
    VAR_8->headers = VAR_7 ? FUNC_2(VAR_7) : ((void*)0);

    VAR_8->doc_host = VAR_3;
    FUNC_1(&VAR_3->IOleClientSite_iface);

    VAR_8->binding = ((void*)0);

    if(VAR_5) {
        VAR_8->post_data = FUNC_0(0, VAR_6);
        FUNC_4(VAR_8->post_data, VAR_5, VAR_6);
    }

    return VAR_8;
}
