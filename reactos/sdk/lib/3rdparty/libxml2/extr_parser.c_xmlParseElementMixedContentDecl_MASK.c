
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlElementContentPtr ;
typedef int xmlChar ;
struct TYPE_12__ {void* ocur; struct TYPE_12__* parent; struct TYPE_12__* c2; struct TYPE_12__* c1; } ;
struct TYPE_11__ {scalar_t__ instate; int myDoc; TYPE_1__* input; } ;
struct TYPE_10__ {int id; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_1 (int) ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 void* FUNC_6 (int ,int const*,int ) ;
 int * FUNC_7 (TYPE_2__*) ;

xmlElementContentPtr
FUNC_8(xmlParserCtxtPtr VAR_15, int VAR_16) {
    xmlElementContentPtr VAR_17 = ((void*)0), VAR_18 = ((void*)0), VAR_19;
    const xmlChar *VAR_20 = ((void*)0);

    VAR_1;
    if (FUNC_0(VAR_0, '#', 'P', 'C', 'D', 'A', 'T', 'A')) {
 FUNC_2(7);
 VAR_5;
 VAR_4;
 if (VAR_3 == ')') {
     if (VAR_15->input->id != VAR_16) {
  FUNC_4(VAR_15, VAR_10,
                               "Element content declaration doesn't start and"
                               " stop in the same entity\n");
     }
     VAR_2;
     VAR_17 = FUNC_6(VAR_15->myDoc, ((void*)0), VAR_9);
     if (VAR_17 == ((void*)0))
         return(((void*)0));
     if (VAR_3 == '*') {
  VAR_17->ocur = VAR_7;
  VAR_2;
     }
     return(VAR_17);
 }
 if ((VAR_3 == '(') || (VAR_3 == '|')) {
     VAR_17 = VAR_18 = FUNC_6(VAR_15->myDoc, ((void*)0), VAR_9);
     if (VAR_17 == ((void*)0)) return(((void*)0));
 }
 while ((VAR_3 == '|') && (VAR_15->instate != VAR_14)) {
     VAR_2;
     if (VAR_20 == ((void*)0)) {
         VAR_17 = FUNC_6(VAR_15->myDoc, ((void*)0), VAR_8);
  if (VAR_17 == ((void*)0)) return(((void*)0));
  VAR_17->c1 = VAR_18;
  if (VAR_18 != ((void*)0))
      VAR_18->parent = VAR_17;
  VAR_18 = VAR_17;
     } else {
         VAR_19 = FUNC_6(VAR_15->myDoc, ((void*)0), VAR_8);
  if (VAR_19 == ((void*)0)) return(((void*)0));
  VAR_19->c1 = FUNC_6(VAR_15->myDoc, VAR_20, VAR_6);
  if (VAR_19->c1 != ((void*)0))
      VAR_19->c1->parent = VAR_19;
         VAR_18->c2 = VAR_19;
  if (VAR_19 != ((void*)0))
      VAR_19->parent = VAR_18;
  VAR_18 = VAR_19;
     }
     VAR_5;
     VAR_20 = FUNC_7(VAR_15);
     if (VAR_20 == ((void*)0)) {
  FUNC_4(VAR_15, VAR_12,
   "xmlParseElementMixedContentDecl : Name expected\n");
  FUNC_5(VAR_15->myDoc, VAR_17);
  return(((void*)0));
     }
     VAR_5;
     VAR_1;
 }
 if ((VAR_3 == ')') && (FUNC_1(1) == '*')) {
     if (VAR_20 != ((void*)0)) {
  VAR_18->c2 = FUNC_6(VAR_15->myDoc, VAR_20,
                                 VAR_6);
  if (VAR_18->c2 != ((void*)0))
      VAR_18->c2->parent = VAR_18;
            }
            if (VAR_17 != ((void*)0))
                VAR_17->ocur = VAR_7;
     if (VAR_15->input->id != VAR_16) {
  FUNC_4(VAR_15, VAR_10,
                               "Element content declaration doesn't start and"
                               " stop in the same entity\n");
     }
     FUNC_2(2);
 } else {
     FUNC_5(VAR_15->myDoc, VAR_17);
     FUNC_3(VAR_15, VAR_11, ((void*)0));
     return(((void*)0));
 }

    } else {
 FUNC_3(VAR_15, VAR_13, ((void*)0));
    }
    return(VAR_17);
}
