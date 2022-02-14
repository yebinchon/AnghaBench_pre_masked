
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsISupports ;
typedef int nsIStreamListener ;
struct TYPE_7__ {int * headers; } ;
struct TYPE_8__ {TYPE_1__ request_data; } ;
struct TYPE_9__ {TYPE_2__ bsc; int * nscontext; int * nslistener; TYPE_4__* nschannel; } ;
typedef TYPE_3__ nsChannelBSC ;
struct TYPE_10__ {int request_headers; int nsIHttpChannel_iface; } ;
typedef TYPE_4__ nsChannel ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(nsChannelBSC *VAR_0, nsChannel *VAR_1, nsIStreamListener *VAR_2, nsISupports *VAR_3)
{
    FUNC_3(&VAR_1->nsIHttpChannel_iface);
    VAR_0->nschannel = VAR_1;

    FUNC_4(VAR_2);
    VAR_0->nslistener = VAR_2;

    if(VAR_3) {
        FUNC_5(VAR_3);
        VAR_0->nscontext = VAR_3;
    }

    if(VAR_0->bsc.request_data.headers) {
        HRESULT VAR_4;

        VAR_4 = FUNC_6(VAR_0->bsc.request_data.headers, &VAR_1->request_headers);
        FUNC_2(VAR_0->bsc.request_data.headers);
        VAR_0->bsc.request_data.headers = ((void*)0);
        if(FUNC_0(VAR_4))
            FUNC_1("parse_headers failed: %08x\n", VAR_4);
    }
}
