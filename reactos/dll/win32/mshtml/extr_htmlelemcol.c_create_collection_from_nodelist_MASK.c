
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
struct TYPE_3__ {int size; scalar_t__ len; int * buf; } ;
typedef TYPE_1__ elem_vector_t ;
typedef scalar_t__ UINT32 ;
typedef int IHTMLElementCollection ;
typedef int HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int ,int **) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__,int **) ;
 int FUNC_9 (int *) ;

IHTMLElementCollection *FUNC_10(HTMLDocumentNode *VAR_1, nsIDOMNodeList *VAR_2)
{
    UINT32 VAR_3 = 0, VAR_4;
    HTMLDOMNode *VAR_5;
    elem_vector_t VAR_6;
    HRESULT VAR_7;

    FUNC_7(VAR_2, &VAR_3);

    VAR_6.len = 0;
    VAR_6.size = VAR_3;
    if(VAR_3) {
        nsIDOMNode *VAR_8;

        VAR_6.buf = FUNC_5(VAR_6.size*sizeof(HTMLElement*));

        for(VAR_4=0; VAR_4<VAR_3; VAR_4++) {
            FUNC_8(VAR_2, VAR_4, &VAR_8);
            if(FUNC_6(VAR_8)) {
                VAR_7 = FUNC_4(VAR_1, VAR_8, VAR_0, &VAR_5);
                if(FUNC_0(VAR_7))
                    continue;
                VAR_6.buf[VAR_6.len++] = FUNC_2(VAR_5);
            }
            FUNC_9(VAR_8);
        }

        FUNC_3(&VAR_6);
    }else {
        VAR_6.buf = ((void*)0);
    }

    return FUNC_1(VAR_6.buf, VAR_6.len);
}
