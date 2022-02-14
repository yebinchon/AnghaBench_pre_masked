
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_14__ {scalar_t__ type; int * children; } ;
struct TYPE_13__ {TYPE_2__* insert; int output; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int *,int const*,int *) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__*,char*) ;

xmlChar *
FUNC_5(xsltTransformContextPtr VAR_1,
         xmlNodePtr VAR_2,
                xmlNodePtr VAR_3)
{
    xmlNodePtr VAR_4, VAR_5 = ((void*)0);
    xmlChar *VAR_6;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) ||
        (VAR_3->type != VAR_0))
 return(((void*)0));

    if (VAR_3->children == ((void*)0))
 return(((void*)0));







    VAR_5 = FUNC_1(VAR_1->output, ((void*)0),
                    (const xmlChar *)"fake", ((void*)0));
    if (VAR_5 == ((void*)0)) {
 FUNC_4(VAR_1, ((void*)0), VAR_2,
  "Failed to create temporary node\n");
 return(((void*)0));
    }
    VAR_4 = VAR_1->insert;
    VAR_1->insert = VAR_5;



    FUNC_3(VAR_1, VAR_2, VAR_3->children, ((void*)0), ((void*)0));

    VAR_1->insert = VAR_4;

    VAR_6 = FUNC_2(VAR_5);
    if (VAR_5 != ((void*)0))
 FUNC_0(VAR_5);
    return(VAR_6);
}
