
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int * xsltSecurityPrefsPtr ;
typedef int * xmlNodePtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_10__ {int URL; } ;
struct TYPE_9__ {struct TYPE_9__* parent; struct TYPE_9__* imports; struct TYPE_9__* next; int dict; TYPE_8__* doc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int const*,int *) ;
 int * FUNC_4 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int * FUNC_7 (int *,int ,int ,void*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int * FUNC_9 () ;
 TYPE_1__* FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*,int *,char*,...) ;

int
FUNC_12(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3) {
    int VAR_4 = -1;
    xmlDocPtr VAR_5 = ((void*)0);
    xmlChar *VAR_6 = ((void*)0);
    xmlChar *VAR_7 = ((void*)0);
    xmlChar *VAR_8 = ((void*)0);
    xsltStylesheetPtr VAR_9;
    xsltSecurityPrefsPtr VAR_10;

    if ((VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return (VAR_4);

    VAR_7 = FUNC_3(VAR_3, (const xmlChar *)"href", ((void*)0));
    if (VAR_7 == ((void*)0)) {
 FUNC_11(((void*)0), VAR_2, VAR_3,
     "xsl:import : missing href attribute\n");
 goto error;
    }

    VAR_6 = FUNC_4(VAR_2->doc, VAR_3);
    VAR_8 = FUNC_0(VAR_7, VAR_6);
    if (VAR_8 == ((void*)0)) {
 FUNC_11(((void*)0), VAR_2, VAR_3,
     "xsl:import : invalid URI reference %s\n", VAR_7);
 goto error;
    }

    VAR_9 = VAR_2;
    while (VAR_9 != ((void*)0)) {
        if (VAR_9->doc == ((void*)0))
     break;
 if (FUNC_5(VAR_9->doc->URL, VAR_8)) {
     FUNC_11(((void*)0), VAR_2, VAR_3,
        "xsl:import : recursion detected on imported URL %s\n", VAR_8);
     goto error;
 }
 VAR_9 = VAR_9->parent;
    }




    VAR_10 = FUNC_9();
    if (VAR_10 != ((void*)0)) {
 int VAR_11;

 VAR_11 = FUNC_6(VAR_10, ((void*)0), VAR_8);
 if (VAR_11 == 0) {
     FUNC_11(((void*)0), ((void*)0), ((void*)0),
   "xsl:import: read rights for %s denied\n",
        VAR_8);
     goto error;
 }
    }

    VAR_5 = FUNC_7(VAR_8, VAR_2->dict, VAR_1,
                                  (void *) VAR_2, VAR_0);
    if (VAR_5 == ((void*)0)) {
 FUNC_11(((void*)0), VAR_2, VAR_3,
     "xsl:import : unable to load %s\n", VAR_8);
 goto error;
    }

    VAR_9 = FUNC_10(VAR_5, VAR_2);
    if (VAR_9 != ((void*)0)) {
 VAR_9->next = VAR_2->imports;
 VAR_2->imports = VAR_9;
 if (VAR_2->parent == ((void*)0)) {
     FUNC_8(VAR_2, VAR_9);
 }
 VAR_4 = 0;
    } else {
 FUNC_2(VAR_5);
 }

error:
    if (VAR_7 != ((void*)0))
 FUNC_1(VAR_7);
    if (VAR_6 != ((void*)0))
 FUNC_1(VAR_6);
    if (VAR_8 != ((void*)0))
 FUNC_1(VAR_8);

    return (VAR_4);
}
