
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlParserInputState ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_5__ {int options; int instate; } ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,int) ;

xmlChar *
FUNC_6(xmlParserCtxtPtr VAR_13) {
    xmlChar *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    int VAR_16 = VAR_9;
    xmlChar VAR_17;
    xmlChar VAR_18;
    int VAR_19 = 0;
    xmlParserInputState VAR_20 = VAR_13->instate;

    VAR_4;
    if (VAR_3 == '"') {
        VAR_2;
 VAR_18 = '"';
    } else if (VAR_3 == '\'') {
        VAR_2;
 VAR_18 = '\'';
    } else {
 FUNC_2(VAR_13, VAR_6, ((void*)0));
 return(((void*)0));
    }
    VAR_14 = (xmlChar *) FUNC_4(VAR_16 * sizeof(xmlChar));
    if (VAR_14 == ((void*)0)) {
 FUNC_1(VAR_13, ((void*)0));
 return(((void*)0));
    }
    VAR_13->instate = VAR_11;
    VAR_17 = VAR_0;
    while ((FUNC_0(VAR_17)) && (VAR_17 != VAR_18)) {
 if (VAR_15 + 1 >= VAR_16) {
     xmlChar *VAR_21;

            if ((VAR_16 > VAR_8) &&
                ((VAR_13->options & VAR_12) == 0)) {
                FUNC_2(VAR_13, VAR_7, "Public ID");
                FUNC_3(VAR_14);
                return(((void*)0));
            }
     VAR_16 *= 2;
     VAR_21 = (xmlChar *) FUNC_5(VAR_14, VAR_16 * sizeof(xmlChar));
     if (VAR_21 == ((void*)0)) {
  FUNC_1(VAR_13, ((void*)0));
  FUNC_3(VAR_14);
  return(((void*)0));
     }
     VAR_14 = VAR_21;
 }
 VAR_14[VAR_15++] = VAR_17;
 VAR_19++;
 if (VAR_19 > 50) {
     VAR_1;
     VAR_19 = 0;
            if (VAR_13->instate == VAR_10) {
  FUNC_3(VAR_14);
  return(((void*)0));
            }
 }
 VAR_2;
 VAR_17 = VAR_0;
 if (VAR_17 == 0) {
     VAR_1;
     VAR_4;
     VAR_17 = VAR_0;
 }
    }
    VAR_14[VAR_15] = 0;
    if (VAR_17 != VAR_18) {
 FUNC_2(VAR_13, VAR_5, ((void*)0));
    } else {
 VAR_2;
    }
    VAR_13->instate = VAR_20;
    return(VAR_14);
}
