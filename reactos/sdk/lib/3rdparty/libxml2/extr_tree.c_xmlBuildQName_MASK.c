
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

xmlChar *
FUNC_4(const xmlChar *VAR_0, const xmlChar *VAR_1,
       xmlChar *VAR_2, int VAR_3) {
    int VAR_4, VAR_5;
    xmlChar *VAR_6;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_1 == ((void*)0)) return((xmlChar *) VAR_0);

    VAR_4 = FUNC_1((char *) VAR_0);
    VAR_5 = FUNC_1((char *) VAR_1);

    if ((VAR_2 == ((void*)0)) || (VAR_3 < VAR_4 + VAR_5 + 2)) {
 VAR_6 = (xmlChar *) FUNC_2(VAR_4 + VAR_5 + 2);
 if (VAR_6 == ((void*)0)) {
     FUNC_3("building QName");
     return(((void*)0));
 }
    } else {
 VAR_6 = VAR_2;
    }
    FUNC_0(&VAR_6[0], VAR_1, VAR_5);
    VAR_6[VAR_5] = ':';
    FUNC_0(&VAR_6[VAR_5 + 1], VAR_0, VAR_4);
    VAR_6[VAR_4 + VAR_5 + 1] = 0;
    return(VAR_6);
}
