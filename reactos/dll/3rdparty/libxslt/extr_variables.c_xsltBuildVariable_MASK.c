
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef int xsltStyleBasicItemVariablePtr ;
typedef TYPE_2__* xsltStackElemPtr ;
typedef int xmlNodePtr ;
struct TYPE_9__ {int computed; int value; int tree; int nameURI; int * select; int name; TYPE_1__* comp; } ;
struct TYPE_8__ {int ns; int * select; int name; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static xsltStackElemPtr
FUNC_4(xsltTransformContextPtr VAR_2,
    xsltStylePreCompPtr VAR_3,
    xmlNodePtr VAR_4)
{




    xsltStylePreCompPtr VAR_5 = VAR_3;

    xsltStackElemPtr VAR_6;
    VAR_6 = FUNC_3(VAR_2);
    if (VAR_6 == ((void*)0))
 return(((void*)0));
    VAR_6->comp = (xsltStylePreCompPtr) VAR_5;
    VAR_6->name = VAR_5->name;
    VAR_6->select = VAR_5->select;
    VAR_6->nameURI = VAR_5->ns;
    VAR_6->tree = VAR_4;
    VAR_6->value = FUNC_1(VAR_2, VAR_6,
 (xsltStylePreCompPtr) VAR_5);
    VAR_6->computed = 1;
    return(VAR_6);
}
