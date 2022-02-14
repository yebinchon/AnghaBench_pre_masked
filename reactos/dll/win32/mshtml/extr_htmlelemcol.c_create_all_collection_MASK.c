
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int member_2; int size; int len; int buf; int member_1; int * member_0; } ;
typedef TYPE_1__ elem_vector_t ;
struct TYPE_11__ {int doc; } ;
typedef int IHTMLElementCollection ;
typedef int HTMLElement ;
typedef TYPE_2__ HTMLDOMNode ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;

IHTMLElementCollection *FUNC_7(HTMLDOMNode *VAR_0, BOOL VAR_1)
{
    elem_vector_t VAR_2 = {((void*)0), 0, 8};

    VAR_2.buf = FUNC_5(VAR_2.size*sizeof(HTMLElement*));

    if(VAR_1) {
        FUNC_6(VAR_0);
        FUNC_3(&VAR_2, FUNC_2(VAR_0));
    }
    FUNC_1(VAR_0->doc, VAR_0, &VAR_2);
    FUNC_4(&VAR_2);

    return FUNC_0(VAR_2.buf, VAR_2.len);
}
