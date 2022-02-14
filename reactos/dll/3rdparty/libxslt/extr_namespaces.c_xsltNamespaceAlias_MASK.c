
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltNsAliasPtr ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlHashTablePtr ;
typedef int xmlChar ;
struct TYPE_20__ {int hasNsAliases; } ;
struct TYPE_19__ {int doc; } ;
struct TYPE_18__ {int * href; } ;
struct TYPE_17__ {TYPE_3__* targetNs; TYPE_3__* literalNs; } ;
struct TYPE_16__ {int * nsAliases; int * defaultAlias; } ;


 int * VAR_0 ;
 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_4__*,int const*,int *) ;
 int FUNC_3 (int ,int const*,void*) ;
 int * FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 TYPE_2__* FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_4__*,char*,...) ;

void
FUNC_9(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2)
{
    xmlChar *VAR_3 = ((void*)0);
    xmlChar *VAR_4 = ((void*)0);
    xmlNsPtr VAR_5 = ((void*)0);
    xmlNsPtr VAR_6 = ((void*)0);
    const xmlChar *VAR_7;
    const xmlChar *VAR_8;


    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return;

    VAR_4 = FUNC_2(VAR_2, (const xmlChar *)"stylesheet-prefix", ((void*)0));
    if (VAR_4 == ((void*)0)) {
 FUNC_8(((void*)0), VAR_1, VAR_2,
     "namespace-alias: stylesheet-prefix attribute missing\n");
 return;
    }
    VAR_3 = FUNC_2(VAR_2, (const xmlChar *)"result-prefix", ((void*)0));
    if (VAR_3 == ((void*)0)) {
 FUNC_8(((void*)0), VAR_1, VAR_2,
     "namespace-alias: result-prefix attribute missing\n");
 goto error;
    }

    if (FUNC_6(VAR_4, (const xmlChar *)"#default")) {
 VAR_5 = FUNC_5(VAR_2->doc, VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0)) {
     VAR_7 = ((void*)0);
 } else
     VAR_7 = VAR_5->href;
    } else {
 VAR_5 = FUNC_5(VAR_2->doc, VAR_2, VAR_4);

 if ((VAR_5 == ((void*)0)) || (VAR_5->href == ((void*)0))) {
     FUNC_8(((void*)0), VAR_1, VAR_2,
         "namespace-alias: prefix %s not bound to any namespace\n",
     VAR_4);
     goto error;
 } else
     VAR_7 = VAR_5->href;
    }






    if (FUNC_6(VAR_3, (const xmlChar *)"#default")) {
 VAR_6 = FUNC_5(VAR_2->doc, VAR_2, ((void*)0));
 if (VAR_6 == ((void*)0)) {
     VAR_8 = VAR_0;
 } else
     VAR_8 = VAR_6->href;
    } else {
 VAR_6 = FUNC_5(VAR_2->doc, VAR_2, VAR_3);

        if ((VAR_6 == ((void*)0)) || (VAR_6->href == ((void*)0))) {
     FUNC_8(((void*)0), VAR_1, VAR_2,
         "namespace-alias: prefix %s not bound to any namespace\n",
     VAR_3);
     goto error;
 } else
     VAR_8 = VAR_6->href;
    }





    if (VAR_7 == ((void*)0)) {
        if (VAR_6 != ((void*)0)) {
            VAR_1->defaultAlias = VAR_6->href;
 }
    } else {
        if (VAR_1->nsAliases == ((void*)0))
     VAR_1->nsAliases = FUNC_4(10);
        if (VAR_1->nsAliases == ((void*)0)) {
     FUNC_8(((void*)0), VAR_1, VAR_2,
         "namespace-alias: cannot create hash table\n");
     goto error;
        }
 FUNC_3((xmlHashTablePtr) VAR_1->nsAliases,
     VAR_7, (void *) VAR_8);
    }


error:
    if (VAR_4 != ((void*)0))
 FUNC_1(VAR_4);
    if (VAR_3 != ((void*)0))
 FUNC_1(VAR_3);
}
