
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlEntityPtr ;
typedef TYPE_4__* xmlBufferPtr ;
struct TYPE_21__ {int * content; } ;
struct TYPE_20__ {scalar_t__ etype; int * content; int name; } ;
struct TYPE_19__ {scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_18__ {scalar_t__ cur; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,char*,int) ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(xmlParserCtxtPtr VAR_9, xmlEntityPtr VAR_10) {
    xmlParserInputPtr VAR_11;
    xmlBufferPtr VAR_12;
    int VAR_13, VAR_14;
    int VAR_15 = 0;

    if ((VAR_9 == ((void*)0)) || (VAR_10 == ((void*)0)) ||
        ((VAR_10->etype != VAR_4) &&
  (VAR_10->etype != VAR_3)) ||
 (VAR_10->content != ((void*)0))) {
 FUNC_6(VAR_9, VAR_1,
             "xmlLoadEntityContent parameter error");
        return(-1);
    }

    if (VAR_8)
 FUNC_8(VAR_7,
  "Reading %s entity content input\n", VAR_10->name);

    VAR_12 = FUNC_4();
    if (VAR_12 == ((void*)0)) {
 FUNC_6(VAR_9, VAR_1,
             "xmlLoadEntityContent parameter error");
        return(-1);
    }

    VAR_11 = FUNC_9(VAR_9, VAR_10);
    if (VAR_11 == ((void*)0)) {
 FUNC_6(VAR_9, VAR_1,
             "xmlLoadEntityContent input error");
 FUNC_5(VAR_12);
        return(-1);
    }





    if (FUNC_11(VAR_9, VAR_11) < 0) {
        FUNC_5(VAR_12);
 return(-1);
    }

    VAR_0;
    VAR_14 = FUNC_0(VAR_13);
    while ((VAR_9->input == VAR_11) && (VAR_9->input->cur < VAR_9->input->end) &&
           (FUNC_1(VAR_14))) {
        FUNC_3(VAR_12, VAR_9->input->cur, VAR_13);
 if (VAR_15++ > VAR_5) {
     VAR_15 = 0;
     VAR_0;
            if (VAR_9->instate == VAR_6) {
                FUNC_5(VAR_12);
                return(-1);
            }
 }
 FUNC_2(VAR_13);
 VAR_14 = FUNC_0(VAR_13);
 if (VAR_14 == 0) {
     VAR_15 = 0;
     VAR_0;
            if (VAR_9->instate == VAR_6) {
                FUNC_5(VAR_12);
                return(-1);
            }
     VAR_14 = FUNC_0(VAR_13);
 }
    }

    if ((VAR_9->input == VAR_11) && (VAR_9->input->cur >= VAR_9->input->end)) {
        FUNC_10(VAR_9);
    } else if (!FUNC_1(VAR_14)) {
        FUNC_7(VAR_9, VAR_2,
                          "xmlLoadEntityContent: invalid char value %d\n",
                   VAR_14);
 FUNC_5(VAR_12);
 return(-1);
    }
    VAR_10->content = VAR_12->content;
    VAR_12->content = ((void*)0);
    FUNC_5(VAR_12);

    return(0);
}
