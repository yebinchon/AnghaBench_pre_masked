
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef int xmlChar ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ) ;

xmlChar *
FUNC_4(xmlParserCtxtPtr VAR_7) {
    xmlChar *VAR_8 = ((void*)0);

    if (FUNC_0(VAR_0, 'v', 'e', 'r', 's', 'i', 'o', 'n')) {
 FUNC_1(7);
 VAR_3;
 if (VAR_2 != '=') {
     FUNC_2(VAR_7, VAR_4, ((void*)0));
     return(((void*)0));
        }
 VAR_1;
 VAR_3;
 if (VAR_2 == '"') {
     VAR_1;
     VAR_8 = FUNC_3(VAR_7);
     if (VAR_2 != '"') {
  FUNC_2(VAR_7, VAR_5, ((void*)0));
     } else
         VAR_1;
 } else if (VAR_2 == '\''){
     VAR_1;
     VAR_8 = FUNC_3(VAR_7);
     if (VAR_2 != '\'') {
  FUNC_2(VAR_7, VAR_5, ((void*)0));
     } else
         VAR_1;
 } else {
     FUNC_2(VAR_7, VAR_6, ((void*)0));
 }
    }
    return(VAR_8);
}
