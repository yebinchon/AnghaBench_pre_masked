
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStyleItemCopyOfPtr ;
typedef int xsltElemPreCompPtr ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef TYPE_4__* xmlNodeSetPtr ;
typedef TYPE_5__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
typedef int xmlAttrPtr ;
struct TYPE_31__ {scalar_t__ type; int children; } ;
struct TYPE_30__ {int nodeNr; TYPE_5__** nodeTab; } ;
struct TYPE_29__ {scalar_t__ type; int * stringval; TYPE_4__* nodesetval; } ;
struct TYPE_28__ {int * select; int * comp; } ;
struct TYPE_27__ {void* state; int insert; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*,TYPE_5__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_5__*,int ,int ,int ,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_7 ;
 TYPE_3__* FUNC_9 (TYPE_1__*,TYPE_5__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_5__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int *,TYPE_5__*,char*) ;

void
FUNC_12(xsltTransformContextPtr VAR_8, xmlNodePtr VAR_9,
            xmlNodePtr VAR_10, xsltElemPreCompPtr VAR_11) {



    xsltStylePreCompPtr VAR_12 = (xsltStylePreCompPtr) VAR_11;

    xmlXPathObjectPtr VAR_13 = ((void*)0);
    xmlNodeSetPtr VAR_14 = ((void*)0);
    int VAR_15;

    if ((VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0)) || (VAR_10 == ((void*)0)))
 return;
    if ((VAR_12 == ((void*)0)) || (VAR_12->select == ((void*)0)) || (VAR_12->comp == ((void*)0))) {
 FUNC_11(VAR_8, ((void*)0), VAR_10,
      "xsl:copy-of : compilation failed\n");
 return;
    }
    VAR_13 = FUNC_9(VAR_8, VAR_9, VAR_12);

    if (VAR_13 != ((void*)0)) {
 if (VAR_13->type == VAR_3) {
     VAR_14 = VAR_13->nodesetval;
     if (VAR_14 != ((void*)0)) {
  xmlNodePtr VAR_16;




  for (VAR_15 = 0;VAR_15 < VAR_14->nodeNr;VAR_15++) {
      VAR_16 = VAR_14->nodeTab[VAR_15];
      if (VAR_16 == ((void*)0))
   continue;
      if ((VAR_16->type == VAR_1) ||
   (VAR_16->type == VAR_2))
      {
   FUNC_7(VAR_8, VAR_10,
       VAR_16->children, VAR_8->insert, 0, 0);
      } else if (VAR_16->type == VAR_0) {
   FUNC_10(VAR_8, VAR_10,
       VAR_8->insert, (xmlAttrPtr) VAR_16);
      } else {
   FUNC_6(VAR_8, VAR_10, VAR_16, VAR_8->insert, 0, 0);
      }
  }
     }
 } else if (VAR_13->type == VAR_4) {
     VAR_14 = VAR_13->nodesetval;
     if ((VAR_14 != ((void*)0)) && (VAR_14->nodeTab != ((void*)0)) &&
  (VAR_14->nodeTab[0] != ((void*)0)) &&
  (FUNC_0(VAR_14->nodeTab[0])))
     {
  FUNC_7(VAR_8, VAR_10,
      VAR_14->nodeTab[0]->children, VAR_8->insert, 0, 0);
     }
 } else {
     xmlChar *VAR_17 = ((void*)0);



     VAR_17 = FUNC_3(VAR_13);
     if (VAR_17 == ((void*)0)) {
  FUNC_11(VAR_8, ((void*)0), VAR_10,
      "Internal error in xsltCopyOf(): "
      "failed to cast an XPath object to string.\n");
  VAR_8->state = VAR_5;
     } else {
  if (VAR_17[0] != 0) {



      FUNC_5(VAR_8, VAR_8->insert, VAR_17, 0);
  }
  FUNC_2(VAR_17);





     }
 }
    } else {
 VAR_8->state = VAR_5;
    }

    if (VAR_13 != ((void*)0))
 FUNC_4(VAR_13);
}
