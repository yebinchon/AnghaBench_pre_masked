
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsIDOMNode ;
typedef int nsIDOMEvent ;
typedef int eventid_t ;
struct TYPE_5__ {int IHTMLEventObj_iface; } ;
typedef int IDispatch ;
typedef TYPE_1__ HTMLEventObj ;
typedef int HTMLDocumentNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *,int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,int *,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int *) ;

void FUNC_7(HTMLDocumentNode *VAR_1, eventid_t VAR_2, BOOL VAR_3, nsIDOMNode *VAR_4, nsIDOMEvent *VAR_5,
        IDispatch *VAR_6)
{
    HTMLEventObj *VAR_7 = ((void*)0);
    HTMLDOMNode *VAR_8;
    HRESULT VAR_9;

    if(VAR_3) {
        VAR_9 = FUNC_4(VAR_1, VAR_4, VAR_0, &VAR_8);
        if(FUNC_0(VAR_9))
            return;

        VAR_7 = FUNC_2();
        FUNC_5(VAR_8);
        if(!VAR_7)
            return;

        VAR_9 = FUNC_6(VAR_7, VAR_8, VAR_2, VAR_5);
        if(FUNC_0(VAR_9)) {
            FUNC_1(&VAR_7->IHTMLEventObj_iface);
            return;
        }
    }

    FUNC_3(VAR_1, VAR_2, VAR_7, VAR_4, VAR_6);

    if(VAR_7)
        FUNC_1(&VAR_7->IHTMLEventObj_iface);
}
