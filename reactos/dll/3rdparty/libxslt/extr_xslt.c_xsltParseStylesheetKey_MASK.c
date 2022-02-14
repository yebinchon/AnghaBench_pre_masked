
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_13__ {scalar_t__ type; int * children; } ;
struct TYPE_12__ {int errors; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*,int const*,int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *,TYPE_2__*) ;
 int FUNC_4 (int ,char*,int *) ;
 int VAR_1 ;
 int * FUNC_5 (TYPE_2__*,int **) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_8(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3) {
    xmlChar *VAR_4 = ((void*)0);
    xmlChar *VAR_5 = ((void*)0);
    xmlChar *VAR_6 = ((void*)0);
    xmlChar *VAR_7 = ((void*)0);
    xmlChar *VAR_8 = ((void*)0);

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_3->type != VAR_0))
 return;




    VAR_4 = FUNC_1(VAR_3, (const xmlChar *)"name", ((void*)0));
    if (VAR_4 != ((void*)0)) {
        const xmlChar *VAR_9;




 VAR_9 = FUNC_5(VAR_3, &VAR_4);
 if (VAR_4 == ((void*)0)) {
     if (VAR_2 != ((void*)0)) VAR_2->errors++;
     goto error;
 } else {
     VAR_7 = VAR_4;
     if (VAR_9 != ((void*)0))
  VAR_8 = FUNC_2(VAR_9);
 }




    } else {
 FUNC_7(((void*)0), VAR_2, VAR_3,
     "xsl:key : error missing name\n");
 if (VAR_2 != ((void*)0)) VAR_2->errors++;
 goto error;
    }

    VAR_6 = FUNC_1(VAR_3, (const xmlChar *)"match", ((void*)0));
    if (VAR_6 == ((void*)0)) {
 FUNC_7(((void*)0), VAR_2, VAR_3,
     "xsl:key : error missing match\n");
 if (VAR_2 != ((void*)0)) VAR_2->errors++;
 goto error;
    }

    VAR_5 = FUNC_1(VAR_3, (const xmlChar *)"use", ((void*)0));
    if (VAR_5 == ((void*)0)) {
 FUNC_7(((void*)0), VAR_2, VAR_3,
     "xsl:key : error missing use\n");
 if (VAR_2 != ((void*)0)) VAR_2->errors++;
 goto error;
    }




    FUNC_3(VAR_2, VAR_7, VAR_8, VAR_6, VAR_5, VAR_3);


error:
    if (VAR_5 != ((void*)0))
 FUNC_0(VAR_5);
    if (VAR_6 != ((void*)0))
 FUNC_0(VAR_6);
    if (VAR_7 != ((void*)0))
 FUNC_0(VAR_7);
    if (VAR_8 != ((void*)0))
 FUNC_0(VAR_8);

    if (VAR_3->children != ((void*)0)) {
 FUNC_6(VAR_2, VAR_3->children);
    }
}
