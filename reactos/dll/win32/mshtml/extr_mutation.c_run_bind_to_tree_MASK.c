
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIDOMNode ;
struct TYPE_7__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* bind_to_tree ) (TYPE_2__*) ;} ;
typedef int HTMLDocumentNode ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static nsresult FUNC_9(HTMLDocumentNode *VAR_2, nsISupports *VAR_3, nsISupports *VAR_4)
{
    nsIDOMNode *VAR_5;
    HTMLDOMNode *VAR_6;
    nsresult VAR_7;
    HRESULT VAR_8;

    FUNC_3("(%p)->(%p)\n", VAR_2, VAR_3);

    VAR_7 = FUNC_7(VAR_3, &VAR_0, (void**)&VAR_5);
    if(FUNC_2(VAR_7))
        return VAR_7;

    VAR_8 = FUNC_4(VAR_2, VAR_5, VAR_1, &VAR_6);
    FUNC_6(VAR_5);
    if(FUNC_1(VAR_8)) {
        FUNC_0("Could not get node\n");
        return VAR_7;
    }

    if(VAR_6->vtbl->bind_to_tree)
        VAR_6->vtbl->bind_to_tree(VAR_6);

    FUNC_5(VAR_6);
    return VAR_7;
}
