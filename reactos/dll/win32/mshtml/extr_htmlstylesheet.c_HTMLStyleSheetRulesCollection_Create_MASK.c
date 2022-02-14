
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsIDOMCSSRuleList ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLStyleSheetRulesCollection_iface; int dispex; int * nslist; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLStyleSheetRulesCollection ;
typedef TYPE_2__ HTMLStyleSheetRulesCollection ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static IHTMLStyleSheetRulesCollection *FUNC_3(nsIDOMCSSRuleList *VAR_2)
{
    HTMLStyleSheetRulesCollection *VAR_3;

    VAR_3 = FUNC_0(sizeof(*VAR_3));
    VAR_3->IHTMLStyleSheetRulesCollection_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;
    VAR_3->nslist = VAR_2;

    FUNC_1(&VAR_3->dispex, (IUnknown*)&VAR_3->IHTMLStyleSheetRulesCollection_iface, &VAR_1);

    if(VAR_2)
        FUNC_2(VAR_2);

    return &VAR_3->IHTMLStyleSheetRulesCollection_iface;
}
