
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_22__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_16__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xmlXPathParserContextPtr ;
typedef TYPE_5__* xmlXPathObjectPtr ;
typedef TYPE_6__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_7__* xmlAttrPtr ;
struct TYPE_37__ {TYPE_6__* parent; } ;
struct TYPE_36__ {scalar_t__ type; TYPE_22__* doc; } ;
struct TYPE_35__ {int * stringval; TYPE_16__* nodesetval; } ;
struct TYPE_34__ {void* error; TYPE_1__* value; } ;
struct TYPE_33__ {TYPE_2__* style; TYPE_6__* inst; } ;
struct TYPE_32__ {TYPE_22__* doc; } ;
struct TYPE_31__ {int URL; } ;
struct TYPE_30__ {scalar_t__ type; } ;
struct TYPE_29__ {int nodeNr; TYPE_6__** nodeTab; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_22__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_5__* FUNC_8 (TYPE_6__*) ;
 TYPE_16__* FUNC_9 (TYPE_16__*,TYPE_16__*) ;
 TYPE_5__* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_3__*,int *,int *,char*,...) ;
 TYPE_3__* FUNC_14 (TYPE_4__*) ;

void
FUNC_15(xmlXPathParserContextPtr VAR_6, int VAR_7)
{
    xmlXPathObjectPtr VAR_8, VAR_9 = ((void*)0);
    xmlChar *VAR_10 = ((void*)0), *VAR_11;


    if ((VAR_7 < 1) || (VAR_7 > 2)) {
        FUNC_13(FUNC_14(VAR_6), ((void*)0), ((void*)0),
                         "document() : invalid number of args %d\n",
                         VAR_7);
        VAR_6->error = VAR_2;
        return;
    }
    if (VAR_6->value == ((void*)0)) {
        FUNC_13(FUNC_14(VAR_6), ((void*)0), ((void*)0),
                         "document() : invalid arg value\n");
        VAR_6->error = VAR_3;
        return;
    }

    if (VAR_7 == 2) {
        if (VAR_6->value->type != VAR_4) {
            FUNC_13(FUNC_14(VAR_6), ((void*)0), ((void*)0),
                             "document() : invalid arg expecting a nodeset\n");
            VAR_6->error = VAR_3;
            return;
        }

        VAR_9 = FUNC_1(VAR_6);
    }

    if (VAR_6->value->type == VAR_4) {
        int VAR_12;
        xmlXPathObjectPtr VAR_13, VAR_14;

        VAR_8 = FUNC_1(VAR_6);
        VAR_14 = FUNC_8(((void*)0));

        if ((VAR_8 != ((void*)0)) && VAR_8->nodesetval) {
            for (VAR_12 = 0; VAR_12 < VAR_8->nodesetval->nodeNr; VAR_12++) {
                FUNC_2(VAR_6,
                          FUNC_8(VAR_8->nodesetval->nodeTab[VAR_12]));
                FUNC_11(VAR_6, 1);
                if (VAR_7 == 2) {
                    FUNC_2(VAR_6, FUNC_10(VAR_9));
                } else {
                    FUNC_2(VAR_6,
                              FUNC_8(VAR_8->nodesetval->
                                                 nodeTab[VAR_12]));
                }
                FUNC_15(VAR_6, 2);
                VAR_13 = FUNC_1(VAR_6);
                VAR_14->nodesetval = FUNC_9(VAR_14->nodesetval,
                                                       VAR_13->nodesetval);
                FUNC_7(VAR_13);
            }
        }

        if (VAR_8 != ((void*)0))
            FUNC_7(VAR_8);
        if (VAR_9 != ((void*)0))
            FUNC_7(VAR_9);
        FUNC_2(VAR_6, VAR_14);
        return;
    }



    FUNC_11(VAR_6, 1);
    if (VAR_6->value->type != VAR_5) {
        FUNC_13(FUNC_14(VAR_6), ((void*)0), ((void*)0),
                         "document() : invalid arg expecting a string\n");
        VAR_6->error = VAR_3;
        if (VAR_9 != ((void*)0))
            FUNC_7(VAR_9);
        return;
    }
    VAR_8 = FUNC_1(VAR_6);
    if (VAR_8->stringval == ((void*)0)) {
        FUNC_2(VAR_6, FUNC_8(((void*)0)));
    } else {
        xsltTransformContextPtr VAR_15;
        VAR_15 = FUNC_14(VAR_6);
        if ((VAR_9 != ((void*)0)) && (VAR_9->nodesetval != ((void*)0)) &&
            (VAR_9->nodesetval->nodeNr > 0) &&
            FUNC_0(VAR_9->nodesetval->nodeTab[0])) {
            xmlNodePtr VAR_16;

            VAR_16 = VAR_9->nodesetval->nodeTab[0];
            if ((VAR_16->type == VAR_0) ||
         (VAR_16->type == VAR_1)) {
                VAR_16 = ((xmlAttrPtr) VAR_16)->parent;
            }
            VAR_10 = FUNC_5(VAR_16->doc, VAR_16);
        } else {
            if ((VAR_15 != ((void*)0)) && (VAR_15->inst != ((void*)0))) {
                VAR_10 = FUNC_5(VAR_15->inst->doc, VAR_15->inst);
            } else if ((VAR_15 != ((void*)0)) && (VAR_15->style != ((void*)0)) &&
                       (VAR_15->style->doc != ((void*)0))) {
                VAR_10 = FUNC_5(VAR_15->style->doc,
                                      (xmlNodePtr) VAR_15->style->doc);
            }
        }
        VAR_11 = FUNC_3(VAR_8->stringval, VAR_10);
        if (VAR_10 != ((void*)0))
            FUNC_4(VAR_10);
        if (VAR_11 == ((void*)0)) {
            if ((VAR_15 != ((void*)0)) && (VAR_15->style != ((void*)0)) &&
                (VAR_15->style->doc != ((void*)0)) &&
                (FUNC_6(VAR_11, VAR_15->style->doc->URL))) {

                FUNC_2(VAR_6, FUNC_8((xmlNodePtr) VAR_15->style->doc));
            } else {
                FUNC_2(VAR_6, FUNC_8(((void*)0)));
            }
        } else {
     FUNC_12( VAR_6, VAR_11 );
     FUNC_4(VAR_11);
 }
    }
    FUNC_7(VAR_8);
    if (VAR_9 != ((void*)0))
        FUNC_7(VAR_9);
}
