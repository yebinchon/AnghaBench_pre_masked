
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDocument ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {TYPE_2__ nsIDocumentObserver_iface; int nsdoc; } ;
typedef TYPE_1__ HTMLDocumentNode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int ,int *,void**) ;
 int FUNC_4 (int *) ;

void FUNC_5(HTMLDocumentNode *VAR_3)
{
    nsIDocument *VAR_4;
    nsresult VAR_5;

    VAR_3->nsIDocumentObserver_iface.lpVtbl = &VAR_2;

    VAR_5 = FUNC_3(VAR_3->nsdoc, &VAR_0, (void**)&VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_0("Could not get nsIDocument: %08x\n", VAR_5);
        return;
    }

    FUNC_2(VAR_1, VAR_4, &VAR_3->nsIDocumentObserver_iface);
    FUNC_4(VAR_4);
}
