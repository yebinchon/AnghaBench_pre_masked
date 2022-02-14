
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int nsIDOMNode ;
typedef int nsIDOMHTMLCollection ;
struct TYPE_2__ {size_t len; size_t size; int * buf; } ;
typedef TYPE_1__ elem_vector_t ;
typedef size_t UINT32 ;
typedef int IHTMLElementCollection ;
typedef int HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int **) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int *,size_t,int **) ;
 int FUNC_8 (int *) ;

IHTMLElementCollection *FUNC_9(HTMLDocumentNode *VAR_2, nsIDOMHTMLCollection *VAR_3)
{
    UINT32 VAR_4 = 0, VAR_5;
    elem_vector_t VAR_6;
    HTMLDOMNode *VAR_7;
    HRESULT VAR_8 = VAR_0;

    FUNC_6(VAR_3, &VAR_4);

    VAR_6.len = VAR_6.size = VAR_4;
    if(VAR_6.len) {
        nsIDOMNode *VAR_9;

        VAR_6.buf = FUNC_4(VAR_6.size*sizeof(HTMLElement*));

        for(VAR_5=0; VAR_5<VAR_4; VAR_5++) {
            FUNC_7(VAR_3, VAR_5, &VAR_9);
            VAR_8 = FUNC_3(VAR_2, VAR_9, VAR_1, &VAR_7);
            FUNC_8(VAR_9);
            if(FUNC_0(VAR_8))
                break;
            VAR_6.buf[VAR_5] = FUNC_2(VAR_7);
        }
    }else {
        VAR_6.buf = ((void*)0);
    }

    if(FUNC_0(VAR_8)) {
        FUNC_5(VAR_6.buf);
        return ((void*)0);
    }

    return FUNC_1(VAR_6.buf, VAR_6.len);
}
