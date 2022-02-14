
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltStyleItemIncludePtr ;
typedef TYPE_3__* xsltDocumentPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef TYPE_5__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_23__ {int URL; } ;
struct TYPE_22__ {int * psvi; } ;
struct TYPE_21__ {int preproc; struct TYPE_21__* includes; TYPE_5__* doc; } ;
struct TYPE_20__ {TYPE_3__* include; } ;
struct TYPE_19__ {int nopreproc; TYPE_5__* doc; TYPE_3__* includes; int errors; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_4__*,int const*,int *) ;
 int * FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_4__*,char*,...) ;

int
FUNC_9(xsltStylesheetPtr VAR_0, xmlNodePtr VAR_1) {
    int VAR_2 = -1;
    xmlDocPtr VAR_3;
    xmlChar *VAR_4 = ((void*)0);
    xmlChar *VAR_5 = ((void*)0);
    xmlChar *VAR_6 = ((void*)0);
    xsltStylesheetPtr VAR_7;
    xsltDocumentPtr VAR_8;
    xsltDocumentPtr VAR_9;
    int VAR_10;

    if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0)))
 return (VAR_2);

    VAR_5 = FUNC_3(VAR_1, (const xmlChar *)"href", ((void*)0));
    if (VAR_5 == ((void*)0)) {
 FUNC_8(((void*)0), VAR_0, VAR_1,
     "xsl:include : missing href attribute\n");
 goto error;
    }

    VAR_4 = FUNC_4(VAR_0->doc, VAR_1);
    VAR_6 = FUNC_1(VAR_5, VAR_4);
    if (VAR_6 == ((void*)0)) {
 FUNC_8(((void*)0), VAR_0, VAR_1,
     "xsl:include : invalid URI reference %s\n", VAR_5);
 goto error;
    }





    VAR_9 = VAR_0->includes;
    while (VAR_9 != ((void*)0)) {
        if (FUNC_5(VAR_9->doc->URL, VAR_6)) {
     FUNC_8(((void*)0), VAR_0, VAR_1,
         "xsl:include : recursion detected on included URL %s\n", VAR_6);
     goto error;
 }
 VAR_9 = VAR_9->includes;
    }

    VAR_8 = FUNC_6(VAR_0, VAR_6);
    if (VAR_8 == ((void*)0)) {
 FUNC_8(((void*)0), VAR_0, VAR_1,
     "xsl:include : unable to load %s\n", VAR_6);
 goto error;
    }
    VAR_3 = VAR_0->doc;
    VAR_0->doc = VAR_8->doc;

    VAR_8->includes = VAR_0->includes;
    VAR_0->includes = VAR_8;
    VAR_10 = VAR_0->nopreproc;
    VAR_0->nopreproc = VAR_8->preproc;






    VAR_7 = FUNC_7(VAR_0, VAR_8->doc);
    VAR_0->nopreproc = VAR_10;
    VAR_8->preproc = 1;
    VAR_0->includes = VAR_8->includes;
    VAR_0->doc = VAR_3;
    if (VAR_7 == ((void*)0)) {
 VAR_2 = -1;
 goto error;
    }
    VAR_2 = 0;

error:
    if (VAR_5 != ((void*)0))
 FUNC_2(VAR_5);
    if (VAR_4 != ((void*)0))
 FUNC_2(VAR_4);
    if (VAR_6 != ((void*)0))
 FUNC_2(VAR_6);

    return (VAR_2);
}
