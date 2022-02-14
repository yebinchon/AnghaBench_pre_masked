
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;

xmlChar *
FUNC_4(const xmlChar *VAR_0, xmlChar **VAR_1) {
    int VAR_2 = 0;
    xmlChar *VAR_3 = ((void*)0);

    if (VAR_1 == ((void*)0)) return(((void*)0));
    *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0)) return(((void*)0));



    if ((VAR_0[0] == 'x') && (VAR_0[1] == 'm') &&
        (VAR_0[2] == 'l') && (VAR_0[3] == ':'))
 return(((void*)0));



    if (VAR_0[0] == ':')
 return(((void*)0));





    while ((VAR_0[VAR_2] != 0) && (VAR_0[VAR_2] != ':'))
 VAR_2++;

    if (VAR_0[VAR_2] == 0)
 return(((void*)0));

    *VAR_1 = FUNC_2(VAR_0, VAR_2);
    if (*VAR_1 == ((void*)0)) {
 FUNC_3("QName split");
 return(((void*)0));
    }
    VAR_3 = FUNC_1(&VAR_0[VAR_2 + 1]);
    if (VAR_3 == ((void*)0)) {
 FUNC_3("QName split");
 if (*VAR_1 != ((void*)0)) {
     FUNC_0(*VAR_1);
     *VAR_1 = ((void*)0);
 }
 return(((void*)0));
    }

    return(VAR_3);
}
