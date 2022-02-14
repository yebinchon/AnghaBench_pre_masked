
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef TYPE_2__* xsltStyleItemValueOfPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__* psvi; } ;
struct TYPE_15__ {int noescape; int * select; int * comp; TYPE_4__* inst; } ;
struct TYPE_14__ {int errors; int warnings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 void* FUNC_1 (TYPE_1__*,TYPE_4__*,int const*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_4__*,char*,...) ;
 int * FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_5(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4) {



    xsltStylePreCompPtr VAR_5;

    const xmlChar *VAR_6;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_4->type != VAR_0))
 return;




    VAR_5 = FUNC_2(VAR_3, VAR_1);


    if (VAR_5 == ((void*)0))
 return;
    VAR_4->psvi = VAR_5;
    VAR_5->inst = VAR_4;

    VAR_6 = FUNC_1(VAR_3, VAR_4,
     (const xmlChar *)"disable-output-escaping",
   VAR_2);
    if (VAR_6 != ((void*)0)) {
 if (FUNC_0(VAR_6, (const xmlChar *)"yes")) {
     VAR_5->noescape = 1;
 } else if (!FUNC_0(VAR_6,
    (const xmlChar *)"no")){
     FUNC_3(((void*)0), VAR_3, VAR_4,
"xsl:value-of : disable-output-escaping allows only yes or no\n");
     if (VAR_3 != ((void*)0)) VAR_3->warnings++;
 }
    }
    VAR_5->select = FUNC_1(VAR_3, VAR_4, (const xmlChar *)"select",
                         VAR_2);
    if (VAR_5->select == ((void*)0)) {
 FUNC_3(((void*)0), VAR_3, VAR_4,
      "xsl:value-of : select is missing\n");
 if (VAR_3 != ((void*)0)) VAR_3->errors++;
 return;
    }
    VAR_5->comp = FUNC_4(VAR_3, VAR_5->select);
    if (VAR_5->comp == ((void*)0)) {
 FUNC_3(((void*)0), VAR_3, VAR_4,
      "xsl:value-of : could not compile select expression '%s'\n",
                  VAR_5->select);
 if (VAR_3 != ((void*)0)) VAR_3->errors++;
    }
}
