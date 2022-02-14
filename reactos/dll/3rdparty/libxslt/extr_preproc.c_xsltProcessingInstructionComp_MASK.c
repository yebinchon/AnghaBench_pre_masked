
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * xsltStylesheetPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef TYPE_1__* xsltStyleItemPIPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__* psvi; } ;
struct TYPE_7__ {int has_name; int name; TYPE_3__* inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int const*,int ,int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4) {



    xsltStylePreCompPtr VAR_5;


    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_4->type != VAR_0))
 return;




    VAR_5 = FUNC_1(VAR_3, VAR_1);


    if (VAR_5 == ((void*)0))
 return;
    VAR_4->psvi = VAR_5;
    VAR_5->inst = VAR_4;

    VAR_5->name = FUNC_0(VAR_3, VAR_4,
     (const xmlChar *)"name",
     VAR_2, &VAR_5->has_name);
}
