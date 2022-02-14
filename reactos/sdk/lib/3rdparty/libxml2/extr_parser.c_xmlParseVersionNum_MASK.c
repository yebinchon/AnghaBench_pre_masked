
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef char xmlChar ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;

xmlChar *
FUNC_4(xmlParserCtxtPtr VAR_2) {
    xmlChar *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    int VAR_5 = 10;
    xmlChar VAR_6;

    VAR_3 = (xmlChar *) FUNC_2(VAR_5 * sizeof(xmlChar));
    if (VAR_3 == ((void*)0)) {
 FUNC_0(VAR_2, ((void*)0));
 return(((void*)0));
    }
    VAR_6 = VAR_0;
    if (!((VAR_6 >= '0') && (VAR_6 <= '9'))) {
 FUNC_1(VAR_3);
 return(((void*)0));
    }
    VAR_3[VAR_4++] = VAR_6;
    VAR_1;
    VAR_6=VAR_0;
    if (VAR_6 != '.') {
 FUNC_1(VAR_3);
 return(((void*)0));
    }
    VAR_3[VAR_4++] = VAR_6;
    VAR_1;
    VAR_6=VAR_0;
    while ((VAR_6 >= '0') && (VAR_6 <= '9')) {
 if (VAR_4 + 1 >= VAR_5) {
     xmlChar *VAR_7;

     VAR_5 *= 2;
     VAR_7 = (xmlChar *) FUNC_3(VAR_3, VAR_5 * sizeof(xmlChar));
     if (VAR_7 == ((void*)0)) {
         FUNC_1(VAR_3);
  FUNC_0(VAR_2, ((void*)0));
  return(((void*)0));
     }
     VAR_3 = VAR_7;
 }
 VAR_3[VAR_4++] = VAR_6;
 VAR_1;
 VAR_6=VAR_0;
    }
    VAR_3[VAR_4] = 0;
    return(VAR_3);
}
