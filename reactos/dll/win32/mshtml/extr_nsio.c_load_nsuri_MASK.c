
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
struct TYPE_10__ {int * channel_bsc; int nsIFileURL_iface; } ;
typedef TYPE_3__ nsWineURI ;
typedef int nsIWebNavigation ;
typedef int nsIURI ;
typedef int nsISupports ;
typedef int nsIInputStream ;
typedef int nsIDocShellLoadInfo ;
typedef int nsIDocShell ;
typedef int nsChannelBSC ;
struct TYPE_12__ {int skip_mutation_notif; } ;
struct TYPE_9__ {TYPE_1__* inner_window; } ;
struct TYPE_11__ {TYPE_2__ base; scalar_t__ nswindow; } ;
struct TYPE_8__ {TYPE_5__* doc; } ;
typedef TYPE_4__ HTMLOuterWindow ;
typedef TYPE_5__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;

HRESULT FUNC_12(HTMLOuterWindow *VAR_7, nsWineURI *VAR_8, nsIInputStream *VAR_9,
        nsChannelBSC *VAR_10, DWORD VAR_11)
{
    nsIDocShellLoadInfo *VAR_12 = ((void*)0);
    nsIWebNavigation *VAR_13;
    nsIDocShell *VAR_14;
    HTMLDocumentNode *VAR_15;
    nsresult VAR_16;

    VAR_16 = FUNC_4((nsISupports*)VAR_7->nswindow, &VAR_3, (void**)&VAR_13);
    if(FUNC_1(VAR_16)) {
        FUNC_0("Could not get nsIWebNavigation interface: %08x\n", VAR_16);
        return VAR_0;
    }

    VAR_16 = FUNC_10(VAR_13, &VAR_2, (void**)&VAR_14);
    FUNC_11(VAR_13);
    if(FUNC_1(VAR_16)) {
        FUNC_0("Could not get nsIDocShell: %08x\n", VAR_16);
        return VAR_0;
    }

    if(VAR_9) {
        VAR_16 = FUNC_7(VAR_14, &VAR_12);
        if(FUNC_1(VAR_16)) {
            FUNC_9(VAR_14);
            return VAR_0;
        }

        VAR_16 = FUNC_6(VAR_12, VAR_9);
        FUNC_3(VAR_16 == VAR_4);
    }

    VAR_8->channel_bsc = VAR_10;
    VAR_15 = VAR_7->base.inner_window->doc;
    VAR_15->skip_mutation_notif = VAR_6;
    VAR_16 = FUNC_8(VAR_14, (nsIURI*)&VAR_8->nsIFileURL_iface, VAR_12, VAR_11, VAR_1);
    if(VAR_15 == VAR_7->base.inner_window->doc)
        VAR_15->skip_mutation_notif = VAR_1;
    VAR_8->channel_bsc = ((void*)0);
    FUNC_9(VAR_14);
    if(VAR_12)
        FUNC_5(VAR_12);
    if(FUNC_1(VAR_16)) {
        FUNC_2("LoadURI failed: %08x\n", VAR_16);
        return VAR_0;
    }

    return VAR_5;
}
