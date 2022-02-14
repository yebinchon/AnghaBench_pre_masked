
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_6__ {scalar_t__ instate; int options; } ;


 int FUNC_0 (int,scalar_t__*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__*,int) ;
 scalar_t__* FUNC_10 (scalar_t__*,int) ;

xmlChar *
FUNC_11(xmlParserCtxtPtr VAR_8) {
    xmlChar VAR_9[VAR_2 + 5];
    int VAR_10 = 0, VAR_11;
    int VAR_12;
    int VAR_13 = 0;





    VAR_0;
    if (VAR_8->instate == VAR_5)
        return(((void*)0));
    VAR_12 = FUNC_1(VAR_11);

    while (FUNC_7(VAR_8, VAR_12)) {
 if (VAR_13++ > VAR_4) {
     VAR_13 = 0;
     VAR_0;
 }
 FUNC_0(VAR_11,VAR_9,VAR_10,VAR_12);
 FUNC_2(VAR_11);
 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 == 0) {
     VAR_13 = 0;
     VAR_0;
     if (VAR_8->instate == VAR_5)
  return(((void*)0));
            VAR_12 = FUNC_1(VAR_11);
 }
 if (VAR_10 >= VAR_2) {




     xmlChar *VAR_14;
     int VAR_15 = VAR_10 * 2;

     VAR_14 = (xmlChar *) FUNC_8(VAR_15 * sizeof(xmlChar));
     if (VAR_14 == ((void*)0)) {
         FUNC_4(VAR_8, ((void*)0));
  return(((void*)0));
     }
     FUNC_3(VAR_14, VAR_9, VAR_10);
     while (FUNC_7(VAR_8, VAR_12)) {
  if (VAR_13++ > VAR_4) {
      VAR_13 = 0;
      VAR_0;
                    if (VAR_8->instate == VAR_5) {
                        FUNC_6(VAR_14);
                        return(((void*)0));
                    }
  }
  if (VAR_10 + 10 > VAR_15) {
      xmlChar *VAR_16;

                    if ((VAR_15 > VAR_3) &&
                        ((VAR_8->options & VAR_6) == 0)) {
                        FUNC_5(VAR_8, VAR_1, "NmToken");
                        FUNC_6(VAR_14);
                        return(((void*)0));
                    }
      VAR_15 *= 2;
      VAR_16 = (xmlChar *) FUNC_9(VAR_14,
                               VAR_15 * sizeof(xmlChar));
      if (VAR_16 == ((void*)0)) {
   FUNC_4(VAR_8, ((void*)0));
   FUNC_6(VAR_14);
   return(((void*)0));
      }
      VAR_14 = VAR_16;
  }
  FUNC_0(VAR_11,VAR_14,VAR_10,VAR_12);
  FUNC_2(VAR_11);
  VAR_12 = FUNC_1(VAR_11);
     }
     VAR_14[VAR_10] = 0;
     return(VAR_14);
 }
    }
    if (VAR_10 == 0)
        return(((void*)0));
    if ((VAR_10 > VAR_3) &&
        ((VAR_8->options & VAR_6) == 0)) {
        FUNC_5(VAR_8, VAR_1, "NmToken");
        return(((void*)0));
    }
    return(FUNC_10(VAR_9, VAR_10));
}
