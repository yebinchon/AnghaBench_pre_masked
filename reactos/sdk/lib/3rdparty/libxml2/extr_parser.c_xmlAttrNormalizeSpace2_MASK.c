
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserCtxtPtr ;
typedef int xmlChar ;


 int FUNC_0 (int*,int*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int *,int *) ;
 int* FUNC_4 (int*,int) ;

__attribute__((used)) static const xmlChar *
FUNC_5(xmlParserCtxtPtr VAR_0, xmlChar *VAR_1, int *VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    const xmlChar *VAR_6;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
        return(((void*)0));
    VAR_3 = *VAR_2;
    if (VAR_3 <= 0)
        return(((void*)0));

    VAR_6 = VAR_1;
    while (*VAR_6 == 0x20) {
        VAR_6++;
 VAR_4++;
    }
    while (*VAR_6 != 0) {
 if (*VAR_6 == 0x20) {
     VAR_6++;
     if ((*VAR_6 == 0x20) || (*VAR_6 == 0)) {
         VAR_5 = 1;
  break;
     }
 } else
     VAR_6++;
    }
    if (VAR_5) {
        xmlChar *VAR_7;

 VAR_7 = FUNC_4(VAR_1 + VAR_4, VAR_3 - VAR_4 + 1);
 if (VAR_7 == ((void*)0)) {
     FUNC_3(VAR_0, ((void*)0));
     return(((void*)0));
 }
 FUNC_2(VAR_7, VAR_7);
 *VAR_2 = (int) FUNC_1((const char *)VAR_7);
        return(VAR_7);
    } else if (VAR_4) {
        *VAR_2 -= VAR_4;
        FUNC_0(VAR_1, VAR_1 + VAR_4, 1 + *VAR_2);
 return(VAR_1);
    }
    return(((void*)0));
}
