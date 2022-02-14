
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * style_sheet; } ;
typedef TYPE_1__ HTMLStyleElement ;
typedef int HTMLDOMNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(HTMLDOMNode *VAR_0)
{
    HTMLStyleElement *VAR_1 = FUNC_2(VAR_0);

    if(VAR_1->style_sheet) {
        FUNC_1(VAR_1->style_sheet);
        VAR_1->style_sheet = ((void*)0);
    }

    FUNC_0(VAR_0);
}
