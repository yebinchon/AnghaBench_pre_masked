
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef TYPE_1__* xsltStyleBasicItemVariablePtr ;
typedef int * xsltStackElemPtr ;
typedef TYPE_3__* xmlNodePtr ;
struct TYPE_9__ {scalar_t__ type; struct TYPE_9__* children; scalar_t__ psvi; } ;
struct TYPE_8__ {int * select; int * name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,TYPE_3__*,char*) ;

xsltStackElemPtr
FUNC_4(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4)
{



    xsltStylePreCompPtr VAR_5;

    xmlNodePtr VAR_6 = ((void*)0);

    xsltStackElemPtr VAR_7 = ((void*)0);

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_4->type != VAR_0))
 return(((void*)0));




    VAR_5 = (xsltStylePreCompPtr) VAR_4->psvi;


    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_3, ((void*)0), VAR_4,
     "Internal error in xsltParseStylesheetCallerParam(): "
     "The XSLT 'with-param' instruction was not compiled.\n");
        return(((void*)0));
    }
    if (VAR_5->name == ((void*)0)) {
 FUNC_3(VAR_3, ((void*)0), VAR_4,
     "Internal error in xsltParseStylesheetCallerParam(): "
     "XSLT 'with-param': The attribute 'name' was not compiled.\n");
 return(((void*)0));
    }






    if (VAR_5->select == ((void*)0)) {
 VAR_6 = VAR_4->children;
    } else {




 VAR_6 = VAR_4;
    }

    VAR_7 = FUNC_1(VAR_3, (xsltStylePreCompPtr) VAR_5, VAR_6);

    return(VAR_7);
}
