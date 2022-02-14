
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlElementContentPtr ;
typedef int xmlChar ;
struct TYPE_15__ {scalar_t__ ocur; scalar_t__ type; struct TYPE_15__* c2; struct TYPE_15__* c1; struct TYPE_15__* parent; } ;
struct TYPE_14__ {int options; scalar_t__ instate; TYPE_1__* input; int myDoc; } ;
struct TYPE_13__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int const*,scalar_t__) ;
 int* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static xmlElementContentPtr
FUNC_7(xmlParserCtxtPtr VAR_19, int VAR_20,
                                       int VAR_21) {
    xmlElementContentPtr VAR_22 = ((void*)0), VAR_23 = ((void*)0), VAR_24 = ((void*)0), VAR_25 = ((void*)0);
    const xmlChar *VAR_26;
    xmlChar VAR_27 = 0;

    if (((VAR_21 > 128) && ((VAR_19->options & VAR_18) == 0)) ||
        (VAR_21 > 2048)) {
        FUNC_3(VAR_19, VAR_13,
"xmlParseElementChildrenContentDecl : depth %d too deep, use XML_PARSE_HUGE\n",
                          VAR_21);
 return(((void*)0));
    }
    VAR_5;
    VAR_1;
    if (VAR_3 == '(') {
 int VAR_28 = VAR_19->input->id;


 VAR_2;
 VAR_5;
        VAR_23 = VAR_22 = FUNC_7(VAR_19, VAR_28,
                                                           VAR_21 + 1);
 VAR_5;
 VAR_1;
    } else {
 VAR_26 = FUNC_6(VAR_19);
 if (VAR_26 == ((void*)0)) {
     FUNC_1(VAR_19, VAR_14, ((void*)0));
     return(((void*)0));
 }
        VAR_23 = VAR_22 = FUNC_5(VAR_19->myDoc, VAR_26, VAR_6);
 if (VAR_23 == ((void*)0)) {
     FUNC_0(VAR_19, ((void*)0));
     return(((void*)0));
 }
 VAR_1;
 if (VAR_3 == '?') {
     VAR_23->ocur = VAR_9;
     VAR_2;
 } else if (VAR_3 == '*') {
     VAR_23->ocur = VAR_7;
     VAR_2;
 } else if (VAR_3 == '+') {
     VAR_23->ocur = VAR_11;
     VAR_2;
 } else {
     VAR_23->ocur = VAR_8;
 }
 VAR_1;
    }
    VAR_5;
    VAR_4;
    while ((VAR_3 != ')') && (VAR_19->instate != VAR_17)) {



        if (VAR_3 == ',') {
     if (VAR_27 == 0) VAR_27 = VAR_0;




     else if (VAR_27 != VAR_0) {
  FUNC_3(VAR_19, VAR_16,
      "xmlParseElementChildrenContentDecl : '%c' expected\n",
                    VAR_27);
  if ((VAR_24 != ((void*)0)) && (VAR_24 != VAR_22))
      FUNC_4(VAR_19->myDoc, VAR_24);
  if (VAR_22 != ((void*)0))
      FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     VAR_2;

     VAR_25 = FUNC_5(VAR_19->myDoc, ((void*)0), VAR_12);
     if (VAR_25 == ((void*)0)) {
  if ((VAR_24 != ((void*)0)) && (VAR_24 != VAR_22))
      FUNC_4(VAR_19->myDoc, VAR_24);
         FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     if (VAR_24 == ((void*)0)) {
  VAR_25->c1 = VAR_22;
  if (VAR_22 != ((void*)0))
      VAR_22->parent = VAR_25;
  VAR_22 = VAR_23 = VAR_25;
     } else {
         VAR_23->c2 = VAR_25;
  if (VAR_25 != ((void*)0))
      VAR_25->parent = VAR_23;
  VAR_25->c1 = VAR_24;
  if (VAR_24 != ((void*)0))
      VAR_24->parent = VAR_25;
  VAR_23 =VAR_25;
  VAR_24 = ((void*)0);
     }
 } else if (VAR_3 == '|') {
     if (VAR_27 == 0) VAR_27 = VAR_0;




     else if (VAR_27 != VAR_0) {
  FUNC_3(VAR_19, VAR_16,
      "xmlParseElementChildrenContentDecl : '%c' expected\n",
      VAR_27);
  if ((VAR_24 != ((void*)0)) && (VAR_24 != VAR_22))
      FUNC_4(VAR_19->myDoc, VAR_24);
  if (VAR_22 != ((void*)0))
      FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     VAR_2;

     VAR_25 = FUNC_5(VAR_19->myDoc, ((void*)0), VAR_10);
     if (VAR_25 == ((void*)0)) {
  if ((VAR_24 != ((void*)0)) && (VAR_24 != VAR_22))
      FUNC_4(VAR_19->myDoc, VAR_24);
  if (VAR_22 != ((void*)0))
      FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     if (VAR_24 == ((void*)0)) {
  VAR_25->c1 = VAR_22;
  if (VAR_22 != ((void*)0))
      VAR_22->parent = VAR_25;
  VAR_22 = VAR_23 = VAR_25;
     } else {
         VAR_23->c2 = VAR_25;
  if (VAR_25 != ((void*)0))
      VAR_25->parent = VAR_23;
  VAR_25->c1 = VAR_24;
  if (VAR_24 != ((void*)0))
      VAR_24->parent = VAR_25;
  VAR_23 =VAR_25;
  VAR_24 = ((void*)0);
     }
 } else {
     FUNC_1(VAR_19, VAR_13, ((void*)0));
     if ((VAR_24 != ((void*)0)) && (VAR_24 != VAR_22))
         FUNC_4(VAR_19->myDoc, VAR_24);
     if (VAR_22 != ((void*)0))
  FUNC_4(VAR_19->myDoc, VAR_22);
     return(((void*)0));
 }
 VAR_1;
 VAR_5;
 VAR_1;
 if (VAR_3 == '(') {
     int VAR_29 = VAR_19->input->id;

     VAR_2;
     VAR_5;
     VAR_24 = FUNC_7(VAR_19, VAR_29,
                                                          VAR_21 + 1);
     VAR_5;
 } else {
     VAR_26 = FUNC_6(VAR_19);
     if (VAR_26 == ((void*)0)) {
  FUNC_1(VAR_19, VAR_14, ((void*)0));
  if (VAR_22 != ((void*)0))
      FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     VAR_24 = FUNC_5(VAR_19->myDoc, VAR_26, VAR_6);
     if (VAR_24 == ((void*)0)) {
  if (VAR_22 != ((void*)0))
      FUNC_4(VAR_19->myDoc, VAR_22);
  return(((void*)0));
     }
     if (VAR_3 == '?') {
  VAR_24->ocur = VAR_9;
  VAR_2;
     } else if (VAR_3 == '*') {
  VAR_24->ocur = VAR_7;
  VAR_2;
     } else if (VAR_3 == '+') {
  VAR_24->ocur = VAR_11;
  VAR_2;
     } else {
  VAR_24->ocur = VAR_8;
     }
 }
 VAR_5;
 VAR_1;
    }
    if ((VAR_23 != ((void*)0)) && (VAR_24 != ((void*)0))) {
        VAR_23->c2 = VAR_24;
 if (VAR_24 != ((void*)0))
     VAR_24->parent = VAR_23;
    }
    if (VAR_19->input->id != VAR_20) {
 FUNC_2(VAR_19, VAR_15,
                       "Element content declaration doesn't start and stop in"
                       " the same entity\n");
    }
    VAR_2;
    if (VAR_3 == '?') {
 if (VAR_22 != ((void*)0)) {
     if ((VAR_22->ocur == VAR_11) ||
         (VAR_22->ocur == VAR_7))
         VAR_22->ocur = VAR_7;
     else
         VAR_22->ocur = VAR_9;
 }
 VAR_2;
    } else if (VAR_3 == '*') {
 if (VAR_22 != ((void*)0)) {
     VAR_22->ocur = VAR_7;
     VAR_23 = VAR_22;




     while ((VAR_23 != ((void*)0)) && (VAR_23->type == VAR_10)) {
  if ((VAR_23->c1 != ((void*)0)) &&
             ((VAR_23->c1->ocur == VAR_9) ||
       (VAR_23->c1->ocur == VAR_7)))
      VAR_23->c1->ocur = VAR_8;
  if ((VAR_23->c2 != ((void*)0)) &&
             ((VAR_23->c2->ocur == VAR_9) ||
       (VAR_23->c2->ocur == VAR_7)))
      VAR_23->c2->ocur = VAR_8;
  VAR_23 = VAR_23->c2;
     }
 }
 VAR_2;
    } else if (VAR_3 == '+') {
 if (VAR_22 != ((void*)0)) {
     int VAR_30 = 0;

     if ((VAR_22->ocur == VAR_9) ||
         (VAR_22->ocur == VAR_7))
         VAR_22->ocur = VAR_7;
     else
         VAR_22->ocur = VAR_11;





     while ((VAR_23 != ((void*)0)) && (VAR_23->type == VAR_10)) {
  if ((VAR_23->c1 != ((void*)0)) &&
             ((VAR_23->c1->ocur == VAR_9) ||
       (VAR_23->c1->ocur == VAR_7))) {
      VAR_23->c1->ocur = VAR_8;
      VAR_30 = 1;
  }
  if ((VAR_23->c2 != ((void*)0)) &&
             ((VAR_23->c2->ocur == VAR_9) ||
       (VAR_23->c2->ocur == VAR_7))) {
      VAR_23->c2->ocur = VAR_8;
      VAR_30 = 1;
  }
  VAR_23 = VAR_23->c2;
     }
     if (VAR_30)
  VAR_22->ocur = VAR_7;
 }
 VAR_2;
    }
    return(VAR_22);
}
