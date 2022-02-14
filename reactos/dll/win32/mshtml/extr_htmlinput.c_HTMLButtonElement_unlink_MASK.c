
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsIDOMHTMLButtonElement ;
struct TYPE_3__ {int * nsbutton; } ;
typedef int HTMLDOMNode ;
typedef TYPE_1__ HTMLButtonElement ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(HTMLDOMNode *VAR_0)
{
    HTMLButtonElement *VAR_1 = FUNC_0(VAR_0);

    if(VAR_1->nsbutton) {
        nsIDOMHTMLButtonElement *VAR_2 = VAR_1->nsbutton;

        VAR_1->nsbutton = ((void*)0);
        FUNC_1(VAR_2);
    }
}
