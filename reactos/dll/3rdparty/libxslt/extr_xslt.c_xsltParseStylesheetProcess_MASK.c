
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* xsltTemplatePtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef int * xmlNodePtr ;
typedef TYPE_3__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_19__ {int children; } ;
struct TYPE_18__ {int literal_result; int forwards_compatible; TYPE_1__* templates; int warnings; int nopreproc; } ;
struct TYPE_17__ {int content; int * elem; int match; struct TYPE_17__* next; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int const*,int ) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_8 (int ,char*) ;
 int VAR_1 ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,int *,int) ;
 int FUNC_12 (TYPE_2__*,int *,int) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (int *,TYPE_2__*,int *,char*) ;

xsltStylesheetPtr
FUNC_17(xsltStylesheetPtr VAR_2, xmlDocPtr VAR_3) {
    xmlNodePtr VAR_4;

    FUNC_9();

    if (VAR_3 == ((void*)0))
 return(((void*)0));
    if (VAR_2 == ((void*)0))
 return(VAR_2);






    VAR_4 = FUNC_2(VAR_3);
    if (VAR_4 == ((void*)0)) {
 FUNC_16(((void*)0), VAR_2, (xmlNodePtr) VAR_3,
  "xsltParseStylesheetProcess : empty stylesheet\n");
 return(((void*)0));
    }

    if ((FUNC_0(VAR_4)) &&
 ((FUNC_1(VAR_4, "stylesheet")) ||
  (FUNC_1(VAR_4, "transform")))) {




 VAR_2->literal_result = 0;
 FUNC_11(VAR_2, VAR_4, 1);
 FUNC_12(VAR_2, VAR_4, 1);
    } else {
 FUNC_11(VAR_2, VAR_4, 0);
 FUNC_12(VAR_2, VAR_4, 0);
 VAR_2->literal_result = 1;
    }
    if (!VAR_2->nopreproc) {
 FUNC_15(VAR_2, VAR_4);
    }
    if (VAR_2->literal_result == 0) {
 FUNC_13(VAR_2, VAR_4);
    } else {
 xmlChar *VAR_5;
 xsltTemplatePtr VAR_6;




 VAR_5 = FUNC_4(VAR_4, (const xmlChar *)"version", VAR_0);
 if (VAR_5 == ((void*)0)) {
     FUNC_16(((void*)0), VAR_2, VAR_4,
  "xsltParseStylesheetProcess : document is not a stylesheet\n");
     return(((void*)0));
 }






 if ((!FUNC_5(VAR_5, (const xmlChar *)"1.0")) &&
            (!FUNC_5(VAR_5, (const xmlChar *)"1.1"))) {
     FUNC_16(((void*)0), VAR_2, VAR_4,
  "xsl:version: only 1.1 features are supported\n");
            VAR_2->forwards_compatible = 1;
     VAR_2->warnings++;
 }
 FUNC_3(VAR_5);




 VAR_6 = FUNC_10();
 if (VAR_6 == ((void*)0)) {
     return(((void*)0));
 }
 VAR_6->next = VAR_2->templates;
 VAR_2->templates = VAR_6;
 VAR_6->match = FUNC_6((const xmlChar *)"/");




 FUNC_14(VAR_2, (xmlNodePtr) VAR_3);
 VAR_6->elem = (xmlNodePtr) VAR_3;
 VAR_6->content = VAR_3->children;
 FUNC_7(VAR_2, VAR_6, ((void*)0), ((void*)0));
 VAR_2->literal_result = 1;
    }

    return(VAR_2);
}
