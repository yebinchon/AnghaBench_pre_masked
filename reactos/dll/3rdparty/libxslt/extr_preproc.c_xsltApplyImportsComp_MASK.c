
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * xsltStylesheetPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef TYPE_1__* xsltStyleItemApplyImportsPtr ;
typedef TYPE_3__* xmlNodePtr ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__* psvi; } ;
struct TYPE_6__ {TYPE_3__* inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3) {



    xsltStylePreCompPtr VAR_4;


    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_3->type != VAR_0))
 return;




    VAR_4 = FUNC_0(VAR_2, VAR_1);


    if (VAR_4 == ((void*)0))
 return;
    VAR_3->psvi = VAR_4;
    VAR_4->inst = VAR_3;
}
