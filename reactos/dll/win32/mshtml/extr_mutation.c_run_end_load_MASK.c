
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
struct TYPE_8__ {TYPE_3__* doc_node; } ;
struct TYPE_11__ {TYPE_1__ basedoc; } ;
struct TYPE_9__ {int window; TYPE_5__* doc_obj; } ;
struct TYPE_10__ {TYPE_2__ basedoc; } ;
typedef TYPE_3__ HTMLDocumentNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static nsresult FUNC_4(HTMLDocumentNode *VAR_2, nsISupports *VAR_3, nsISupports *VAR_4)
{
    FUNC_0("(%p)\n", VAR_2);

    if(!VAR_2->basedoc.doc_obj)
        return VAR_0;

    if(VAR_2 == VAR_2->basedoc.doc_obj->basedoc.doc_node) {




        FUNC_2(VAR_2->basedoc.doc_obj);
    }

    FUNC_1(VAR_2);
    FUNC_3(VAR_2->basedoc.window, VAR_1);
    return VAR_0;
}
