
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsIDOMStyleSheetList ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLStyleSheetsCollection_iface; int dispex; int * nslist; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLStyleSheetsCollection ;
typedef TYPE_2__ HTMLStyleSheetsCollection ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

IHTMLStyleSheetsCollection *FUNC_3(nsIDOMStyleSheetList *VAR_2)
{
    HTMLStyleSheetsCollection *VAR_3 = FUNC_0(sizeof(HTMLStyleSheetsCollection));

    VAR_3->IHTMLStyleSheetsCollection_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;

    if(VAR_2)
        FUNC_2(VAR_2);
    VAR_3->nslist = VAR_2;

    FUNC_1(&VAR_3->dispex, (IUnknown*)&VAR_3->IHTMLStyleSheetsCollection_iface,
            &VAR_1);

    return &VAR_3->IHTMLStyleSheetsCollection_iface;
}
