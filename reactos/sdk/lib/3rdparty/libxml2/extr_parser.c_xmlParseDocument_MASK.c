
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef TYPE_4__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlCharEncoding ;
typedef char xmlChar ;
struct TYPE_21__ {scalar_t__ instate; scalar_t__ errNo; int inSubset; int options; scalar_t__ valid; scalar_t__ wellFormed; TYPE_12__* myDoc; scalar_t__ nsWellFormed; int userData; TYPE_3__* sax; int extSubURI; int extSubSystem; int intSubName; int disableSAX; TYPE_2__* input; int version; int standalone; int * encoding; } ;
struct TYPE_20__ {int (* endDocument ) (int ) ;int (* externalSubset ) (int ,int ,int ,int ) ;int (* startDocument ) (int ) ;int (* setDocumentLocator ) (int ,int *) ;} ;
struct TYPE_19__ {int end; int cur; TYPE_1__* buf; int standalone; } ;
struct TYPE_18__ {scalar_t__ compressed; } ;
struct TYPE_17__ {scalar_t__ compression; int properties; int version; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char) ;
 scalar_t__ FUNC_1 (int ,char,char,char,char,char,char,char,char,char) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char) ;
 char FUNC_3 (int) ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_21 ;
 scalar_t__ FUNC_10 (char*,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int ,int *) ;
 int FUNC_13 (TYPE_4__*,int ,char*) ;
 int FUNC_14 (TYPE_12__*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_4__*,scalar_t__) ;

int
FUNC_23(xmlParserCtxtPtr VAR_22) {
    xmlChar VAR_23[4];
    xmlCharEncoding VAR_24;

    FUNC_15();

    if ((VAR_22 == ((void*)0)) || (VAR_22->input == ((void*)0)))
        return(-1);

    VAR_2;




    FUNC_11(VAR_22);




    if ((VAR_22->sax) && (VAR_22->sax->setDocumentLocator))
        VAR_22->sax->setDocumentLocator(VAR_22->userData, &VAR_21);
    if (VAR_22->instate == VAR_17)
 return(-1);

    if ((VAR_22->encoding == ((void*)0)) &&
        ((VAR_22->input->end - VAR_22->input->cur) >= 4)) {





 VAR_23[0] = VAR_3;
 VAR_23[1] = FUNC_3(1);
 VAR_23[2] = FUNC_3(2);
 VAR_23[3] = FUNC_3(3);
 VAR_24 = FUNC_10(&VAR_23[0], 4);
 if (VAR_24 != VAR_6) {
     FUNC_22(VAR_22, VAR_24);
 }
    }


    if (VAR_0 == 0) {
 FUNC_12(VAR_22, VAR_12, ((void*)0));
 return(-1);
    }







    if ((VAR_22->input->end - VAR_22->input->cur) < 35) {
       VAR_2;
    }
    if ((FUNC_0(VAR_1, '<', '?', 'x', 'm', 'l')) && (FUNC_2(FUNC_3(5)))) {




 FUNC_20(VAR_22);
 if ((VAR_22->errNo == VAR_14) ||
     (VAR_22->instate == VAR_17)) {



     return(-1);
 }
 VAR_22->standalone = VAR_22->input->standalone;
 VAR_5;
    } else {
 VAR_22->version = FUNC_8(VAR_7);
    }
    if ((VAR_22->sax) && (VAR_22->sax->startDocument) && (!VAR_22->disableSAX))
        VAR_22->sax->startDocument(VAR_22->userData);
    if (VAR_22->instate == VAR_17)
 return(-1);
    if ((VAR_22->myDoc != ((void*)0)) && (VAR_22->input != ((void*)0)) &&
        (VAR_22->input->buf != ((void*)0)) && (VAR_22->input->buf->compressed >= 0)) {
 VAR_22->myDoc->compression = VAR_22->input->buf->compressed;
    }




    VAR_2;
    FUNC_19(VAR_22);





    VAR_2;
    if (FUNC_1(VAR_1, '<', '!', 'D', 'O', 'C', 'T', 'Y', 'P', 'E')) {

 VAR_22->inSubset = 1;
 FUNC_16(VAR_22);
 if (VAR_3 == '[') {
     VAR_22->instate = VAR_16;
     FUNC_18(VAR_22);
     if (VAR_22->instate == VAR_17)
  return(-1);
 }




 VAR_22->inSubset = 2;
 if ((VAR_22->sax != ((void*)0)) && (VAR_22->sax->externalSubset != ((void*)0)) &&
     (!VAR_22->disableSAX))
     VAR_22->sax->externalSubset(VAR_22->userData, VAR_22->intSubName,
                               VAR_22->extSubSystem, VAR_22->extSubURI);
 if (VAR_22->instate == VAR_17)
     return(-1);
 VAR_22->inSubset = 0;

        FUNC_9(VAR_22);

 VAR_22->instate = VAR_19;
 FUNC_19(VAR_22);
    }




    VAR_2;
    if (VAR_3 != '<') {
 FUNC_13(VAR_22, VAR_12,
         "Start tag expected, '<' not found\n");
    } else {
 VAR_22->instate = VAR_15;
 FUNC_17(VAR_22);
 VAR_22->instate = VAR_18;





 FUNC_19(VAR_22);

 if (VAR_3 != 0) {
     FUNC_12(VAR_22, VAR_13, ((void*)0));
 }
 VAR_22->instate = VAR_17;
    }




    if ((VAR_22->sax) && (VAR_22->sax->endDocument != ((void*)0)))
        VAR_22->sax->endDocument(VAR_22->userData);




    if ((VAR_22->myDoc != ((void*)0)) &&
 (FUNC_21(VAR_22->myDoc->version, VAR_4))) {
 FUNC_14(VAR_22->myDoc);
 VAR_22->myDoc = ((void*)0);
    }

    if ((VAR_22->wellFormed) && (VAR_22->myDoc != ((void*)0))) {
        VAR_22->myDoc->properties |= VAR_11;
 if (VAR_22->valid)
     VAR_22->myDoc->properties |= VAR_8;
 if (VAR_22->nsWellFormed)
     VAR_22->myDoc->properties |= VAR_9;
 if (VAR_22->options & VAR_20)
     VAR_22->myDoc->properties |= VAR_10;
    }
    if (! VAR_22->wellFormed) {
 VAR_22->valid = 0;
 return(-1);
    }
    return(0);
}
