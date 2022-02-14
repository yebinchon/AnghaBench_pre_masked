
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int * xmlEnumerationPtr ;
typedef int xmlChar ;
struct TYPE_13__ {scalar_t__ instate; TYPE_2__* input; scalar_t__ sax2; int userData; TYPE_1__* sax; int disableSAX; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {int (* attributeDecl ) (int ,int const*,int const*,int,int,int *,int *) ;} ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int const*,int const*,int,int,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int const*,int const*,int *) ;
 int FUNC_4 (TYPE_3__*,int const*,int const*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int **) ;
 int FUNC_10 (TYPE_3__*,int **) ;
 int * FUNC_11 (TYPE_3__*) ;

void
FUNC_12(xmlParserCtxtPtr VAR_12) {
    const xmlChar *VAR_13;
    const xmlChar *VAR_14;
    xmlEnumerationPtr VAR_15;

    if (FUNC_0(VAR_0, '<', '!', 'A', 'T', 'T', 'L', 'I', 'S', 'T')) {
 int VAR_16 = VAR_12->input->id;

 FUNC_1(9);
 if (VAR_4 == 0) {
     FUNC_6(VAR_12, VAR_10,
                   "Space required after '<!ATTLIST'\n");
 }
        VAR_13 = FUNC_11(VAR_12);
 if (VAR_13 == ((void*)0)) {
     FUNC_6(VAR_12, VAR_9,
      "ATTLIST: no name for Element\n");
     return;
 }
 VAR_4;
 VAR_1;
 while ((VAR_3 != '>') && (VAR_12->instate != VAR_11)) {
     int VAR_17;
     int VAR_18;
     xmlChar *VAR_19 = ((void*)0);

     VAR_1;
            VAR_15 = ((void*)0);
     VAR_14 = FUNC_11(VAR_12);
     if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_12, VAR_9,
          "ATTLIST: no name for Attribute\n");
  break;
     }
     VAR_1;
     if (VAR_4 == 0) {
  FUNC_6(VAR_12, VAR_10,
          "Space required after the attribute name\n");
  break;
     }

     VAR_17 = FUNC_9(VAR_12, &VAR_15);
     if (VAR_17 <= 0) {
         break;
     }

     VAR_1;
     if (VAR_4 == 0) {
  FUNC_6(VAR_12, VAR_10,
          "Space required after the attribute type\n");
         if (VAR_15 != ((void*)0))
      FUNC_8(VAR_15);
  break;
     }

     VAR_18 = FUNC_10(VAR_12, &VAR_19);
     if (VAR_18 <= 0) {
                if (VAR_19 != ((void*)0))
      FUNC_7(VAR_19);
         if (VAR_15 != ((void*)0))
      FUNC_8(VAR_15);
         break;
     }
     if ((VAR_17 != VAR_5) && (VAR_19 != ((void*)0)))
         FUNC_5(VAR_19, VAR_19);

     VAR_1;
            if (VAR_3 != '>') {
  if (VAR_4 == 0) {
      FUNC_6(VAR_12, VAR_10,
   "Space required after the attribute default value\n");
      if (VAR_19 != ((void*)0))
   FUNC_7(VAR_19);
      if (VAR_15 != ((void*)0))
   FUNC_8(VAR_15);
      break;
  }
     }
     if ((VAR_12->sax != ((void*)0)) && (!VAR_12->disableSAX) &&
  (VAR_12->sax->attributeDecl != ((void*)0)))
  VAR_12->sax->attributeDecl(VAR_12->userData, VAR_13, VAR_14,
                         VAR_17, VAR_18, VAR_19, VAR_15);
     else if (VAR_15 != ((void*)0))
  FUNC_8(VAR_15);

     if ((VAR_12->sax2) && (VAR_19 != ((void*)0)) &&
         (VAR_18 != VAR_6) &&
  (VAR_18 != VAR_7)) {
  FUNC_3(VAR_12, VAR_13, VAR_14, VAR_19);
     }
     if (VAR_12->sax2) {
  FUNC_4(VAR_12, VAR_13, VAR_14, VAR_17);
     }
     if (VAR_19 != ((void*)0))
         FUNC_7(VAR_19);
     VAR_1;
 }
 if (VAR_3 == '>') {
     if (VAR_16 != VAR_12->input->id) {
  FUNC_6(VAR_12, VAR_8,
                               "Attribute list declaration doesn't start and"
                               " stop in the same entity\n");
     }
     VAR_2;
 }
    }
}
