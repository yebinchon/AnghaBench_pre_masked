
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef int * xsltDecimalFormatPtr ;
typedef int xmlXPathParserContextPtr ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef TYPE_4__* xmlNsPtr ;
typedef int xmlChar ;
struct TYPE_16__ {int * href; } ;
struct TYPE_15__ {int floatval; int stringval; } ;
struct TYPE_14__ {int errors; int dict; int * decimalFormat; } ;
struct TYPE_13__ {TYPE_10__* inst; TYPE_2__* style; } ;
struct TYPE_12__ {int doc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int ,TYPE_10__*,int const*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_2__*,int const*,int const*) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int **) ;
 int * FUNC_9 (int ,int ,int const**) ;
 int FUNC_10 (TYPE_1__*,int *,int *,char*,int ,...) ;
 TYPE_1__* FUNC_11 (int ) ;

void
FUNC_12(xmlXPathParserContextPtr VAR_4, int VAR_5)
{
    xmlXPathObjectPtr VAR_6 = ((void*)0);
    xmlXPathObjectPtr VAR_7 = ((void*)0);
    xmlXPathObjectPtr VAR_8 = ((void*)0);
    xsltStylesheetPtr VAR_9;
    xsltDecimalFormatPtr VAR_10 = ((void*)0);
    xmlChar *VAR_11;
    const xmlChar *VAR_12;
    const xmlChar *VAR_13 = ((void*)0);
    const xmlChar *VAR_14 = ((void*)0);
    xsltTransformContextPtr VAR_15;

    VAR_15 = FUNC_11(VAR_4);
    if ((VAR_15 == ((void*)0)) || (VAR_15->inst == ((void*)0)))
 return;
    VAR_9 = VAR_15->style;
    if (VAR_9 == ((void*)0))
 return;
    VAR_10 = VAR_9->decimalFormat;

    switch (VAR_5) {
    case 3:
 VAR_1;
 VAR_8 = FUNC_1(VAR_4);
        VAR_12 = FUNC_9(VAR_9->dict, VAR_8->stringval, &VAR_13);
        if (VAR_13 != ((void*)0)) {
            xmlNsPtr VAR_16 = FUNC_4(VAR_15->inst->doc, VAR_15->inst, VAR_13);
            if (VAR_16 == ((void*)0)) {
                FUNC_10(VAR_15, ((void*)0), ((void*)0),
                    "format-number : No namespace found for QName '%s:%s'\n",
                    VAR_13, VAR_12);
                VAR_9->errors++;
                VAR_12 = ((void*)0);
            }
            else {
                VAR_14 = VAR_16->href;
            }
        }
        if (VAR_12 != ((void*)0)) {
     VAR_10 = FUNC_7(VAR_9, VAR_14, VAR_12);
        }
 if (VAR_10 == ((void*)0)) {
     FUNC_10(VAR_15, ((void*)0), ((void*)0),
      "format-number() : undeclared decimal format '%s'\n",
      VAR_8->stringval);
 }

    case 2:
 VAR_1;
 VAR_7 = FUNC_1(VAR_4);
 VAR_0;
 VAR_6 = FUNC_1(VAR_4);
 break;
    default:
 FUNC_0(VAR_3);
    }

    if (VAR_10 != ((void*)0)) {
 if (FUNC_8(VAR_10,
           VAR_7->stringval,
           VAR_6->floatval,
           &VAR_11) == VAR_2) {
     FUNC_2(VAR_4, FUNC_6(VAR_11));
     FUNC_3(VAR_11);
 }
    }

    FUNC_5(VAR_6);
    FUNC_5(VAR_7);
    FUNC_5(VAR_8);
}
