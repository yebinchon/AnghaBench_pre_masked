
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStackElemPtr ;
typedef int * xmlXPathObjectPtr ;
typedef int xmlChar ;
struct TYPE_11__ {scalar_t__ computed; scalar_t__ name; int * value; TYPE_1__* comp; } ;
struct TYPE_10__ {int * globalVars; int * xpathCtxt; } ;
struct TYPE_9__ {int inst; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int const*,int const*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (int ,char*,int const*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int *,int ,char*,int const*) ;

__attribute__((used)) static xmlXPathObjectPtr
FUNC_6(xsltTransformContextPtr VAR_3, const xmlChar *VAR_4,
           const xmlChar *VAR_5) {
    xsltStackElemPtr VAR_6;
    xmlXPathObjectPtr VAR_7 = ((void*)0);




    if ((VAR_3->xpathCtxt == ((void*)0)) || (VAR_3->globalVars == ((void*)0)))
 return(((void*)0));
    VAR_6 = (xsltStackElemPtr)
     FUNC_1(VAR_3->globalVars, VAR_4, VAR_5);
    if (VAR_6 == ((void*)0)) {




 return(((void*)0));
    }




    if (VAR_6->computed == 0) {
 if (VAR_6->name == VAR_1) {
     FUNC_5(VAR_3, ((void*)0), VAR_6->comp->inst,
  "Recursive definition of %s\n", VAR_4);
     return(((void*)0));
 }
 VAR_7 = FUNC_3(VAR_6, VAR_3);
    } else
 VAR_7 = VAR_6->value;
    return(FUNC_2(VAR_7));
}
