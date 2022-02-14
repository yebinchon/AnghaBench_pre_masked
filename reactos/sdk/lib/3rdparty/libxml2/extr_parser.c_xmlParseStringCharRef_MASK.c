
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlParserCtxtPtr ;
typedef char xmlChar ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(xmlParserCtxtPtr VAR_4, const xmlChar **VAR_5) {
    const xmlChar *VAR_6;
    xmlChar VAR_7;
    unsigned int VAR_8 = 0;
    unsigned int VAR_9 = 0;

    if ((VAR_5 == ((void*)0)) || (*VAR_5 == ((void*)0))) return(0);
    VAR_6 = *VAR_5;
    VAR_7 = *VAR_6;
    if ((VAR_7 == '&') && (VAR_6[1] == '#') && (VAR_6[2] == 'x')) {
 VAR_6 += 3;
 VAR_7 = *VAR_6;
 while (VAR_7 != ';') {
     if ((VAR_7 >= '0') && (VAR_7 <= '9'))
         VAR_8 = VAR_8 * 16 + (VAR_7 - '0');
     else if ((VAR_7 >= 'a') && (VAR_7 <= 'f'))
         VAR_8 = VAR_8 * 16 + (VAR_7 - 'a') + 10;
     else if ((VAR_7 >= 'A') && (VAR_7 <= 'F'))
         VAR_8 = VAR_8 * 16 + (VAR_7 - 'A') + 10;
     else {
  FUNC_1(VAR_4, VAR_3, ((void*)0));
  VAR_8 = 0;
  break;
     }
     if (VAR_8 > 0x10FFFF)
         VAR_9 = VAR_8;

     VAR_6++;
     VAR_7 = *VAR_6;
 }
 if (VAR_7 == ';')
     VAR_6++;
    } else if ((VAR_7 == '&') && (VAR_6[1] == '#')){
 VAR_6 += 2;
 VAR_7 = *VAR_6;
 while (VAR_7 != ';') {
     if ((VAR_7 >= '0') && (VAR_7 <= '9'))
         VAR_8 = VAR_8 * 10 + (VAR_7 - '0');
     else {
  FUNC_1(VAR_4, VAR_2, ((void*)0));
  VAR_8 = 0;
  break;
     }
     if (VAR_8 > 0x10FFFF)
         VAR_9 = VAR_8;

     VAR_6++;
     VAR_7 = *VAR_6;
 }
 if (VAR_7 == ';')
     VAR_6++;
    } else {
 FUNC_1(VAR_4, VAR_1, ((void*)0));
 return(0);
    }
    *VAR_5 = VAR_6;






    if ((FUNC_0(VAR_8) && (VAR_9 == 0))) {
        return(VAR_8);
    } else {
        FUNC_2(VAR_4, VAR_0,
     "xmlParseStringCharRef: invalid xmlChar value %d\n",
     VAR_8);
    }
    return(0);
}
