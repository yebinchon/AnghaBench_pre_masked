
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_1 (int) ;
 char VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int *) ;

int
FUNC_4(xmlParserCtxtPtr VAR_8) {
    int VAR_9 = -2;

    VAR_3;
    if (FUNC_0(VAR_0, 's', 't', 'a', 'n', 'd', 'a', 'l', 'o', 'n', 'e')) {
 FUNC_2(10);
        VAR_3;
 if (VAR_2 != '=') {
     FUNC_3(VAR_8, VAR_4, ((void*)0));
     return(VAR_9);
        }
 VAR_1;
 VAR_3;
        if (VAR_2 == '\''){
     VAR_1;
     if ((VAR_2 == 'n') && (FUNC_1(1) == 'o')) {
         VAR_9 = 0;
                FUNC_2(2);
     } else if ((VAR_2 == 'y') && (FUNC_1(1) == 'e') &&
                (FUNC_1(2) == 's')) {
         VAR_9 = 1;
  FUNC_2(3);
            } else {
  FUNC_3(VAR_8, VAR_5, ((void*)0));
     }
     if (VAR_2 != '\'') {
  FUNC_3(VAR_8, VAR_6, ((void*)0));
     } else
         VAR_1;
 } else if (VAR_2 == '"'){
     VAR_1;
     if ((VAR_2 == 'n') && (FUNC_1(1) == 'o')) {
         VAR_9 = 0;
  FUNC_2(2);
     } else if ((VAR_2 == 'y') && (FUNC_1(1) == 'e') &&
                (FUNC_1(2) == 's')) {
         VAR_9 = 1;
                FUNC_2(3);
            } else {
  FUNC_3(VAR_8, VAR_5, ((void*)0));
     }
     if (VAR_2 != '"') {
  FUNC_3(VAR_8, VAR_6, ((void*)0));
     } else
         VAR_1;
 } else {
     FUNC_3(VAR_8, VAR_7, ((void*)0));
        }
    }
    return(VAR_9);
}
