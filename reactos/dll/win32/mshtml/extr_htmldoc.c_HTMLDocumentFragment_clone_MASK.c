
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMNode ;
struct TYPE_9__ {int doc; } ;
struct TYPE_8__ {TYPE_2__ node; } ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_1__**) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDOMNode *VAR_1, nsIDOMNode *VAR_2, HTMLDOMNode **VAR_3)
{
    HTMLDocumentNode *VAR_4 = FUNC_2(VAR_1);
    HTMLDocumentNode *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_4->node.doc, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    *VAR_3 = &VAR_5->node;
    return VAR_0;
}
