
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {int begin_line; int end_line; int * node; void* end_pos; void* begin_pos; } ;
typedef TYPE_3__ xmlParserNodeInfo ;
typedef TYPE_4__* xmlParserCtxtPtr ;
typedef int * xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_27__ {scalar_t__ children; } ;
struct TYPE_26__ {int nsNr; int options; scalar_t__ spaceNr; int* space; scalar_t__ instate; scalar_t__ node; TYPE_2__* input; scalar_t__ record_info; scalar_t__ sax2; int userData; TYPE_1__* sax; int disableSAX; TYPE_5__* myDoc; int vctxt; int valid; scalar_t__ wellFormed; scalar_t__ validate; scalar_t__ nameNr; } ;
struct TYPE_24__ {void* consumed; void* base; int line; } ;
struct TYPE_23__ {int (* endElement ) (int ,int const*) ;int (* endElementNs ) (int ,int const*,int const*,int const*) ;} ;


 void* VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 char FUNC_1 (int) ;
 char VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int const*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int ,int const*,int const*,int const*) ;
 int FUNC_10 (int ,int const*) ;
 int FUNC_11 (TYPE_4__*,int ,char*,unsigned int) ;
 int FUNC_12 (TYPE_4__*,int ,char*,int const*,int,int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,int) ;
 int FUNC_16 (TYPE_4__*,int const*,int const*,int,int,int) ;
 int * FUNC_17 (TYPE_4__*) ;
 int * FUNC_18 (TYPE_4__*,int const**,int const**,int*) ;
 int FUNC_19 (TYPE_4__*,TYPE_3__*) ;
 unsigned int VAR_8 ;
 int FUNC_20 (int *,TYPE_5__*) ;

void
FUNC_21(xmlParserCtxtPtr VAR_9) {
    const xmlChar *VAR_10;
    const xmlChar *VAR_11 = ((void*)0);
    const xmlChar *VAR_12 = ((void*)0);
    xmlParserNodeInfo VAR_13;
    int VAR_14, VAR_15 = 0;
    xmlNodePtr VAR_16;
    int VAR_17 = VAR_9->nsNr;

    if (((unsigned int) VAR_9->nameNr > VAR_8) &&
        ((VAR_9->options & VAR_7) == 0)) {
 FUNC_11(VAR_9, VAR_4,
   "Excessive depth in document: %d use XML_PARSE_HUGE option\n",
     VAR_8);
 FUNC_13(VAR_9);
 return;
    }


    if (VAR_9->record_info) {
        VAR_13.begin_pos = VAR_9->input->consumed +
                          (VAR_0 - VAR_9->input->base);
 VAR_13.begin_line = VAR_9->input->line;
    }

    if (VAR_9->spaceNr == 0)
 FUNC_8(VAR_9, -1);
    else if (*VAR_9->space == -2)
 FUNC_8(VAR_9, -1);
    else
 FUNC_8(VAR_9, *VAR_9->space);

    VAR_14 = VAR_9->input->line;



        VAR_10 = FUNC_18(VAR_9, &VAR_11, &VAR_12, &VAR_15);




    if (VAR_9->instate == VAR_6)
 return;
    if (VAR_10 == ((void*)0)) {
 FUNC_7(VAR_9);
        return;
    }
    FUNC_4(VAR_9, VAR_10);
    VAR_16 = VAR_9->node;
    if ((VAR_2 == '/') && (FUNC_1(1) == '>')) {
        FUNC_2(2);
 if (VAR_9->sax2) {
     if ((VAR_9->sax != ((void*)0)) && (VAR_9->sax->endElementNs != ((void*)0)) &&
  (!VAR_9->disableSAX))
  VAR_9->sax->endElementNs(VAR_9->userData, VAR_10, VAR_11, VAR_12);






 }
 FUNC_3(VAR_9);
 FUNC_7(VAR_9);
 if (VAR_17 != VAR_9->nsNr)
     FUNC_6(VAR_9, VAR_9->nsNr - VAR_17);
 if ( VAR_16 != ((void*)0) && VAR_9->record_info ) {
    VAR_13.end_pos = VAR_9->input->consumed +
         (VAR_0 - VAR_9->input->base);
    VAR_13.end_line = VAR_9->input->line;
    VAR_13.node = VAR_16;
    FUNC_19(VAR_9, &VAR_13);
 }
 return;
    }
    if (VAR_2 == '>') {
        VAR_1;
    } else {
        FUNC_12(VAR_9, VAR_3,
       "Couldn't find end of Start Tag %s line %d\n",
                  VAR_10, VAR_14, ((void*)0));




 FUNC_5(VAR_9);
 FUNC_3(VAR_9);
 FUNC_7(VAR_9);
 if (VAR_17 != VAR_9->nsNr)
     FUNC_6(VAR_9, VAR_9->nsNr - VAR_17);




 if ( VAR_16 != ((void*)0) && VAR_9->record_info ) {
    VAR_13.end_pos = VAR_9->input->consumed +
         (VAR_0 - VAR_9->input->base);
    VAR_13.end_line = VAR_9->input->line;
    VAR_13.node = VAR_16;
    FUNC_19(VAR_9, &VAR_13);
 }
 return;
    }




    FUNC_14(VAR_9);
    if (VAR_9->instate == VAR_6)
 return;
    if (!FUNC_0(VAR_2)) {
        FUNC_12(VAR_9, VAR_5,
  "Premature end of data in tag %s line %d\n",
                  VAR_10, VAR_14, ((void*)0));




 FUNC_5(VAR_9);
 FUNC_3(VAR_9);
 FUNC_7(VAR_9);
 if (VAR_17 != VAR_9->nsNr)
     FUNC_6(VAR_9, VAR_9->nsNr - VAR_17);
 return;
    }




    if (VAR_9->sax2) {
 FUNC_16(VAR_9, VAR_11, VAR_12, VAR_14, VAR_9->nsNr - VAR_17, VAR_15);
 FUNC_3(VAR_9);
    }
    if ( VAR_16 != ((void*)0) && VAR_9->record_info ) {
       VAR_13.end_pos = VAR_9->input->consumed +
                          (VAR_0 - VAR_9->input->base);
       VAR_13.end_line = VAR_9->input->line;
       VAR_13.node = VAR_16;
       FUNC_19(VAR_9, &VAR_13);
    }
}
