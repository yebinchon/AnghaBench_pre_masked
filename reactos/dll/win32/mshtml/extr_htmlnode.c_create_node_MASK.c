
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsIDOMNode ;
typedef int UINT16 ;
struct TYPE_11__ {int * vtbl; } ;
struct TYPE_10__ {TYPE_2__ node; } ;
typedef TYPE_1__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;






 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,TYPE_1__**) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_2__*,int *) ;
 int FUNC_4 (int *,int *,TYPE_2__**) ;
 int FUNC_5 (int *,int *,int ,TYPE_1__**) ;
 int VAR_4 ;

 int FUNC_6 (char*,int,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (int *,int*) ;

__attribute__((used)) static HRESULT FUNC_9(HTMLDocumentNode *VAR_5, nsIDOMNode *VAR_6, HTMLDOMNode **VAR_7)
{
    UINT16 VAR_8;
    HRESULT VAR_9;

    FUNC_8(VAR_6, &VAR_8);

    switch(VAR_8) {
    case 129: {
        HTMLElement *VAR_10;
        VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_2, &VAR_10);
        if(FUNC_1(VAR_9))
            return VAR_9;
        *VAR_7 = &VAR_10->node;
        break;
    }
    case 128:
        VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
        if(FUNC_1(VAR_9))
            return VAR_9;
        break;

    case 130:
    case 131: {
        HTMLElement *VAR_11;
        VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_11);
        if(FUNC_1(VAR_9))
            return VAR_9;
        *VAR_7 = &VAR_11->node;
        break;
    }
    case 132:
        FUNC_0("Called on attribute node\n");
        return VAR_1;
    default: {
        HTMLDOMNode *VAR_12;

        VAR_12 = FUNC_7(sizeof(HTMLDOMNode));
        if(!VAR_12)
            return VAR_0;

        VAR_12->vtbl = &VAR_3;
        FUNC_3(VAR_5, VAR_12, VAR_6);
        *VAR_7 = VAR_12;
    }
    }

    FUNC_6("type %d ret %p\n", VAR_8, *VAR_7);
    return VAR_4;
}
