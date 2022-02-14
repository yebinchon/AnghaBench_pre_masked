
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef TYPE_2__* xmlEnumerationPtr ;
typedef int xmlChar ;
struct TYPE_12__ {struct TYPE_12__* next; int name; } ;
struct TYPE_11__ {int dict; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int const*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,char*,int const*,int *) ;

xmlEnumerationPtr
FUNC_9(xmlParserCtxtPtr VAR_8) {
    const xmlChar *VAR_9;
    xmlEnumerationPtr VAR_10 = ((void*)0), VAR_11 = ((void*)0), VAR_12, VAR_13;

    if (VAR_1 != '(') {
 FUNC_2(VAR_8, VAR_7, ((void*)0));
 return(((void*)0));
    }
    VAR_2;
    do {
        VAR_0;
 VAR_3;
        VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 == ((void*)0)) {
     FUNC_3(VAR_8, VAR_5,
      "Name expected in NOTATION declaration\n");
            FUNC_5(VAR_10);
     return(((void*)0));
 }
 VAR_13 = VAR_10;
 while (VAR_13 != ((void*)0)) {
     if (FUNC_7(VAR_9, VAR_13->name)) {
  FUNC_8(VAR_8, VAR_4,
   "standalone: attribute notation value token %s duplicated\n",
     VAR_9, ((void*)0));
  if (!FUNC_1(VAR_8->dict, VAR_9))
      FUNC_4((xmlChar *) VAR_9);
  break;
     }
     VAR_13 = VAR_13->next;
 }
 if (VAR_13 == ((void*)0)) {
     VAR_12 = FUNC_0(VAR_9);
     if (VAR_12 == ((void*)0)) {
                FUNC_5(VAR_10);
                return(((void*)0));
            }
     if (VAR_11 == ((void*)0)) VAR_10 = VAR_11 = VAR_12;
     else {
  VAR_11->next = VAR_12;
  VAR_11 = VAR_12;
     }
 }
 VAR_3;
    } while (VAR_1 == '|');
    if (VAR_1 != ')') {
 FUNC_2(VAR_8, VAR_6, ((void*)0));
        FUNC_5(VAR_10);
 return(((void*)0));
    }
    VAR_0;
    return(VAR_10);
}
