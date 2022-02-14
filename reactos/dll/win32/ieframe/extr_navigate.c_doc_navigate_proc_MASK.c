
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_6__ {int post_data; int headers; int url; scalar_t__ async_notif; } ;
typedef TYPE_1__ task_doc_navigate_t ;
typedef scalar_t__ VARIANT_BOOL ;
struct TYPE_7__ {int doc_navigate; } ;
typedef int IHTMLPrivateWindow ;
typedef int HRESULT ;
typedef TYPE_2__ DocHost ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,void**) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_8(DocHost *VAR_2, task_header_t *VAR_3)
{
    task_doc_navigate_t *VAR_4 = (task_doc_navigate_t*)VAR_3;
    IHTMLPrivateWindow *VAR_5;
    HRESULT VAR_6;

    if(!VAR_2->doc_navigate) {
        FUNC_0("Skip nav\n");
        return;
    }

    if(VAR_4->async_notif) {
        VARIANT_BOOL VAR_7 = VAR_1;
        FUNC_7(VAR_2, VAR_4->url, VAR_4->post_data, VAR_4->headers, &VAR_7);
        if(VAR_7) {
            FUNC_4("Navigation canceled\n");
            return;
        }
    }

    VAR_6 = FUNC_2(VAR_2->doc_navigate, &VAR_0, (void**)&VAR_5);
    if(FUNC_3(VAR_6)) {
        FUNC_6(VAR_2, VAR_5, VAR_4->url, VAR_4->headers, VAR_4->post_data);
        FUNC_1(VAR_5);
    }else {
        FUNC_5("Could not get IHTMLPrivateWindow iface: %08x\n", VAR_6);
    }
}
