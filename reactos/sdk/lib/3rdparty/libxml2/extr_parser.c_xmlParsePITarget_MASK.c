
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef char xmlChar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*,char const*,int *,int *) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int * FUNC_5 (char const*,char) ;
 int ** VAR_2 ;
 int FUNC_6 (int ,int ,char*,int *,int *) ;

const xmlChar *
FUNC_7(xmlParserCtxtPtr VAR_3) {
    const xmlChar *VAR_4;

    VAR_4 = FUNC_3(VAR_3);
    if ((VAR_4 != ((void*)0)) &&
        ((VAR_4[0] == 'x') || (VAR_4[0] == 'X')) &&
        ((VAR_4[1] == 'm') || (VAR_4[1] == 'M')) &&
        ((VAR_4[2] == 'l') || (VAR_4[2] == 'L'))) {
 int VAR_5;
 if ((VAR_4[0] == 'x') && (VAR_4[1] == 'm') &&
     (VAR_4[2] == 'l') && (VAR_4[3] == 0)) {
     FUNC_1(VAR_3, VAR_0,
   "XML declaration allowed only at the start of the document\n");
     return(VAR_4);
 } else if (VAR_4[3] == 0) {
     FUNC_0(VAR_3, VAR_0, ((void*)0));
     return(VAR_4);
 }
 for (VAR_5 = 0;;VAR_5++) {
     if (VAR_2[VAR_5] == ((void*)0)) break;
     if (FUNC_4(VAR_4, (const xmlChar *)VAR_2[VAR_5]))
         return(VAR_4);
 }
 FUNC_6(VAR_3, VAR_0,
        "xmlParsePITarget: invalid name prefix 'xml'\n",
        ((void*)0), ((void*)0));
    }
    if ((VAR_4 != ((void*)0)) && (FUNC_5(VAR_4, ':') != ((void*)0))) {
 FUNC_2(VAR_3, VAR_1,
   "colons are forbidden from PI names '%s'\n", VAR_4, ((void*)0), ((void*)0));
    }
    return(VAR_4);
}
