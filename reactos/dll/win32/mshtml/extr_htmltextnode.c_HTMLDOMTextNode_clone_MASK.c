
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMNode ;
struct TYPE_4__ {int doc; } ;
struct TYPE_5__ {TYPE_1__ node; } ;
typedef TYPE_2__ HTMLDOMTextNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int ,int *,int **) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDOMNode *VAR_0, nsIDOMNode *VAR_1, HTMLDOMNode **VAR_2)
{
    HTMLDOMTextNode *VAR_3 = FUNC_1(VAR_0);

    return FUNC_0(VAR_3->node.doc, VAR_1, VAR_2);
}
