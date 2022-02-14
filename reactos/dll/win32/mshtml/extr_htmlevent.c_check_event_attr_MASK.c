
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
struct TYPE_10__ {int const* attr_name; } ;
struct TYPE_9__ {int event_target; } ;
struct TYPE_8__ {int window; } ;
typedef int PRUnichar ;
typedef int IDispatch ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int const*) ;
 TYPE_6__* VAR_2 ;
 int FUNC_5 (int *,int const*,int *,int const**) ;
 int FUNC_6 (TYPE_1__*,int *,int ,TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int const*) ;
 int FUNC_10 (int *,int,int *) ;

void FUNC_11(HTMLDocumentNode *VAR_3, nsIDOMHTMLElement *VAR_4)
{
    const PRUnichar *VAR_5;
    nsAString VAR_6;
    IDispatch *VAR_7;
    HTMLDOMNode *VAR_8;
    int VAR_9;
    nsresult VAR_10;
    HRESULT VAR_11;

    for(VAR_9=0; VAR_9 < VAR_0; VAR_9++) {
        VAR_10 = FUNC_5(VAR_4, VAR_2[VAR_9].attr_name, &VAR_6, &VAR_5);
        if(FUNC_1(VAR_10)) {
            if(!*VAR_5)
                continue;

            FUNC_3("%p.%s = %s\n", VAR_4, FUNC_4(VAR_2[VAR_9].attr_name), FUNC_4(VAR_5));

            VAR_7 = FUNC_9(VAR_3->window, VAR_5);
            if(VAR_7) {
                VAR_11 = FUNC_6(VAR_3, (nsIDOMNode*)VAR_4, VAR_1, &VAR_8);
                if(FUNC_2(VAR_11)) {
                    FUNC_10(&VAR_8->event_target, VAR_9, VAR_7);
                    FUNC_7(VAR_8);
                }
                FUNC_0(VAR_7);
            }
            FUNC_8(&VAR_6);
        }
    }
}
