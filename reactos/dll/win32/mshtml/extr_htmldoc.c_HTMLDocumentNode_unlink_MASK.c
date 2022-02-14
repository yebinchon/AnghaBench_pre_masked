
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMHTMLDocument ;
struct TYPE_4__ {int * window; int * nsdoc; } ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HTMLDOMNode ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(HTMLDOMNode *VAR_0)
{
    HTMLDocumentNode *VAR_1 = FUNC_0(VAR_0);

    if(VAR_1->nsdoc) {
        nsIDOMHTMLDocument *VAR_2 = VAR_1->nsdoc;

        FUNC_2(VAR_1);
        VAR_1->nsdoc = ((void*)0);
        FUNC_1(VAR_2);
        VAR_1->window = ((void*)0);
    }
}
