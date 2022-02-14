
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_12__ {int options; char* version; scalar_t__ errNo; scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_11__ {int standalone; int * encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 char FUNC_2 (int) ;
 char VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (TYPE_2__*,int ,char*,char*,int *) ;

void
FUNC_13(xmlParserCtxtPtr VAR_14) {
    xmlChar *VAR_15;






    VAR_14->input->standalone = -2;




    FUNC_3(5);

    if (!FUNC_0(VAR_3)) {
 FUNC_5(VAR_14, VAR_6,
                "Blank needed after '<?xml'\n");
    }
    VAR_4;




    VAR_15 = FUNC_10(VAR_14);
    if (VAR_15 == ((void*)0)) {
 FUNC_4(VAR_14, VAR_9, ((void*)0));
    } else {
 if (!FUNC_11(VAR_15, (const xmlChar *) VAR_5)) {



     if (VAR_14->options & VAR_12) {
  FUNC_6(VAR_14, VAR_7,
             "Unsupported version '%s'\n",
             VAR_15);
     } else {
         if ((VAR_15[0] == '1') && ((VAR_15[1] == '.'))) {
      FUNC_12(VAR_14, VAR_13,
                    "Unsupported version '%s'\n",
      VAR_15, ((void*)0));
  } else {
      FUNC_6(VAR_14, VAR_7,
          "Unsupported version '%s'\n",
          VAR_15);
  }
     }
 }
 if (VAR_14->version != ((void*)0))
     FUNC_7((void *) VAR_14->version);
 VAR_14->version = VAR_15;
    }




    if (!FUNC_0(VAR_3)) {
        if ((VAR_3 == '?') && (FUNC_2(1) == '>')) {
     FUNC_3(2);
     return;
 }
 FUNC_5(VAR_14, VAR_6, "Blank needed here\n");
    }
    FUNC_8(VAR_14);
    if ((VAR_14->errNo == VAR_8) ||
         (VAR_14->instate == VAR_11)) {



        return;
    }




    if ((VAR_14->input->encoding != ((void*)0)) && (!FUNC_0(VAR_3))) {
        if ((VAR_3 == '?') && (FUNC_2(1) == '>')) {
     FUNC_3(2);
     return;
 }
 FUNC_5(VAR_14, VAR_6, "Blank needed here\n");
    }




    VAR_1;

    VAR_4;
    VAR_14->input->standalone = FUNC_9(VAR_14);

    VAR_4;
    if ((VAR_3 == '?') && (FUNC_2(1) == '>')) {
        FUNC_3(2);
    } else if (VAR_3 == '>') {

 FUNC_4(VAR_14, VAR_10, ((void*)0));
 VAR_2;
    } else {
 FUNC_4(VAR_14, VAR_10, ((void*)0));
 FUNC_1(VAR_0);
 VAR_2;
    }
}
