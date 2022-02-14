
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMWindow ;
typedef int nsIDOMDocument ;
struct TYPE_12__ {TYPE_2__* doc; } ;
struct TYPE_13__ {TYPE_3__ node; } ;
struct TYPE_15__ {TYPE_5__* content_window; TYPE_4__ element; } ;
struct TYPE_14__ {TYPE_6__* frame_element; } ;
struct TYPE_10__ {int window; int doc_obj; } ;
struct TYPE_11__ {TYPE_1__ basedoc; } ;
typedef TYPE_5__ HTMLOuterWindow ;
typedef TYPE_6__ HTMLFrameBase ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,TYPE_5__**) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int *) ;

HRESULT FUNC_6(HTMLFrameBase *VAR_2, nsIDOMDocument *VAR_3)
{
    nsIDOMWindow *VAR_4;
    HTMLOuterWindow *VAR_5;
    nsresult VAR_6;
    HRESULT VAR_7 = VAR_1;

    if(VAR_2->content_window)
        return VAR_1;

    VAR_6 = FUNC_3(VAR_3, &VAR_4);
    if(FUNC_2(VAR_6) || !VAR_4)
        return VAR_0;

    VAR_5 = FUNC_5(VAR_4);
    if(!VAR_5)
        VAR_7 = FUNC_1(VAR_2->element.node.doc->basedoc.doc_obj, VAR_4,
                VAR_2->element.node.doc->basedoc.window, &VAR_5);
    FUNC_4(VAR_4);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_2->content_window = VAR_5;
    VAR_5->frame_element = VAR_2;
    return VAR_1;
}
