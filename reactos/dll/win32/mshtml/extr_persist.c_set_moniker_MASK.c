
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;


typedef int nsWineURI ;
typedef int nsISupports ;
struct TYPE_23__ {int IBindStatusCallback_iface; } ;
struct TYPE_25__ {TYPE_2__ bsc; } ;
typedef TYPE_4__ nsChannelBSC ;
struct TYPE_26__ {int header; int url; int set_download; TYPE_8__* doc; } ;
typedef TYPE_5__ download_proc_task_t ;
struct TYPE_27__ {int header; TYPE_8__* doc; } ;
typedef TYPE_6__ docobj_task_t ;
struct TYPE_24__ {int task_magic; TYPE_7__* window; } ;
struct TYPE_29__ {TYPE_3__ basedoc; scalar_t__ frame; } ;
struct TYPE_22__ {TYPE_18__* inner_window; } ;
struct TYPE_28__ {int pending_window; TYPE_1__ base; TYPE_8__* doc_obj; } ;
struct TYPE_21__ {int task_magic; scalar_t__ doc; } ;
typedef int LPOLESTR ;
typedef int IUri ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef TYPE_7__ HTMLOuterWindow ;
typedef TYPE_8__ HTMLDocumentObj ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (char*,TYPE_7__*,...) ;
 int VAR_3 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_18__*) ;
 int FUNC_10 (int *,int *,int *,int ,int ,TYPE_4__**) ;
 int FUNC_11 (TYPE_7__*,int *,int **) ;
 int FUNC_12 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_13 (int ,int ,int **) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (TYPE_7__*,int *,int *,TYPE_4__*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int *,int ) ;
 int FUNC_19 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_20 (TYPE_7__*,int ) ;

HRESULT FUNC_21(HTMLOuterWindow *VAR_7, IMoniker *VAR_8, IUri *VAR_9, IBindCtx *VAR_10, nsChannelBSC *VAR_11,
        BOOL VAR_12)
{
    download_proc_task_t *VAR_13;
    HTMLDocumentObj *VAR_14 = ((void*)0);
    nsChannelBSC *VAR_15;
    nsWineURI *VAR_16;
    LPOLESTR VAR_17;
    IUri *VAR_18;
    HRESULT VAR_19;

    if(VAR_7->doc_obj && VAR_7->doc_obj->basedoc.window == VAR_7)
        VAR_14 = VAR_7->doc_obj;

    VAR_19 = FUNC_4(VAR_8, VAR_10, ((void*)0), &VAR_17);
    if(FUNC_1(VAR_19)) {
        FUNC_8("GetDiaplayName failed: %08x\n", VAR_19);
        return VAR_19;
    }

    if(VAR_9) {
        VAR_18 = VAR_9;
    }else {
        VAR_19 = FUNC_13(VAR_17, 0, &VAR_18);
        if(FUNC_1(VAR_19)) {
            FUNC_0(VAR_17);
            return VAR_19;
        }
    }

    FUNC_7("got url: %s\n", FUNC_14(VAR_17));

    FUNC_20(VAR_7, VAR_1);

    VAR_19 = FUNC_11(VAR_7, VAR_18, &VAR_16);
    if(!VAR_9)
        FUNC_5(VAR_18);
    if(FUNC_6(VAR_19)) {
        if(VAR_11)
            VAR_15 = VAR_11;
        else
            VAR_19 = FUNC_10(VAR_8, ((void*)0), ((void*)0), 0, VAR_3, &VAR_15);
    }

    if(FUNC_6(VAR_19)) {
        if(VAR_7->base.inner_window->doc)
            FUNC_19(VAR_7->base.inner_window->task_magic);
        FUNC_9(VAR_7->base.inner_window);

        VAR_19 = FUNC_16(VAR_7, VAR_16, ((void*)0), VAR_15, VAR_0);
        FUNC_17((nsISupports*)VAR_16);
        if(FUNC_6(VAR_19)) {
            VAR_19 = FUNC_12(VAR_7, VAR_15);
            FUNC_7("pending window for %p %p %p\n", VAR_7, VAR_15, VAR_7->pending_window);
        }
        if(VAR_15 != VAR_11)
            FUNC_3(&VAR_15->bsc.IBindStatusCallback_iface);
    }

    if(FUNC_1(VAR_19)) {
        FUNC_0(VAR_17);
        return VAR_19;
    }

    if(VAR_14) {
        FUNC_2(VAR_14, VAR_3);

        if(VAR_14->frame) {
            docobj_task_t *VAR_20;

            VAR_20 = FUNC_15(sizeof(docobj_task_t));
            VAR_20->doc = VAR_14;
            VAR_19 = FUNC_18(&VAR_20->header, VAR_6, ((void*)0), VAR_14->basedoc.task_magic);
            if(FUNC_1(VAR_19)) {
                FUNC_0(VAR_17);
                return VAR_19;
            }
        }

        VAR_13 = FUNC_15(sizeof(download_proc_task_t));
        VAR_13->doc = VAR_14;
        VAR_13->set_download = VAR_12;
        VAR_13->url = VAR_17;
        return FUNC_18(&VAR_13->header, VAR_4, VAR_5, VAR_14->basedoc.task_magic);
    }

    return VAR_2;
}
