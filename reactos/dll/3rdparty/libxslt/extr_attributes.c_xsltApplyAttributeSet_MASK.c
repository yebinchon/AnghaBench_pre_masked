
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef TYPE_4__* xsltAttrSetPtr ;
typedef TYPE_5__* xsltAttrElemPtr ;
typedef TYPE_6__* xmlNsPtr ;
typedef TYPE_7__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
typedef TYPE_8__* xmlAttrPtr ;
struct TYPE_30__ {TYPE_1__* children; } ;
struct TYPE_29__ {scalar_t__ type; int doc; } ;
struct TYPE_28__ {scalar_t__* href; } ;
struct TYPE_27__ {struct TYPE_27__* next; TYPE_13__* attr; } ;
struct TYPE_26__ {TYPE_5__* attrs; } ;
struct TYPE_25__ {int * attributeSets; } ;
struct TYPE_24__ {scalar_t__ debugStatus; TYPE_3__* style; int dict; } ;
struct TYPE_23__ {scalar_t__* content; } ;
struct TYPE_22__ {int psvi; int parent; } ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_1 (int ,scalar_t__ const*,int) ;
 TYPE_4__* FUNC_2 (int *,scalar_t__ const*,scalar_t__ const*) ;
 TYPE_6__* FUNC_3 (int ,TYPE_7__*,scalar_t__ const*) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,int ) ;
 int FUNC_5 (int ,TYPE_7__*,int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_7__*,TYPE_13__*,int ) ;
 int FUNC_7 (int ,char*,scalar_t__ const*) ;
 int VAR_2 ;
 scalar_t__* FUNC_8 (int ,scalar_t__ const*,scalar_t__ const**) ;
 int FUNC_9 (TYPE_2__*,int *,TYPE_7__*,char*,scalar_t__ const*,...) ;

void
FUNC_10(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4,
                      xmlNodePtr VAR_5,
                      const xmlChar *VAR_6)
{
    const xmlChar *VAR_7 = ((void*)0);
    const xmlChar *VAR_8 = ((void*)0);
    const xmlChar *VAR_9, *VAR_10;
    xsltAttrSetPtr VAR_11;
    xsltStylesheetPtr VAR_12;

    if (VAR_6 == ((void*)0)) {
 if (VAR_5 == ((void*)0))
     return;
 else {



     if (VAR_5->type == VAR_0) {
  if ( ((xmlAttrPtr) VAR_5)->children != ((void*)0))
      VAR_6 = ((xmlAttrPtr) VAR_5)->children->content;

     }
     if (VAR_6 == ((void*)0)) {



  return;
     }
 }
    }



    VAR_9 = VAR_6;
    while (*VAR_9 != 0) {
        while (FUNC_0(*VAR_9))
            VAR_9++;
        if (*VAR_9 == 0)
            break;
        VAR_10 = VAR_9;
        while ((*VAR_10 != 0) && (!FUNC_0(*VAR_10)))
            VAR_10++;
        VAR_9 = FUNC_1(VAR_3->dict, VAR_9, VAR_10 - VAR_9);
        if (VAR_9) {
            xmlNsPtr VAR_13;
            const xmlChar *VAR_14 = ((void*)0);






            if (FUNC_4(VAR_9, 0)) {
                FUNC_9(VAR_3, ((void*)0), VAR_5,
                    "The name '%s' in use-attribute-sets is not a valid "
                    "QName.\n", VAR_9);
                return;
            }

            VAR_7 = FUNC_8(VAR_3->dict, VAR_9, &VAR_8);
            if (VAR_8 != ((void*)0)) {
         VAR_13 = FUNC_3(VAR_5->doc, VAR_5, VAR_8);
                if (VAR_13 == ((void*)0)) {
                    FUNC_9(VAR_3, ((void*)0), VAR_5,
                        "use-attribute-set : No namespace found for QName "
                        "'%s:%s'\n", VAR_8, VAR_7);
                    return;
                }
                VAR_14 = VAR_13->href;
            }

            VAR_12 = VAR_3->style;
            VAR_11 = FUNC_2(VAR_12->attributeSets, VAR_7, VAR_14);
            if (VAR_11 != ((void*)0)) {
                xsltAttrElemPtr VAR_15 = VAR_11->attrs;
                while (VAR_15 != ((void*)0)) {
                    if (VAR_15->attr != ((void*)0)) {
                        FUNC_6(VAR_3, VAR_4, VAR_15->attr,
                            VAR_15->attr->psvi);
                    }
                    VAR_15 = VAR_15->next;
                }
            }
        }
        VAR_9 = VAR_10;
    }
}
