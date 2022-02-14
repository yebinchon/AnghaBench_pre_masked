
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* xmlParserInputState ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_5__ {int instate; int options; } ;


 int FUNC_0 (int,int*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int*,int) ;

xmlChar *
FUNC_9(xmlParserCtxtPtr VAR_12) {
    xmlChar *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15 = VAR_8;
    int VAR_16, VAR_17;
    xmlChar VAR_18;
    int VAR_19 = VAR_12->instate;
    int VAR_20 = 0;

    VAR_3;
    if (VAR_2 == '"') {
        VAR_1;
 VAR_18 = '"';
    } else if (VAR_2 == '\'') {
        VAR_1;
 VAR_18 = '\'';
    } else {
 FUNC_5(VAR_12, VAR_5, ((void*)0));
 return(((void*)0));
    }

    VAR_13 = (xmlChar *) FUNC_7(VAR_15 * sizeof(xmlChar));
    if (VAR_13 == ((void*)0)) {
        FUNC_4(VAR_12, ((void*)0));
 return(((void*)0));
    }
    VAR_12->instate = VAR_10;
    VAR_16 = FUNC_1(VAR_17);
    while ((FUNC_2(VAR_16)) && (VAR_16 != VAR_18)) {
 if (VAR_14 + 5 >= VAR_15) {
     xmlChar *VAR_21;

            if ((VAR_15 > VAR_7) &&
                ((VAR_12->options & VAR_11) == 0)) {
                FUNC_5(VAR_12, VAR_6, "SystemLiteral");
                FUNC_6(VAR_13);
  VAR_12->instate = (xmlParserInputState) VAR_19;
                return(((void*)0));
            }
     VAR_15 *= 2;
     VAR_21 = (xmlChar *) FUNC_8(VAR_13, VAR_15 * sizeof(xmlChar));
     if (VAR_21 == ((void*)0)) {
         FUNC_6(VAR_13);
  FUNC_4(VAR_12, ((void*)0));
  VAR_12->instate = (xmlParserInputState) VAR_19;
  return(((void*)0));
     }
     VAR_13 = VAR_21;
 }
 VAR_20++;
 if (VAR_20 > 50) {
     VAR_0;
     VAR_20 = 0;
            if (VAR_12->instate == VAR_9) {
         FUNC_6(VAR_13);
  return(((void*)0));
            }
 }
 FUNC_0(VAR_17,VAR_13,VAR_14,VAR_16);
 FUNC_3(VAR_17);
 VAR_16 = FUNC_1(VAR_17);
 if (VAR_16 == 0) {
     VAR_0;
     VAR_3;
     VAR_16 = FUNC_1(VAR_17);
 }
    }
    VAR_13[VAR_14] = 0;
    VAR_12->instate = (xmlParserInputState) VAR_19;
    if (!FUNC_2(VAR_16)) {
 FUNC_5(VAR_12, VAR_4, ((void*)0));
    } else {
 VAR_1;
    }
    return(VAR_13);
}
