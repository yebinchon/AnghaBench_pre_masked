
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef int xmlChar ;


 scalar_t__ FUNC_0 (int ,char,unsigned char,char,char,char,char) ;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

xmlChar *
FUNC_6(xmlParserCtxtPtr VAR_7, xmlChar **VAR_8, int VAR_9) {
    xmlChar *VAR_10 = ((void*)0);

    VAR_2;

    *VAR_8 = ((void*)0);
    if (FUNC_0(VAR_1, 'S', 'Y', 'S', 'T', 'E', 'M')) {
        FUNC_1(6);
 if (VAR_3 == 0) {
     FUNC_3(VAR_7, VAR_5,
                    "Space required after 'SYSTEM'\n");
 }
 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10 == ((void*)0)) {
     FUNC_2(VAR_7, VAR_6, ((void*)0));
        }
    } else if (FUNC_0(VAR_1, 'P', 'U', 'B', 'L', 'I', 'C')) {
        FUNC_1(6);
 if (VAR_3 == 0) {
     FUNC_3(VAR_7, VAR_5,
      "Space required after 'PUBLIC'\n");
 }
 *VAR_8 = FUNC_4(VAR_7);
 if (*VAR_8 == ((void*)0)) {
     FUNC_2(VAR_7, VAR_4, ((void*)0));
 }
 if (VAR_9) {



     if (VAR_3 == 0) {
  FUNC_3(VAR_7, VAR_5,
   "Space required after the Public Identifier\n");
     }
 } else {






     if (VAR_3 == 0) return(((void*)0));
     if ((VAR_0 != '\'') && (VAR_0 != '"')) return(((void*)0));
 }
 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10 == ((void*)0)) {
     FUNC_2(VAR_7, VAR_6, ((void*)0));
        }
    }
    return(VAR_10);
}
