
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMKeyEvent ;
typedef int nsIDOMEvent ;
typedef int UINT32 ;
struct TYPE_4__ {int nsnode; int doc; } ;
struct TYPE_5__ {TYPE_1__ node; } ;
typedef TYPE_2__ HTMLElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;

 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

HRESULT FUNC_7(HTMLDOMNode *VAR_4, DWORD VAR_5, nsIDOMEvent *VAR_6, BOOL *VAR_7)
{
    HTMLElement *VAR_8 = FUNC_3(VAR_4);

    switch(VAR_5) {
    case 129: {
        nsIDOMKeyEvent *VAR_9;
        nsresult VAR_10;

        VAR_10 = FUNC_4(VAR_6, &VAR_1, (void**)&VAR_9);
        if(FUNC_0(VAR_10)) {
            UINT32 VAR_11 = 0;

            FUNC_5(VAR_9, &VAR_11);

            switch(VAR_11) {
            case 128:
                FUNC_1("F1 pressed\n");
                FUNC_2(VAR_8->node.doc, VAR_0, VAR_3, VAR_8->node.nsnode, ((void*)0), ((void*)0));
                *VAR_7 = VAR_3;
            }

            FUNC_6(VAR_9);
        }
    }
    }

    return VAR_2;
}
