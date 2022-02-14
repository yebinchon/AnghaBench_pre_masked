
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_9__ {scalar_t__ errNo; TYPE_1__* input; } ;
struct TYPE_8__ {int * version; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 char FUNC_3 (int) ;
 char VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int * FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (TYPE_2__*) ;

void
FUNC_10(xmlParserCtxtPtr VAR_11) {
    xmlChar *VAR_12;
    const xmlChar *VAR_13;




    if ((FUNC_0(VAR_0, '<', '?', 'x', 'm', 'l')) && (FUNC_1(FUNC_3(5)))) {
 FUNC_4(5);
    } else {
 FUNC_6(VAR_11, VAR_10, ((void*)0));
 return;
    }

    if (VAR_3 == 0) {
 FUNC_7(VAR_11, VAR_7,
         "Space needed after '<?xml'\n");
    }




    VAR_12 = FUNC_9(VAR_11);
    if (VAR_12 == ((void*)0))
 VAR_12 = FUNC_5(VAR_4);
    else {
 if (VAR_3 == 0) {
     FUNC_7(VAR_11, VAR_7,
             "Space needed here\n");
 }
    }
    VAR_11->input->version = VAR_12;




    VAR_13 = FUNC_8(VAR_11);
    if (VAR_11->errNo == VAR_8) {



        return;
    }
    if ((VAR_13 == ((void*)0)) && (VAR_11->errNo == VAR_6)) {
 FUNC_7(VAR_11, VAR_5,
         "Missing encoding in text declaration\n");
    }

    VAR_3;
    if ((VAR_2 == '?') && (FUNC_3(1) == '>')) {
        FUNC_4(2);
    } else if (VAR_2 == '>') {

 FUNC_6(VAR_11, VAR_9, ((void*)0));
 VAR_1;
    } else {
 FUNC_6(VAR_11, VAR_9, ((void*)0));
 FUNC_2(VAR_0);
 VAR_1;
    }
}
