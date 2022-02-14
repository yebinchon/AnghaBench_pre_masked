
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xsltStylesheetPtr ;
typedef int * xsltSecurityPrefsPtr ;
typedef TYPE_3__* xsltDocumentPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_1__* doc; } ;
struct TYPE_9__ {int dict; TYPE_3__* docList; } ;
struct TYPE_8__ {int * URL; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int *,int const*) ;
 int * FUNC_2 (int const*,int ,int ,void*,int ) ;
 int * FUNC_3 () ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int *,int *,char*,int const*) ;

xsltDocumentPtr
FUNC_6(xsltStylesheetPtr VAR_2, const xmlChar *VAR_3) {
    xsltDocumentPtr VAR_4;
    xmlDocPtr VAR_5;
    xsltSecurityPrefsPtr VAR_6;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
 return(((void*)0));




    VAR_6 = FUNC_3();
    if (VAR_6 != ((void*)0)) {
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, ((void*)0), VAR_3);
 if (VAR_7 == 0) {
     FUNC_5(((void*)0), ((void*)0), ((void*)0),
   "xsltLoadStyleDocument: read rights for %s denied\n",
        VAR_3);
     return(((void*)0));
 }
    }




    VAR_4 = VAR_2->docList;
    while (VAR_4 != ((void*)0)) {
 if ((VAR_4->doc != ((void*)0)) && (VAR_4->doc->URL != ((void*)0)) &&
     (FUNC_0(VAR_4->doc->URL, VAR_3)))
     return(VAR_4);
 VAR_4 = VAR_4->next;
    }

    VAR_5 = FUNC_2(VAR_3, VAR_2->dict, VAR_1,
                               (void *) VAR_2, VAR_0);
    if (VAR_5 == ((void*)0))
 return(((void*)0));

    VAR_4 = FUNC_4(VAR_2, VAR_5);
    return(VAR_4);
}
