
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_7__ {int options; } ;


 int FUNC_0 (int,scalar_t__*,int,int) ;
 int FUNC_1 (scalar_t__ const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__*,int) ;
 scalar_t__* FUNC_10 (scalar_t__*,int) ;

__attribute__((used)) static xmlChar *
FUNC_11(xmlParserCtxtPtr VAR_5, const xmlChar** VAR_6) {
    xmlChar VAR_7[VAR_1 + 5];
    const xmlChar *VAR_8 = *VAR_6;
    int VAR_9 = 0, VAR_10;
    int VAR_11;





    VAR_11 = FUNC_1(VAR_8, VAR_10);
    if (!FUNC_7(VAR_5, VAR_11)) {
 return(((void*)0));
    }

    FUNC_0(VAR_10,VAR_7,VAR_9,VAR_11);
    VAR_8 += VAR_10;
    VAR_11 = FUNC_1(VAR_8, VAR_10);
    while (FUNC_6(VAR_5, VAR_11)) {
 FUNC_0(VAR_10,VAR_7,VAR_9,VAR_11);
 VAR_8 += VAR_10;
 VAR_11 = FUNC_1(VAR_8, VAR_10);
 if (VAR_9 >= VAR_1) {




     xmlChar *VAR_12;
     int VAR_13 = VAR_9 * 2;

     VAR_12 = (xmlChar *) FUNC_8(VAR_13 * sizeof(xmlChar));
     if (VAR_12 == ((void*)0)) {
         FUNC_3(VAR_5, ((void*)0));
  return(((void*)0));
     }
     FUNC_2(VAR_12, VAR_7, VAR_9);
     while (FUNC_6(VAR_5, VAR_11)) {
  if (VAR_9 + 10 > VAR_13) {
      xmlChar *VAR_14;

                    if ((VAR_9 > VAR_2) &&
                        ((VAR_5->options & VAR_3) == 0)) {
                        FUNC_4(VAR_5, VAR_0, "NCName");
   FUNC_5(VAR_12);
                        return(((void*)0));
                    }
      VAR_13 *= 2;
      VAR_14 = (xmlChar *) FUNC_9(VAR_12,
                               VAR_13 * sizeof(xmlChar));
      if (VAR_14 == ((void*)0)) {
   FUNC_3(VAR_5, ((void*)0));
   FUNC_5(VAR_12);
   return(((void*)0));
      }
      VAR_12 = VAR_14;
  }
  FUNC_0(VAR_10,VAR_12,VAR_9,VAR_11);
  VAR_8 += VAR_10;
  VAR_11 = FUNC_1(VAR_8, VAR_10);
     }
     VAR_12[VAR_9] = 0;
     *VAR_6 = VAR_8;
     return(VAR_12);
 }
    }
    if ((VAR_9 > VAR_2) &&
        ((VAR_5->options & VAR_3) == 0)) {
        FUNC_4(VAR_5, VAR_0, "NCName");
        return(((void*)0));
    }
    *VAR_6 = VAR_8;
    return(FUNC_10(VAR_7, VAR_9));
}
