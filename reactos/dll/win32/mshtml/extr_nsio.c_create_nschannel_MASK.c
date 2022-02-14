
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_13__ {int nsIFileURL_iface; } ;
typedef TYPE_4__ nsWineURI ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_4__* uri; int request_headers; int response_headers; int request_method; TYPE_3__ nsIHttpChannelInternal_iface; TYPE_2__ nsIUploadChannel_iface; TYPE_1__ nsIHttpChannel_iface; } ;
typedef TYPE_5__ nsChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

__attribute__((used)) static nsresult FUNC_4(nsWineURI *VAR_7, nsChannel **VAR_8)
{
    nsChannel *VAR_9;

    if(!FUNC_0(VAR_7))
        return VAR_2;

    VAR_9 = FUNC_1(sizeof(nsChannel));
    if(!VAR_9)
        return VAR_1;

    VAR_9->nsIHttpChannel_iface.lpVtbl = &VAR_4;
    VAR_9->nsIUploadChannel_iface.lpVtbl = &VAR_6;
    VAR_9->nsIHttpChannelInternal_iface.lpVtbl = &VAR_5;
    VAR_9->ref = 1;
    VAR_9->request_method = VAR_0;
    FUNC_2(&VAR_9->response_headers);
    FUNC_2(&VAR_9->request_headers);

    FUNC_3(&VAR_7->nsIFileURL_iface);
    VAR_9->uri = VAR_7;

    *VAR_8 = VAR_9;
    return VAR_3;
}
