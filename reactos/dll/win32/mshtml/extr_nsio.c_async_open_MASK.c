
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {int header; TYPE_6__* bscallback; TYPE_3__* window; } ;
typedef TYPE_5__ start_binding_task_t ;
typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIStreamListener ;
struct TYPE_20__ {int IBindStatusCallback_iface; } ;
struct TYPE_24__ {TYPE_2__ bsc; } ;
typedef TYPE_6__ nsChannelBSC ;
struct TYPE_25__ {TYPE_1__* uri; } ;
typedef TYPE_7__ nsChannel ;
struct TYPE_22__ {TYPE_3__* inner_window; } ;
struct TYPE_26__ {TYPE_4__ base; int pending_window; } ;
struct TYPE_21__ {int task_magic; } ;
struct TYPE_19__ {int uri; } ;
typedef int IMoniker ;
typedef TYPE_8__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_7__*,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int ,int ,TYPE_6__**) ;
 int FUNC_9 (TYPE_8__*,TYPE_6__*) ;
 TYPE_5__* FUNC_10 (int) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (TYPE_8__*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static nsresult FUNC_13(nsChannel *VAR_6, HTMLOuterWindow *VAR_7, BOOL VAR_8, nsIStreamListener *VAR_9,
        nsISupports *VAR_10)
{
    nsChannelBSC *VAR_11;
    IMoniker *VAR_12 = ((void*)0);
    HRESULT VAR_13;

    VAR_13 = FUNC_0(((void*)0), VAR_6->uri->uri, &VAR_12, 0);
    if(FUNC_1(VAR_13)) {
        FUNC_5("CreateURLMoniker failed: %08x\n", VAR_13);
        return VAR_2;
    }

    if(VAR_8)
        FUNC_12(VAR_7, VAR_12, VAR_0);

    VAR_13 = FUNC_8(VAR_12, ((void*)0), ((void*)0), 0, VAR_8, &VAR_11);
    FUNC_3(VAR_12);
    if(FUNC_1(VAR_13))
        return VAR_2;

    FUNC_7(VAR_11, VAR_6, VAR_9, VAR_10);

    if(VAR_8) {
        VAR_13 = FUNC_9(VAR_7, VAR_11);
        if(FUNC_4(VAR_13))
            FUNC_6(VAR_7, VAR_7->pending_window);
        FUNC_2(&VAR_11->bsc.IBindStatusCallback_iface);
        if(FUNC_1(VAR_13))
            return VAR_2;
    }else {
        start_binding_task_t *VAR_14;

        VAR_14 = FUNC_10(sizeof(start_binding_task_t));
        if(!VAR_14) {
            FUNC_2(&VAR_11->bsc.IBindStatusCallback_iface);
            return VAR_1;
        }

        VAR_14->window = VAR_7->base.inner_window;
        VAR_14->bscallback = VAR_11;
        VAR_13 = FUNC_11(&VAR_14->header, VAR_4, VAR_5, VAR_7->base.inner_window->task_magic);
        if(FUNC_1(VAR_13))
            return VAR_1;
    }

    return VAR_3;
}
