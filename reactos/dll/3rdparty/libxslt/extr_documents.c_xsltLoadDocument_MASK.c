
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltDocumentPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_1__* doc; } ;
struct TYPE_13__ {scalar_t__ xinclude; scalar_t__ debugStatus; int parserOptions; int dict; TYPE_3__* docList; int * sec; } ;
struct TYPE_12__ {int * URL; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,TYPE_2__*,int const*) ;
 int * FUNC_7 (int const*,int ,int ,void*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *,int *,char*,int const*) ;

xsltDocumentPtr
FUNC_11(xsltTransformContextPtr VAR_2, const xmlChar *VAR_3) {
    xsltDocumentPtr VAR_4;
    xmlDocPtr VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
 return(((void*)0));




    if (VAR_2->sec != ((void*)0)) {
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2->sec, VAR_2, VAR_3);
 if (VAR_6 == 0) {
     FUNC_10(VAR_2, ((void*)0), ((void*)0),
   "xsltLoadDocument: read rights for %s denied\n",
        VAR_3);
     return(((void*)0));
 }
    }




    VAR_4 = VAR_2->docList;
    while (VAR_4 != ((void*)0)) {
 if ((VAR_4->doc != ((void*)0)) && (VAR_4->doc->URL != ((void*)0)) &&
     (FUNC_1(VAR_4->doc->URL, VAR_3)))
     return(VAR_4);
 VAR_4 = VAR_4->next;
    }

    VAR_5 = FUNC_7(VAR_3, VAR_2->dict, VAR_2->parserOptions,
                               (void *) VAR_2, VAR_1);

    if (VAR_5 == ((void*)0))
 return(((void*)0));

    if (VAR_2->xinclude != 0) {







 FUNC_10(VAR_2, ((void*)0), ((void*)0),
     "xsltLoadDocument(%s) : XInclude processing not compiled in\n",
                  VAR_3);

    }



    if (FUNC_8(VAR_2))
 FUNC_5(VAR_2, FUNC_0(VAR_5));
    if (VAR_2->debugStatus == VAR_0)
 FUNC_4(VAR_5);

    VAR_4 = FUNC_9(VAR_2, VAR_5);
    return(VAR_4);
}
