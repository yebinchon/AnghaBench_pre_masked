
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlCharEncoding ;
typedef char xmlChar ;
struct TYPE_12__ {scalar_t__ errNo; scalar_t__ instate; int wellFormed; int userData; TYPE_2__* sax; scalar_t__ depth; scalar_t__ loadsubset; scalar_t__ validate; int disableSAX; int version; TYPE_1__* input; } ;
struct TYPE_11__ {int (* endDocument ) (int ) ;int (* startDocument ) (int ) ;int (* setDocumentLocator ) (int ,int *) ;} ;
struct TYPE_10__ {int end; int cur; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (int) ;
 char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,scalar_t__) ;

int
FUNC_14(xmlParserCtxtPtr VAR_14) {
    xmlChar VAR_15[4];
    xmlCharEncoding VAR_16;

    if ((VAR_14 == ((void*)0)) || (VAR_14->input == ((void*)0)))
        return(-1);

    FUNC_7();

    FUNC_9(VAR_14);

    VAR_2;




    if ((VAR_14->sax) && (VAR_14->sax->setDocumentLocator))
        VAR_14->sax->setDocumentLocator(VAR_14->userData, &VAR_13);






    if ((VAR_14->input->end - VAR_14->input->cur) >= 4) {
 VAR_15[0] = VAR_3;
 VAR_15[1] = FUNC_2(1);
 VAR_15[2] = FUNC_2(2);
 VAR_15[3] = FUNC_2(3);
 VAR_16 = FUNC_8(VAR_15, 4);
 if (VAR_16 != VAR_5) {
     FUNC_13(VAR_14, VAR_16);
 }
    }


    if (VAR_0 == 0) {
 FUNC_10(VAR_14, VAR_7, ((void*)0));
    }




    VAR_2;
    if ((FUNC_0(VAR_1, '<', '?', 'x', 'm', 'l')) && (FUNC_1(FUNC_2(5)))) {




 FUNC_12(VAR_14);
 if (VAR_14->errNo == VAR_10) {



     return(-1);
 }
 VAR_4;
    } else {
 VAR_14->version = FUNC_6(VAR_6);
    }
    if ((VAR_14->sax) && (VAR_14->sax->startDocument) && (!VAR_14->disableSAX))
        VAR_14->sax->startDocument(VAR_14->userData);
    if (VAR_14->instate == VAR_12)
 return(-1);




    VAR_14->instate = VAR_11;
    VAR_14->validate = 0;
    VAR_14->loadsubset = 0;
    VAR_14->depth = 0;

    FUNC_11(VAR_14);
    if (VAR_14->instate == VAR_12)
 return(-1);

    if ((VAR_3 == '<') && (FUNC_2(1) == '/')) {
 FUNC_10(VAR_14, VAR_9, ((void*)0));
    } else if (VAR_3 != 0) {
 FUNC_10(VAR_14, VAR_8, ((void*)0));
    }




    if ((VAR_14->sax) && (VAR_14->sax->endDocument != ((void*)0)))
        VAR_14->sax->endDocument(VAR_14->userData);

    if (! VAR_14->wellFormed) return(-1);
    return(0);
}
