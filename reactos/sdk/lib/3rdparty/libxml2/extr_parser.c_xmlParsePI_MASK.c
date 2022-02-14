
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ xmlParserInputState ;
typedef TYPE_3__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
typedef scalar_t__ xmlCatalogAllow ;
struct TYPE_13__ {scalar_t__ instate; int options; int userData; TYPE_2__* sax; int disableSAX; TYPE_1__* input; } ;
struct TYPE_12__ {int (* processingInstruction ) (int ,scalar_t__ const*,scalar_t__*) ;} ;
struct TYPE_11__ {int id; } ;


 int FUNC_0 (int,scalar_t__*,size_t,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char FUNC_4 (int) ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,scalar_t__ const*,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__ const*,scalar_t__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int ,int *) ;
 int FUNC_11 (TYPE_3__*,int ,char*) ;
 int FUNC_12 (TYPE_3__*,int ,char*,scalar_t__ const*) ;
 int FUNC_13 (scalar_t__*) ;
 scalar_t__ FUNC_14 (size_t) ;
 int FUNC_15 (TYPE_3__*,scalar_t__*) ;
 scalar_t__* FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_18 (scalar_t__ const*,int ) ;

void
FUNC_19(xmlParserCtxtPtr VAR_18) {
    xmlChar *VAR_19 = ((void*)0);
    size_t VAR_20 = 0;
    size_t VAR_21 = VAR_12;
    int VAR_22, VAR_23;
    const xmlChar *VAR_24;
    xmlParserInputState VAR_25;
    int VAR_26 = 0;

    if ((VAR_1 == '<') && (FUNC_4(1) == '?')) {
 int VAR_27 = VAR_18->input->id;
 VAR_25 = VAR_18->instate;
        VAR_18->instate = VAR_15;



 FUNC_5(2);
 VAR_2;





        VAR_24 = FUNC_16(VAR_18);
 if (VAR_24 != ((void*)0)) {
     if ((VAR_1 == '?') && (FUNC_4(1) == '>')) {
  if (VAR_27 != VAR_18->input->id) {
      FUNC_11(VAR_18, VAR_7,
                            "PI declaration doesn't start and stop in"
                                   " the same entity\n");
  }
  FUNC_5(2);




  if ((VAR_18->sax) && (!VAR_18->disableSAX) &&
      (VAR_18->sax->processingInstruction != ((void*)0)))
      VAR_18->sax->processingInstruction(VAR_18->userData,
                                       VAR_24, ((void*)0));
  if (VAR_18->instate != VAR_13)
      VAR_18->instate = VAR_25;
  return;
     }
     VAR_19 = (xmlChar *) FUNC_14(VAR_21 * sizeof(xmlChar));
     if (VAR_19 == ((void*)0)) {
  FUNC_9(VAR_18, ((void*)0));
  VAR_18->instate = VAR_25;
  return;
     }
     if (VAR_3 == 0) {
  FUNC_12(VAR_18, VAR_10,
     "ParsePI: PI %s space expected\n", VAR_24);
     }
     VAR_22 = FUNC_1(VAR_23);
     while (FUNC_2(VAR_22) &&
     ((VAR_22 != '?') || (FUNC_4(1) != '>'))) {
  if (VAR_20 + 5 >= VAR_21) {
      xmlChar *VAR_28;
                    size_t VAR_29 = VAR_21 * 2;
      VAR_28 = (xmlChar *) FUNC_17(VAR_19, VAR_29);
      if (VAR_28 == ((void*)0)) {
   FUNC_9(VAR_18, ((void*)0));
   FUNC_13(VAR_19);
   VAR_18->instate = VAR_25;
   return;
      }
      VAR_19 = VAR_28;
                    VAR_21 = VAR_29;
  }
  VAR_26++;
  if (VAR_26 > 50) {
      VAR_0;
                    if (VAR_18->instate == VAR_13) {
                        FUNC_13(VAR_19);
                        return;
                    }
      VAR_26 = 0;
                    if ((VAR_20 > VAR_11) &&
                        ((VAR_18->options & VAR_17) == 0)) {
                        FUNC_12(VAR_18, VAR_8,
                                          "PI %s too big found", VAR_24);
                        FUNC_13(VAR_19);
                        VAR_18->instate = VAR_25;
                        return;
                    }
  }
  FUNC_0(VAR_23,VAR_19,VAR_20,VAR_22);
  FUNC_3(VAR_23);
  VAR_22 = FUNC_1(VAR_23);
  if (VAR_22 == 0) {
      VAR_2;
      VAR_0;
      VAR_22 = FUNC_1(VAR_23);
  }
     }
            if ((VAR_20 > VAR_11) &&
                ((VAR_18->options & VAR_17) == 0)) {
                FUNC_12(VAR_18, VAR_8,
                                  "PI %s too big found", VAR_24);
                FUNC_13(VAR_19);
                VAR_18->instate = VAR_25;
                return;
            }
     VAR_19[VAR_20] = 0;
     if (VAR_22 != '?') {
  FUNC_12(VAR_18, VAR_8,
        "ParsePI: PI %s never end ...\n", VAR_24);
     } else {
  if (VAR_27 != VAR_18->input->id) {
      FUNC_11(VAR_18, VAR_7,
                            "PI declaration doesn't start and stop in"
                                   " the same entity\n");
  }
  FUNC_5(2);
  if ((VAR_18->sax) && (!VAR_18->disableSAX) &&
      (VAR_18->sax->processingInstruction != ((void*)0)))
      VAR_18->sax->processingInstruction(VAR_18->userData,
                                       VAR_24, VAR_19);
     }
     FUNC_13(VAR_19);
 } else {
     FUNC_10(VAR_18, VAR_9, ((void*)0));
 }
 if (VAR_18->instate != VAR_13)
     VAR_18->instate = VAR_25;
    }
}
