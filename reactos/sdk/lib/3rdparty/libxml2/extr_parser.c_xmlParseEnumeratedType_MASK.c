
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef int * xmlEnumerationPtr ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;

int
FUNC_5(xmlParserCtxtPtr VAR_5, xmlEnumerationPtr *VAR_6) {
    if (FUNC_0(VAR_0, 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N')) {
 FUNC_1(8);
 if (VAR_1 == 0) {
     FUNC_2(VAR_5, VAR_4,
      "Space required after 'NOTATION'\n");
     return(0);
 }
 *VAR_6 = FUNC_4(VAR_5);
 if (*VAR_6 == ((void*)0)) return(0);
 return(VAR_3);
    }
    *VAR_6 = FUNC_3(VAR_5);
    if (*VAR_6 == ((void*)0)) return(0);
    return(VAR_2);
}
