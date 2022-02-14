
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltAttrSetPtr ;
typedef int xmlChar ;
struct TYPE_16__ {scalar_t__ state; } ;
struct TYPE_15__ {int * attributeSets; int errors; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int const*,int const*) ;
 int FUNC_1 (int *,int const*,int const*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int const*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_7 (int *,TYPE_1__*,int *,char*,int const*) ;

__attribute__((used)) static void
FUNC_8(xsltAttrSetPtr VAR_3, xsltStylesheetPtr VAR_4,
                   xsltStylesheetPtr VAR_5, const xmlChar *VAR_6,
                   const xmlChar *VAR_7, int VAR_8) {
    xsltStylesheetPtr VAR_9;
    xsltAttrSetPtr VAR_10;

    if (VAR_3->state == VAR_0)
        return;
    if (VAR_3->state == VAR_1) {
 FUNC_7(((void*)0), VAR_4, ((void*)0),
            "xsl:attribute-set : use-attribute-sets recursion detected"
            " on %s\n", VAR_6);
        VAR_4->errors++;
        VAR_3->state = VAR_0;
        return;
    }
    if (VAR_8 > 100) {
 FUNC_7(((void*)0), VAR_4, ((void*)0),
  "xsl:attribute-set : use-attribute-sets maximum recursion "
  "depth exceeded on %s\n", VAR_6);
        VAR_4->errors++;
 return;
    }

    VAR_3->state = VAR_1;

    FUNC_6(VAR_3, VAR_4, VAR_8);


    VAR_9 = FUNC_5(VAR_5);
    while (VAR_9 != ((void*)0)) {
        if (VAR_9->attributeSets != ((void*)0)) {
            VAR_10 = FUNC_0(VAR_9->attributeSets, VAR_6, VAR_7);

            if (VAR_10 != ((void*)0)) {




                FUNC_6(VAR_10, VAR_4, VAR_8);
                FUNC_4(VAR_3, VAR_10);
                FUNC_1(VAR_9->attributeSets, VAR_6, VAR_7, ((void*)0));
                FUNC_2(VAR_10);
            }
        }

        VAR_9 = FUNC_5(VAR_9);
    }

    VAR_3->state = VAR_0;
}
