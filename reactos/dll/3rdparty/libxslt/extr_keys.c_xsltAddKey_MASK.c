
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltKeyDefPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef char xmlChar ;
struct TYPE_15__ {int doc; } ;
struct TYPE_14__ {char const* match; int nsNr; struct TYPE_14__* next; int * usecomp; int * comp; int ** nsList; TYPE_3__* inst; void* use; } ;
struct TYPE_13__ {TYPE_2__* keys; int errors; } ;


 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;
 int ** FUNC_3 (int ,TYPE_3__*) ;
 char* FUNC_4 (char*,char*) ;
 void* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,char*,char const*,...) ;
 int VAR_1 ;
 TYPE_2__* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_3__*,char*,...) ;
 void* FUNC_11 (TYPE_1__*,char const*) ;
 void* FUNC_12 (TYPE_1__*,char const*,int ) ;

int
FUNC_13(xsltStylesheetPtr VAR_2, const xmlChar *VAR_3,
    const xmlChar *VAR_4, const xmlChar *VAR_5,
    const xmlChar *VAR_6, xmlNodePtr VAR_7) {
    xsltKeyDefPtr VAR_8;
    xmlChar *VAR_9 = ((void*)0);
    int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
 return(-1);






    VAR_8 = FUNC_9(VAR_3, VAR_4);
    VAR_8->match = FUNC_5(VAR_5);
    VAR_8->use = FUNC_5(VAR_6);
    VAR_8->inst = VAR_7;
    VAR_8->nsList = FUNC_3(VAR_7->doc, VAR_7);
    if (VAR_8->nsList != ((void*)0)) {
        while (VAR_8->nsList[VAR_13] != ((void*)0))
     VAR_13++;
    }
    VAR_8->nsNr = VAR_13;




    VAR_10 = VAR_11 = 0;
    while (VAR_5[VAR_10] != 0) {
 VAR_12 = VAR_10;
 while (FUNC_0(VAR_5[VAR_10]))
     VAR_10++;
 VAR_11 = VAR_10;
 while ((VAR_5[VAR_11] != 0) && (VAR_5[VAR_11] != '|')) {
     if (VAR_5[VAR_11] == '[') {
         VAR_11 = FUNC_1(VAR_5, VAR_11);
  if (VAR_11 <= 0) {
      FUNC_10(((void*)0), VAR_2, VAR_7,
          "xsl:key : 'match' pattern is malformed: %s",
          VAR_8->match);
      if (VAR_2 != ((void*)0)) VAR_2->errors++;
      goto error;
  }
     } else
  VAR_11++;
 }
 if (VAR_10 == VAR_11) {
     FUNC_10(((void*)0), VAR_2, VAR_7,
          "xsl:key : 'match' pattern is empty\n");
     if (VAR_2 != ((void*)0)) VAR_2->errors++;
     goto error;
 }
 if (VAR_5[VAR_12] != '/') {
     VAR_9 = FUNC_4(VAR_9, (xmlChar *)"//");
     if (VAR_9 == ((void*)0)) {
  if (VAR_2 != ((void*)0)) VAR_2->errors++;
  goto error;
     }
 }
 VAR_9 = FUNC_6(VAR_9, &VAR_5[VAR_12], VAR_11 - VAR_12);
 if (VAR_9 == ((void*)0)) {
     if (VAR_2 != ((void*)0)) VAR_2->errors++;
     goto error;
 }

 if (VAR_5[VAR_11] == '|') {
     VAR_9 = FUNC_4(VAR_9, (xmlChar *)"|");
     VAR_11++;
 }
 VAR_10 = VAR_11;
    }
    if (VAR_9 == ((void*)0)) {
        FUNC_10(((void*)0), VAR_2, VAR_7,
                           "xsl:key : 'match' pattern is empty\n");
        if (VAR_2 != ((void*)0)) VAR_2->errors++;
        goto error;
    }
    VAR_8->comp = FUNC_11(VAR_2, VAR_9);

    if (VAR_8->comp == ((void*)0)) {
 FUNC_10(((void*)0), VAR_2, VAR_7,
  "xsl:key : 'match' pattern compilation failed '%s'\n",
           VAR_9);
 if (VAR_2 != ((void*)0)) VAR_2->errors++;
    }



    VAR_8->usecomp = FUNC_11(VAR_2, VAR_6);

    if (VAR_8->usecomp == ((void*)0)) {
 FUNC_10(((void*)0), VAR_2, VAR_7,
  "xsl:key : 'use' expression compilation failed '%s'\n",
           VAR_6);
 if (VAR_2 != ((void*)0)) VAR_2->errors++;
    }






    if (VAR_2->keys == ((void*)0)) {
 VAR_2->keys = VAR_8;
    } else {
        xsltKeyDefPtr VAR_14 = VAR_2->keys;

 while (VAR_14->next != ((void*)0))
     VAR_14 = VAR_14->next;

 VAR_14->next = VAR_8;
    }
    VAR_8->next = ((void*)0);
    VAR_8 = ((void*)0);

error:
    if (VAR_9 != ((void*)0))
 FUNC_2(VAR_9);
    if (VAR_8 != ((void*)0))
        FUNC_7(VAR_8);
    return(0);
}
