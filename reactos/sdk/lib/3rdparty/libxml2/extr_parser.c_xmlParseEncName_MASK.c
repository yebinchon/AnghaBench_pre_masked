
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef char xmlChar ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int) ;

xmlChar *
FUNC_5(xmlParserCtxtPtr VAR_5) {
    xmlChar *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    int VAR_8 = 10;
    xmlChar VAR_9;

    VAR_9 = VAR_0;
    if (((VAR_9 >= 'a') && (VAR_9 <= 'z')) ||
        ((VAR_9 >= 'A') && (VAR_9 <= 'Z'))) {
 VAR_6 = (xmlChar *) FUNC_3(VAR_8 * sizeof(xmlChar));
 if (VAR_6 == ((void*)0)) {
     FUNC_0(VAR_5, ((void*)0));
     return(((void*)0));
 }

 VAR_6[VAR_7++] = VAR_9;
 VAR_2;
 VAR_9 = VAR_0;
 while (((VAR_9 >= 'a') && (VAR_9 <= 'z')) ||
        ((VAR_9 >= 'A') && (VAR_9 <= 'Z')) ||
        ((VAR_9 >= '0') && (VAR_9 <= '9')) ||
        (VAR_9 == '.') || (VAR_9 == '_') ||
        (VAR_9 == '-')) {
     if (VAR_7 + 1 >= VAR_8) {
         xmlChar *VAR_10;

  VAR_8 *= 2;
  VAR_10 = (xmlChar *) FUNC_4(VAR_6, VAR_8 * sizeof(xmlChar));
  if (VAR_10 == ((void*)0)) {
      FUNC_0(VAR_5, ((void*)0));
      FUNC_2(VAR_6);
      return(((void*)0));
  }
  VAR_6 = VAR_10;
     }
     VAR_6[VAR_7++] = VAR_9;
     VAR_2;
     VAR_9 = VAR_0;
     if (VAR_9 == 0) {
         VAR_3;
  VAR_1;
  VAR_9 = VAR_0;
     }
        }
 VAR_6[VAR_7] = 0;
    } else {
 FUNC_1(VAR_5, VAR_4, ((void*)0));
    }
    return(VAR_6);
}
