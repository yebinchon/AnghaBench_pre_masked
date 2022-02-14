
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsIDOMHTMLFormElement ;
struct TYPE_3__ {int * nsform; } ;
typedef TYPE_1__ HTMLFormElement ;
typedef int HTMLDOMNode ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(HTMLDOMNode *VAR_0)
{
    HTMLFormElement *VAR_1 = FUNC_0(VAR_0);

    if(VAR_1->nsform) {
        nsIDOMHTMLFormElement *VAR_2 = VAR_1->nsform;

        VAR_1->nsform = ((void*)0);
        FUNC_1(VAR_2);
    }
}
