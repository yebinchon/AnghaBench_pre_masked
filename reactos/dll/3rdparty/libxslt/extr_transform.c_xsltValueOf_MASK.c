
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStyleItemValueOfPtr ;
typedef int xsltElemPreCompPtr ;
typedef int * xmlXPathObjectPtr ;
typedef int * xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_10__ {scalar_t__* select; int noescape; int * comp; } ;
struct TYPE_9__ {void* state; int insert; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__*) ;
 int VAR_2 ;
 int * FUNC_6 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int *,int *,char*) ;

void
FUNC_8(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4,
            xmlNodePtr VAR_5, xsltElemPreCompPtr VAR_6)
{



    xsltStylePreCompPtr VAR_7 = (xsltStylePreCompPtr) VAR_6;

    xmlXPathObjectPtr VAR_8 = ((void*)0);
    xmlChar *VAR_9 = ((void*)0);

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
 return;

    if ((VAR_7 == ((void*)0)) || (VAR_7->select == ((void*)0)) || (VAR_7->comp == ((void*)0))) {
 FUNC_7(VAR_3, ((void*)0), VAR_5,
     "Internal error in xsltValueOf(): "
     "The XSLT 'value-of' instruction was not compiled.\n");
 return;
    }






    VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_7);




    if (VAR_8 != ((void*)0)) {
 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 == ((void*)0)) {
     FUNC_7(VAR_3, ((void*)0), VAR_5,
  "Internal error in xsltValueOf(): "
  "failed to cast an XPath object to string.\n");
     VAR_3->state = VAR_0;
     goto error;
 }
 if (VAR_9[0] != 0) {
     FUNC_4(VAR_3, VAR_3->insert, VAR_9, VAR_7->noescape);
 }
    } else {
 FUNC_7(VAR_3, ((void*)0), VAR_5,
     "XPath evaluation returned no result.\n");
 VAR_3->state = VAR_0;
 goto error;
    }
error:
    if (VAR_9 != ((void*)0))
 FUNC_1(VAR_9);
    if (VAR_8 != ((void*)0))
 FUNC_3(VAR_8);
}
