
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xmlXPathObjectPtr ;
typedef TYPE_5__* xmlNsPtr ;
typedef TYPE_6__* xmlNodePtr ;
typedef TYPE_7__* xmlDocPtr ;
struct TYPE_19__ {char* name; void* psvi; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_7__* doc; } ;
struct TYPE_17__ {TYPE_2__* next; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_1__* nodesetval; } ;
struct TYPE_15__ {int inst; } ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_13__ {int nodeNr; TYPE_6__** nodeTab; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,void*) ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,TYPE_7__*,void*,void*) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*,int *,int ,char*) ;

int
FUNC_4(xsltTransformContextPtr VAR_10, xmlXPathObjectPtr VAR_11, void *VAR_12) {
    int VAR_13;
    xmlNodePtr VAR_14;
    xmlDocPtr VAR_15;

    if ((VAR_10 == ((void*)0)) || (VAR_11 == ((void*)0)))
 return(-1);







    if ((VAR_11->type != VAR_2) && (VAR_11->type != VAR_3))
 return(0);
    if ((VAR_11->nodesetval == ((void*)0)) || (VAR_11->nodesetval->nodeNr == 0))
 return(0);

    for (VAR_13 = 0; VAR_13 < VAR_11->nodesetval->nodeNr; VAR_13++) {
 VAR_14 = VAR_11->nodesetval->nodeTab[VAR_13];
 if (VAR_14->type == VAR_1) {




     if ((((xmlNsPtr) VAR_14)->next != ((void*)0)) &&
  (((xmlNsPtr) VAR_14)->next->type == VAR_0))
     {
  VAR_14 = (xmlNodePtr) ((xmlNsPtr) VAR_14)->next;
  VAR_15 = VAR_14->doc;
     } else {
  FUNC_3(VAR_10, ((void*)0), VAR_10->inst,
      "Internal error in xsltFlagRVTs(): "
      "Cannot retrieve the doc of a namespace node.\n");
  return(-1);
     }
 } else {
     VAR_15 = VAR_14->doc;
 }
 if (VAR_15 == ((void*)0)) {
     FUNC_3(VAR_10, ((void*)0), VAR_10->inst,
  "Internal error in xsltFlagRVTs(): "
  "Cannot retrieve the doc of a node.\n");
     return(-1);
 }
 if (VAR_15->name && (VAR_15->name[0] == ' ') &&
            VAR_15->psvi != VAR_5) {
            if (VAR_12 == VAR_6) {
                if (VAR_15->psvi == VAR_4)
                    VAR_15->psvi = VAR_6;
            } else if (VAR_12 == VAR_5) {
                if (VAR_15->psvi != VAR_6) {
      FUNC_1(VAR_8,
                            "xsltFlagRVTs: Invalid transition %p => GLOBAL\n",
                            VAR_15->psvi);
                    VAR_15->psvi = VAR_5;
                    return(-1);
                }


                VAR_15->psvi = VAR_5;
            } else if (VAR_12 == VAR_4) {
         VAR_15->psvi = VAR_12;
            }
 }
    }

    return(0);
}
