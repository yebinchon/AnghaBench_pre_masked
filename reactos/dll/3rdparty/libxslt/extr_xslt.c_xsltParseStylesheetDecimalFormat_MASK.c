
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltDecimalFormatPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_16__ {scalar_t__ type; int * children; } ;
struct TYPE_15__ {int * patternSeparator; int * digit; int * zeroDigit; int * permille; int * percent; int * noNumber; int * minusSign; int * infinity; int * grouping; int * decimalPoint; struct TYPE_15__* next; } ;
struct TYPE_14__ {TYPE_2__* decimalFormat; int errors; int warnings; } ;


 int const* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,int const*,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int const*,int *) ;
 int * FUNC_5 (TYPE_3__*,int **) ;
 TYPE_2__* FUNC_6 (int const*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_3__*,char*,...) ;

__attribute__((used)) static void
FUNC_9(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2)
{
    xmlChar *VAR_3;
    xsltDecimalFormatPtr VAR_4;
    xsltDecimalFormatPtr VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_1 == ((void*)0)) || (VAR_2->type != VAR_0))
 return;

    VAR_4 = VAR_1->decimalFormat;

    VAR_3 = FUNC_2(VAR_2, FUNC_0("name"), ((void*)0));
    if (VAR_3 != ((void*)0)) {
        const xmlChar *VAR_6;

        if (FUNC_3(VAR_3, 0) != 0) {
            FUNC_8(((void*)0), VAR_1, VAR_2,
                "xsl:decimal-format: Invalid QName '%s'.\n", VAR_3);
     VAR_1->warnings++;
            FUNC_1(VAR_3);
            return;
        }



        VAR_6 = FUNC_5(VAR_2, &VAR_3);
        if (VAR_3 == ((void*)0)) {
     VAR_1->warnings++;
            return;
        }
 VAR_4 = FUNC_4(VAR_1, VAR_6, VAR_3);
 if (VAR_4 != ((void*)0)) {
     FUNC_8(((void*)0), VAR_1, VAR_2,
  "xsltParseStylestyleDecimalFormat: %s already exists\n", VAR_3);
     VAR_1->warnings++;
            FUNC_1(VAR_3);
     return;
 }
 VAR_4 = FUNC_6(VAR_6, VAR_3);
 if (VAR_4 == ((void*)0)) {
     FUNC_8(((void*)0), VAR_1, VAR_2,
     "xsltParseStylestyleDecimalFormat: failed creating new decimal-format\n");
     VAR_1->errors++;
            FUNC_1(VAR_3);
     return;
 }

 for (VAR_5 = VAR_1->decimalFormat; VAR_5->next; VAR_5 = VAR_5->next)
     ;
 if (VAR_5)
     VAR_5->next = VAR_4;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"decimal-separator", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->decimalPoint != ((void*)0)) FUNC_1(VAR_4->decimalPoint);
 VAR_4->decimalPoint = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"grouping-separator", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->grouping != ((void*)0)) FUNC_1(VAR_4->grouping);
 VAR_4->grouping = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"infinity", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->infinity != ((void*)0)) FUNC_1(VAR_4->infinity);
 VAR_4->infinity = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"minus-sign", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->minusSign != ((void*)0)) FUNC_1(VAR_4->minusSign);
 VAR_4->minusSign = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"NaN", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->noNumber != ((void*)0)) FUNC_1(VAR_4->noNumber);
 VAR_4->noNumber = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"percent", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->percent != ((void*)0)) FUNC_1(VAR_4->percent);
 VAR_4->percent = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"per-mille", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->permille != ((void*)0)) FUNC_1(VAR_4->permille);
 VAR_4->permille = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"zero-digit", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->zeroDigit != ((void*)0)) FUNC_1(VAR_4->zeroDigit);
 VAR_4->zeroDigit = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"digit", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->digit != ((void*)0)) FUNC_1(VAR_4->digit);
 VAR_4->digit = VAR_3;
    }

    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"pattern-separator", ((void*)0));
    if (VAR_3 != ((void*)0)) {
 if (VAR_4->patternSeparator != ((void*)0)) FUNC_1(VAR_4->patternSeparator);
 VAR_4->patternSeparator = VAR_3;
    }
    if (VAR_2->children != ((void*)0)) {
 FUNC_7(VAR_1, VAR_2->children);
    }
}
