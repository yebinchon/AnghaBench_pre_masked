
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDocument ;
struct TYPE_3__ {int nsIDocumentObserver_iface; int nsdoc; } ;
typedef TYPE_1__ HTMLDocumentNode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,void**) ;
 int FUNC_4 (int *) ;

void FUNC_5(HTMLDocumentNode *VAR_2)
{
    nsIDocument *VAR_3;
    nsresult VAR_4;

    VAR_4 = FUNC_3(VAR_2->nsdoc, &VAR_0, (void**)&VAR_3);
    if(FUNC_1(VAR_4)) {
        FUNC_0("Could not get nsIDocument: %08x\n", VAR_4);
        return;
    }

    FUNC_2(VAR_1, VAR_3, &VAR_2->nsIDocumentObserver_iface);
    FUNC_4(VAR_3);
}
