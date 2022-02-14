
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef int xsltStyleItemParamPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_7__ {scalar_t__ type; int children; TYPE_1__* psvi; } ;
struct TYPE_6__ {int * name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *,TYPE_2__*,char*) ;

void
FUNC_4(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4)
{



    xsltStylePreCompPtr VAR_5;


    if ((VAR_4 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4->type != VAR_0))
 return;

    VAR_5 = VAR_4->psvi;
    if ((VAR_5 == ((void*)0)) || (VAR_5->name == ((void*)0))) {
 FUNC_3(VAR_3, ((void*)0), VAR_4,
     "Internal error in xsltParseStylesheetParam(): "
     "The XSLT 'param' declaration was not compiled correctly.\n");
 return;
    }






    FUNC_2(VAR_3, (xsltStylePreCompPtr) VAR_5, VAR_4->children, 1);
}
