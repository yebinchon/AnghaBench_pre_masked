
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_12__ {int options; scalar_t__ instate; int userData; TYPE_2__* sax; int disableSAX; TYPE_1__* input; } ;
struct TYPE_11__ {int (* comment ) (int ,scalar_t__*) ;} ;
struct TYPE_10__ {int id; } ;


 int FUNC_0 (int,scalar_t__*,size_t,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (TYPE_3__*,int ,char*) ;
 int FUNC_8 (TYPE_3__*,int ,char*,int) ;
 int FUNC_9 (TYPE_3__*,int ,char*,scalar_t__*) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 (size_t) ;
 scalar_t__ FUNC_12 (scalar_t__*,size_t) ;

__attribute__((used)) static void
FUNC_13(xmlParserCtxtPtr VAR_11, xmlChar *VAR_12,
                       size_t VAR_13, size_t VAR_14) {
    int VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19, VAR_20;
    size_t VAR_21 = 0;
    int VAR_22;

    VAR_22 = VAR_11->input->id;

    if (VAR_12 == ((void*)0)) {
        VAR_13 = 0;
 VAR_14 = VAR_8;
 VAR_12 = (xmlChar *) FUNC_11(VAR_14 * sizeof(xmlChar));
 if (VAR_12 == ((void*)0)) {
     FUNC_5(VAR_11, ((void*)0));
     return;
 }
    }
    VAR_0;
    VAR_15 = FUNC_1(VAR_16);
    if (VAR_15 == 0)
        goto not_terminated;
    if (!FUNC_2(VAR_15)) {
        FUNC_8(VAR_11, VAR_6,
                          "xmlParseComment: invalid xmlChar value %d\n",
                   VAR_15);
 FUNC_10 (VAR_12);
 return;
    }
    FUNC_3(VAR_16);
    VAR_17 = FUNC_1(VAR_18);
    if (VAR_17 == 0)
        goto not_terminated;
    if (!FUNC_2(VAR_17)) {
        FUNC_8(VAR_11, VAR_6,
                          "xmlParseComment: invalid xmlChar value %d\n",
                   VAR_15);
 FUNC_10 (VAR_12);
 return;
    }
    FUNC_3(VAR_18);
    VAR_19 = FUNC_1(VAR_20);
    if (VAR_19 == 0)
        goto not_terminated;
    while (FUNC_2(VAR_19) &&
           ((VAR_19 != '>') ||
     (VAR_17 != '-') || (VAR_15 != '-'))) {
 if ((VAR_17 == '-') && (VAR_15 == '-')) {
     FUNC_6(VAR_11, VAR_5, ((void*)0));
 }
        if ((VAR_13 > VAR_7) &&
            ((VAR_11->options & VAR_10) == 0)) {
            FUNC_9(VAR_11, VAR_3,
                         "Comment too big found", ((void*)0));
            FUNC_10 (VAR_12);
            return;
        }
 if (VAR_13 + 5 >= VAR_14) {
     xmlChar *VAR_23;
            size_t VAR_24;

     VAR_24 = VAR_14 * 2;
     VAR_23 = (xmlChar *) FUNC_12(VAR_12, VAR_24);
     if (VAR_23 == ((void*)0)) {
  FUNC_10 (VAR_12);
  FUNC_5(VAR_11, ((void*)0));
  return;
     }
     VAR_12 = VAR_23;
            VAR_14 = VAR_24;
 }
 FUNC_0(VAR_16,VAR_12,VAR_13,VAR_15);
 VAR_15 = VAR_17;
 VAR_16 = VAR_18;
 VAR_17 = VAR_19;
 VAR_18 = VAR_20;

 VAR_21++;
 if (VAR_21 > 50) {
     VAR_0;
     VAR_21 = 0;
            if (VAR_11->instate == VAR_9) {
  FUNC_10(VAR_12);
  return;
            }
 }
 FUNC_3(VAR_20);
 VAR_19 = FUNC_1(VAR_20);
 if (VAR_19 == 0) {
     VAR_2;
     VAR_0;
     VAR_19 = FUNC_1(VAR_20);
 }
    }
    VAR_12[VAR_13] = 0;
    if (VAR_19 == 0) {
 FUNC_9(VAR_11, VAR_3,
                      "Comment not terminated \n<!--%.50s\n", VAR_12);
    } else if (!FUNC_2(VAR_19)) {
        FUNC_8(VAR_11, VAR_6,
                          "xmlParseComment: invalid xmlChar value %d\n",
                   VAR_19);
    } else {
 if (VAR_22 != VAR_11->input->id) {
     FUNC_7(VAR_11, VAR_4,
             "Comment doesn't start and stop in the same"
                           " entity\n");
 }
        VAR_1;
 if ((VAR_11->sax != ((void*)0)) && (VAR_11->sax->comment != ((void*)0)) &&
     (!VAR_11->disableSAX))
     VAR_11->sax->comment(VAR_11->userData, VAR_12);
    }
    FUNC_10(VAR_12);
    return;
not_terminated:
    FUNC_9(VAR_11, VAR_3,
    "Comment not terminated\n", ((void*)0));
    FUNC_10(VAR_12);
    return;
}
