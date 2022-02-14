
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_8__ {scalar_t__ instate; int options; int userData; TYPE_1__* sax; int disableSAX; } ;
struct TYPE_7__ {int (* characters ) (int ,scalar_t__*,int) ;int (* cdataBlock ) (int ,scalar_t__*,int) ;} ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char,char,char) ;
 int FUNC_1 (int,scalar_t__*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,char*,scalar_t__*) ;
 int FUNC_11 (scalar_t__*) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__*,int) ;

void
FUNC_14(xmlParserCtxtPtr VAR_9) {
    xmlChar *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    int VAR_12 = VAR_4;
    int VAR_13, VAR_14;
    int VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19 = 0;


    if (FUNC_0(VAR_0, '<', '!', '[', 'C', 'D', 'A', 'T', 'A', '[')) {
 FUNC_5(9);
    } else
        return;

    VAR_9->instate = VAR_5;
    VAR_13 = FUNC_2(VAR_14);
    if (!FUNC_3(VAR_13)) {
 FUNC_9(VAR_9, VAR_2, ((void*)0));
 VAR_9->instate = VAR_6;
        return;
    }
    FUNC_4(VAR_14);
    VAR_15 = FUNC_2(VAR_16);
    if (!FUNC_3(VAR_15)) {
 FUNC_9(VAR_9, VAR_2, ((void*)0));
 VAR_9->instate = VAR_6;
        return;
    }
    FUNC_4(VAR_16);
    VAR_17 = FUNC_2(VAR_18);
    VAR_10 = (xmlChar *) FUNC_12(VAR_12 * sizeof(xmlChar));
    if (VAR_10 == ((void*)0)) {
 FUNC_8(VAR_9, ((void*)0));
 return;
    }
    while (FUNC_3(VAR_17) &&
           ((VAR_13 != ']') || (VAR_15 != ']') || (VAR_17 != '>'))) {
 if (VAR_11 + 5 >= VAR_12) {
     xmlChar *VAR_20;

            if ((VAR_12 > VAR_3) &&
                ((VAR_9->options & VAR_8) == 0)) {
                FUNC_10(VAR_9, VAR_2,
                             "CData section too big found", ((void*)0));
                FUNC_11 (VAR_10);
                return;
            }
     VAR_20 = (xmlChar *) FUNC_13(VAR_10, VAR_12 * 2 * sizeof(xmlChar));
     if (VAR_20 == ((void*)0)) {
         FUNC_11(VAR_10);
  FUNC_8(VAR_9, ((void*)0));
  return;
     }
     VAR_10 = VAR_20;
     VAR_12 *= 2;
 }
 FUNC_1(VAR_14,VAR_10,VAR_11,VAR_13);
 VAR_13 = VAR_15;
 VAR_14 = VAR_16;
 VAR_15 = VAR_17;
 VAR_16 = VAR_18;
 VAR_19++;
 if (VAR_19 > 50) {
     VAR_1;
            if (VAR_9->instate == VAR_7) {
  FUNC_11(VAR_10);
  return;
            }
     VAR_19 = 0;
 }
 FUNC_4(VAR_18);
 VAR_17 = FUNC_2(VAR_18);
    }
    VAR_10[VAR_11] = 0;
    VAR_9->instate = VAR_6;
    if (VAR_17 != '>') {
 FUNC_10(VAR_9, VAR_2,
                      "CData section not finished\n%.50s\n", VAR_10);
 FUNC_11(VAR_10);
        return;
    }
    FUNC_4(VAR_18);




    if ((VAR_9->sax != ((void*)0)) && (!VAR_9->disableSAX)) {
 if (VAR_9->sax->cdataBlock != ((void*)0))
     VAR_9->sax->cdataBlock(VAR_9->userData, VAR_10, VAR_11);
 else if (VAR_9->sax->characters != ((void*)0))
     VAR_9->sax->characters(VAR_9->userData, VAR_10, VAR_11);
    }
    FUNC_11(VAR_10);
}
