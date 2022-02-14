
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStyleItemIfPtr ;
typedef int xsltElemPreCompPtr ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef scalar_t__ xmlDocPtr ;
struct TYPE_27__ {int children; } ;
struct TYPE_26__ {scalar_t__ type; int boolval; } ;
struct TYPE_25__ {int * test; int * comp; } ;
struct TYPE_24__ {scalar_t__ localRVT; void* state; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*,int ,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;
 TYPE_3__* FUNC_5 (TYPE_1__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_4__*,char*) ;

void
FUNC_9(xsltTransformContextPtr VAR_4, xmlNodePtr VAR_5,
            xmlNodePtr VAR_6, xsltElemPreCompPtr VAR_7)
{
    int VAR_8 = 0;




    xsltStylePreCompPtr VAR_9 = (xsltStylePreCompPtr) VAR_7;


    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
 return;
    if ((VAR_9 == ((void*)0)) || (VAR_9->test == ((void*)0)) || (VAR_9->comp == ((void*)0))) {
 FUNC_8(VAR_4, ((void*)0), VAR_6,
     "Internal error in xsltIf(): "
     "The XSLT 'if' instruction was not compiled.\n");
 return;
    }
    {



 xmlXPathObjectPtr VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_9);
 if (VAR_10 != ((void*)0)) {
     if (VAR_10->type != VAR_0)
  VAR_10 = FUNC_1(VAR_10);
     if (VAR_10->type == VAR_0) {
  VAR_8 = VAR_10->boolval;





  if (VAR_8) {
      FUNC_3(VAR_4,
   VAR_5, VAR_6->children, ((void*)0));
  }
     } else {






  VAR_4->state = VAR_1;
     }
     FUNC_2(VAR_10);
 } else {
     VAR_4->state = VAR_1;
 }
    }


error:
    return;
}
