
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_6__ {scalar_t__ set_download; int url; TYPE_2__* doc; } ;
typedef TYPE_1__ download_proc_task_t ;
struct TYPE_7__ {scalar_t__ hostui; scalar_t__ view_sink; int client; } ;
typedef int IDropTarget ;
typedef TYPE_2__ HTMLDocumentObj ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_8(task_t *VAR_2)
{
    download_proc_task_t *VAR_3 = (download_proc_task_t*)VAR_2;
    HTMLDocumentObj *VAR_4 = VAR_3->doc;
    HRESULT VAR_5;

    FUNC_5("(%p)\n", VAR_4);

    FUNC_7(VAR_4, VAR_1, VAR_3->url);

    if(VAR_3->set_download)
        FUNC_6(VAR_4, 1);

    if(!VAR_4->client)
        return;

    if(VAR_4->view_sink)
        FUNC_1(VAR_4->view_sink, VAR_0, -1);

    if(VAR_4->hostui) {
        IDropTarget *VAR_6 = ((void*)0);

        VAR_5 = FUNC_2(VAR_4->hostui, ((void*)0) , &VAR_6);
        if(FUNC_4(VAR_5) && VAR_6) {
            FUNC_0("Use IDropTarget\n");
            FUNC_3(VAR_6);
        }
    }
}
