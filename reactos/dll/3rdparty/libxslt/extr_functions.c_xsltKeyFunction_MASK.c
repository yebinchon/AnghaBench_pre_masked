
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_14__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef void* xsltDocumentPtr ;
typedef TYPE_4__* xmlXPathParserContextPtr ;
typedef TYPE_5__* xmlXPathObjectPtr ;
typedef TYPE_6__* xmlXPathContextPtr ;
typedef TYPE_7__* xmlNsPtr ;
typedef TYPE_8__* xmlNodeSetPtr ;
typedef TYPE_9__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_46__ {scalar_t__ type; TYPE_14__* doc; } ;
struct TYPE_45__ {int nodeNr; int ** nodeTab; } ;
struct TYPE_44__ {TYPE_2__* next; } ;
struct TYPE_43__ {TYPE_9__* node; } ;
struct TYPE_42__ {scalar_t__ type; int * stringval; TYPE_8__* nodesetval; } ;
struct TYPE_41__ {void* error; TYPE_1__* value; TYPE_6__* context; } ;
struct TYPE_40__ {TYPE_18__* document; void* state; int * inst; } ;
struct TYPE_39__ {scalar_t__ type; } ;
struct TYPE_38__ {scalar_t__ type; } ;
struct TYPE_37__ {TYPE_14__* doc; } ;
struct TYPE_36__ {char* name; int * _private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int **) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int *) ;
 TYPE_8__* FUNC_7 (TYPE_8__*,TYPE_8__*) ;
 int * FUNC_8 (TYPE_6__*,int *) ;
 TYPE_5__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,int) ;
 TYPE_5__* FUNC_11 (TYPE_8__*) ;
 TYPE_18__* FUNC_12 (TYPE_3__*,TYPE_14__*) ;
 TYPE_8__* FUNC_13 (TYPE_3__*,int *,int const*,int *) ;
 int * FUNC_14 (TYPE_3__*,TYPE_14__*) ;
 int FUNC_15 (TYPE_3__*,int *,int *,char*,...) ;
 TYPE_3__* FUNC_16 (TYPE_4__*) ;

void
FUNC_17(xmlXPathParserContextPtr VAR_8, int VAR_9){
    xmlXPathObjectPtr VAR_10, VAR_11;

    if (VAR_9 != 2) {
 FUNC_15(FUNC_16(VAR_8), ((void*)0), ((void*)0),
  "key() : expects two arguments\n");
 VAR_8->error = VAR_2;
 return;
    }




    VAR_11 = FUNC_0(VAR_8);
    FUNC_10(VAR_8, 1);
    if ((VAR_11 == ((void*)0)) ||
 (VAR_8->value == ((void*)0)) || (VAR_8->value->type != VAR_5)) {
 FUNC_15(FUNC_16(VAR_8), ((void*)0), ((void*)0),
     "key() : invalid arg expecting a string\n");
 VAR_8->error = VAR_3;
 FUNC_5(VAR_11);

 return;
    }



    VAR_10 = FUNC_0(VAR_8);

    if ((VAR_11->type == VAR_4) || (VAR_11->type == VAR_6)) {
 int VAR_12;
 xmlXPathObjectPtr VAR_13, VAR_14;

 VAR_14 = FUNC_6(((void*)0));

 if (VAR_11->nodesetval != ((void*)0)) {
     for (VAR_12 = 0; VAR_12 < VAR_11->nodesetval->nodeNr; VAR_12++) {
  FUNC_1(VAR_8, FUNC_9(VAR_10));
  FUNC_1(VAR_8,
     FUNC_6(VAR_11->nodesetval->nodeTab[VAR_12]));
  FUNC_10(VAR_8, 1);
  FUNC_17(VAR_8, 2);
  VAR_13 = FUNC_0(VAR_8);
  VAR_14->nodesetval = FUNC_7(VAR_14->nodesetval,
             VAR_13->nodesetval);
  FUNC_5(VAR_13);
     }
 }
 FUNC_1(VAR_8, VAR_14);
    } else {
 xmlNodeSetPtr VAR_15 = ((void*)0);
 xmlChar *VAR_16 = ((void*)0), *VAR_17;
 const xmlChar *VAR_18;
 xsltTransformContextPtr VAR_19;
 xmlChar *VAR_20, *VAR_21;
 xmlXPathContextPtr VAR_22 = VAR_8->context;
 xmlNodePtr VAR_23 = ((void*)0);
 xsltDocumentPtr VAR_24;

 VAR_19 = FUNC_16(VAR_8);

 VAR_24 = VAR_19->document;

 if (VAR_22->node == ((void*)0)) {
     FUNC_15(VAR_19, ((void*)0), VAR_19->inst,
  "Internal error in xsltKeyFunction(): "
  "The context node is not set on the XPath context.\n");
     VAR_19->state = VAR_7;
     goto error;
 }



 VAR_20 = VAR_10->stringval;
 VAR_16 = FUNC_3(VAR_20, &VAR_21);
 if (VAR_16 == ((void*)0)) {
     VAR_16 = FUNC_4(VAR_10->stringval);
     VAR_18 = ((void*)0);
     if (VAR_21 != ((void*)0))
  FUNC_2(VAR_21);
 } else {
     if (VAR_21 != ((void*)0)) {
  VAR_18 = FUNC_8(VAR_22, VAR_21);
  if (VAR_18 == ((void*)0)) {
      FUNC_15(VAR_19, ((void*)0), VAR_19->inst,
   "key() : prefix %s is not bound\n", VAR_21);



  }
  FUNC_2(VAR_21);
     } else {
  VAR_18 = ((void*)0);
     }
 }




 FUNC_1(VAR_8, VAR_11);
 FUNC_10(VAR_8, 1);
 if ((VAR_8->value == ((void*)0)) || (VAR_8->value->type != VAR_5)) {
     FUNC_15(VAR_19, ((void*)0), VAR_19->inst,
  "key() : invalid arg expecting a string\n");
     VAR_8->error = VAR_3;
     goto error;
 }
 VAR_11 = FUNC_0(VAR_8);
 VAR_17 = VAR_11->stringval;
 if (VAR_22->node->type == VAR_1) {





     if ((((xmlNsPtr) VAR_22->node)->next != ((void*)0)) &&
  (((xmlNsPtr) VAR_22->node)->next->type == VAR_0))
     {
  VAR_23 = (xmlNodePtr) ((xmlNsPtr) VAR_22->node)->next;
     }
 } else
     VAR_23 = VAR_22->node;

 if ((VAR_23 == ((void*)0)) || (VAR_23->doc == ((void*)0))) {
     FUNC_15(VAR_19, ((void*)0), VAR_19->inst,
  "Internal error in xsltKeyFunction(): "
  "Couldn't get the doc of the XPath context node.\n");
     goto error;
 }

 if ((VAR_19->document == ((void*)0)) ||
     (VAR_19->document->doc != VAR_23->doc))
 {
     if (VAR_23->doc->name && (VAR_23->doc->name[0] == ' ')) {



  if (VAR_23->doc->_private == ((void*)0)) {
      VAR_23->doc->_private = FUNC_14(VAR_19, VAR_23->doc);
      if (VAR_23->doc->_private == ((void*)0))
   goto error;
  }
  VAR_19->document = (xsltDocumentPtr) VAR_23->doc->_private;
     } else {




  VAR_19->document = FUNC_12(VAR_19, VAR_23->doc);
     }
     if (VAR_19->document == ((void*)0)) {
  FUNC_15(VAR_19, ((void*)0), VAR_19->inst,
      "Internal error in xsltKeyFunction(): "
      "Could not get the document info of a context doc.\n");
  VAR_19->state = VAR_7;
  goto error;
     }
 }



 VAR_15 = FUNC_13(VAR_19, VAR_16, VAR_18, VAR_17);

error:
 VAR_19->document = VAR_24;
 FUNC_1(VAR_8, FUNC_11(
     FUNC_7(((void*)0), VAR_15)));
 if (VAR_16 != ((void*)0))
     FUNC_2(VAR_16);
    }

    if (VAR_10 != ((void*)0))
 FUNC_5(VAR_10);
    if (VAR_11 != ((void*)0))
 FUNC_5(VAR_11);
}
