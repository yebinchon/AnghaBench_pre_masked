
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserInputPtr ;
typedef int xmlParserCtxtPtr ;
typedef int xmlChar ;


 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (char const*,char const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*) ;

xmlParserInputPtr
FUNC_5(const char *VAR_0, const char *VAR_1,
                      xmlParserCtxtPtr VAR_2) {
    if ((VAR_0 != ((void*)0)) && (FUNC_4(VAR_0) == 0)) {
 char *VAR_3;
 xmlParserInputPtr VAR_4;

 VAR_3 = (char *) FUNC_0((const xmlChar *) VAR_0);
 if (VAR_3 == ((void*)0)) {
            FUNC_3("building canonical path\n");
     return(((void*)0));
 }

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_3);
 return(VAR_4);
    }
    return(FUNC_1(VAR_0, VAR_1, VAR_2));
}
