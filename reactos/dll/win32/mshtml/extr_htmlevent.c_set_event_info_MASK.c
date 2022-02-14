
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMEvent ;
typedef int nsAString ;
typedef int eventid_t ;
struct TYPE_10__ {size_t type; } ;
struct TYPE_9__ {int IHTMLDOMNode_iface; TYPE_1__* doc; } ;
struct TYPE_8__ {TYPE_3__* target; int * nsevent; TYPE_6__* type; } ;
struct TYPE_7__ {int nsdoc; } ;
typedef TYPE_2__ HTMLEventObj ;
typedef TYPE_3__ HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_7(HTMLEventObj *VAR_4, HTMLDOMNode *VAR_5, eventid_t VAR_6, nsIDOMEvent *VAR_7)
{
    VAR_4->type = VAR_2+VAR_6;
    VAR_4->nsevent = VAR_7;

    if(VAR_7) {
        FUNC_5(VAR_7);
    }else if(VAR_3[VAR_2[VAR_6].type]) {
        nsAString VAR_8;
        nsresult VAR_9;

        FUNC_4(&VAR_8, VAR_3[VAR_2[VAR_6].type]);
        VAR_9 = FUNC_6(VAR_5->doc->nsdoc, &VAR_8, &VAR_4->nsevent);
        FUNC_3(&VAR_8);
        if(FUNC_2(VAR_9)) {
            FUNC_0("Could not create event: %08x\n", VAR_9);
            return VAR_0;
        }
    }

    VAR_4->target = VAR_5;
    if(VAR_5)
        FUNC_1(&VAR_5->IHTMLDOMNode_iface);
    return VAR_1;
}
