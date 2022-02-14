
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * xsltStylesheetPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef TYPE_1__* xsltStyleItemVariablePtr ;
typedef TYPE_3__* xmlNodePtr ;
struct TYPE_10__ {scalar_t__ type; int * children; scalar_t__ psvi; } ;
struct TYPE_9__ {int select; int ns; int * name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *,int ,int ,int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,int *,TYPE_3__*,char*) ;

void
FUNC_7(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3)
{



    xsltStylePreCompPtr VAR_4;


    if ((VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3->type != VAR_0))
 return;
    FUNC_5(VAR_2, VAR_3);
    VAR_4 = (xsltStylePreCompPtr) VAR_3->psvi;

    if (VAR_4 == ((void*)0)) {
 FUNC_6(((void*)0), VAR_2, VAR_3,
      "xsl:variable : compilation failed\n");
 return;
    }

    if (VAR_4->name == ((void*)0)) {
 FUNC_6(((void*)0), VAR_2, VAR_3,
     "xsl:variable : missing name attribute\n");
 return;
    }




    if (VAR_3->children != ((void*)0)) {



        FUNC_3(VAR_2, VAR_3);

    }





    FUNC_4(VAR_2, VAR_4->name, VAR_4->ns,
 VAR_4->select, VAR_3->children, (xsltStylePreCompPtr) VAR_4,
 ((void*)0));
}
