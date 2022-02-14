
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_12__ {int nsIFileURL_iface; } ;
typedef TYPE_3__ nsWineURI ;
struct TYPE_13__ {int load_flags; scalar_t__ request_method; scalar_t__ referrer; scalar_t__ original_uri; scalar_t__ notif_callback; scalar_t__ load_group; TYPE_2__* uri; } ;
typedef TYPE_4__ nsChannel ;
typedef int WCHAR ;
struct TYPE_11__ {TYPE_1__* window_ref; } ;
struct TYPE_10__ {int * window; } ;
typedef int IUri ;
typedef int HTMLOuterWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__**) ;
 int FUNC_5 (int *,int *,int *,int *,TYPE_3__**) ;
 int FUNC_6 (int const*,int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

HRESULT FUNC_11(const WCHAR *VAR_4, nsChannel *VAR_5, nsChannel **VAR_6)
{
    HTMLOuterWindow *VAR_7 = ((void*)0);
    nsChannel *VAR_8;
    nsWineURI *VAR_9;
    IUri *VAR_10;
    nsresult VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_6(VAR_4, 0, &VAR_10);
    if(FUNC_0(VAR_12))
        return VAR_12;

    if(VAR_5->uri->window_ref)
        VAR_7 = VAR_5->uri->window_ref->window;
    VAR_11 = FUNC_5(VAR_10, VAR_7, ((void*)0), ((void*)0), &VAR_9);
    FUNC_2(VAR_10);
    if(FUNC_3(VAR_11))
        return VAR_0;

    VAR_11 = FUNC_4(VAR_9, &VAR_8);
    FUNC_7(&VAR_9->nsIFileURL_iface);
    if(FUNC_3(VAR_11))
        return VAR_0;

    if(VAR_5->load_group) {
        FUNC_9(VAR_5->load_group);
        VAR_8->load_group = VAR_5->load_group;
    }

    if(VAR_5->notif_callback) {
        FUNC_8(VAR_5->notif_callback);
        VAR_8->notif_callback = VAR_5->notif_callback;
    }

    VAR_8->load_flags = VAR_5->load_flags | VAR_1;

    if(VAR_5->request_method == VAR_2)
        FUNC_1("unsupported POST method\n");

    if(VAR_5->original_uri) {
        FUNC_10(VAR_5->original_uri);
        VAR_8->original_uri = VAR_5->original_uri;
    }

    if(VAR_5->referrer) {
        FUNC_10(VAR_5->referrer);
        VAR_8->referrer = VAR_5->referrer;
    }

    *VAR_6 = VAR_8;
    return VAR_3;
}
