
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef TYPE_4__* xmlElementContentPtr ;
typedef int xmlChar ;
struct TYPE_16__ {int * parent; } ;
struct TYPE_15__ {scalar_t__ external; int inputNr; int myDoc; int userData; TYPE_2__* sax; int disableSAX; TYPE_1__* input; } ;
struct TYPE_14__ {int (* elementDecl ) (int ,int const*,int,TYPE_4__*) ;} ;
struct TYPE_13__ {int id; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char) ;
 scalar_t__ FUNC_1 (int ,char,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_2 (int) ;
 char VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int const*,int,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,int const*,TYPE_4__**) ;
 int * FUNC_9 (TYPE_3__*) ;

int
FUNC_10(xmlParserCtxtPtr VAR_12) {
    const xmlChar *VAR_13;
    int VAR_14 = -1;
    xmlElementContentPtr VAR_15 = ((void*)0);


    if (FUNC_1(VAR_0, '<', '!', 'E', 'L', 'E', 'M', 'E', 'N', 'T')) {
 int VAR_16 = VAR_12->input->id;

 FUNC_3(9);
 if (VAR_3 == 0) {
     FUNC_6(VAR_12, VAR_11,
             "Space required after 'ELEMENT'\n");
     return(-1);
 }
        VAR_13 = FUNC_9(VAR_12);
 if (VAR_13 == ((void*)0)) {
     FUNC_6(VAR_12, VAR_9,
      "xmlParseElementDecl: no name for Element\n");
     return(-1);
 }
 if (VAR_3 == 0) {
     FUNC_6(VAR_12, VAR_11,
      "Space required after the element name\n");
 }
 if (FUNC_0(VAR_0, 'E', 'M', 'P', 'T', 'Y')) {
     FUNC_3(5);



     VAR_14 = VAR_5;
 } else if ((VAR_2 == 'A') && (FUNC_2(1) == 'N') &&
            (FUNC_2(2) == 'Y')) {
     FUNC_3(3);



     VAR_14 = VAR_4;
 } else if (VAR_2 == '(') {
     VAR_14 = FUNC_8(VAR_12, VAR_13, &VAR_15);
 } else {



     if ((VAR_2 == '%') && (VAR_12->external == 0) &&
         (VAR_12->inputNr == 1)) {
  FUNC_6(VAR_12, VAR_10,
   "PEReference: forbidden within markup decl in internal subset\n");
     } else {
  FUNC_6(VAR_12, VAR_6,
        "xmlParseElementDecl: 'EMPTY', 'ANY' or '(' expected\n");
            }
     return(-1);
 }

 VAR_3;

 if (VAR_2 != '>') {
     FUNC_5(VAR_12, VAR_8, ((void*)0));
     if (VAR_15 != ((void*)0)) {
  FUNC_7(VAR_12->myDoc, VAR_15);
     }
 } else {
     if (VAR_16 != VAR_12->input->id) {
  FUNC_6(VAR_12, VAR_7,
                               "Element declaration doesn't start and stop in"
                               " the same entity\n");
     }

     VAR_1;
     if ((VAR_12->sax != ((void*)0)) && (!VAR_12->disableSAX) &&
  (VAR_12->sax->elementDecl != ((void*)0))) {
  if (VAR_15 != ((void*)0))
      VAR_15->parent = ((void*)0);
         VAR_12->sax->elementDecl(VAR_12->userData, VAR_13, VAR_14,
                         VAR_15);
  if ((VAR_15 != ((void*)0)) && (VAR_15->parent == ((void*)0))) {






      FUNC_7(VAR_12->myDoc, VAR_15);
  }
     } else if (VAR_15 != ((void*)0)) {
  FUNC_7(VAR_12->myDoc, VAR_15);
     }
 }
    }
    return(VAR_14);
}
