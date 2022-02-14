
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsltTransformContextPtr ;
typedef int xmlChar ;


 scalar_t__ FUNC_0 (int ,int const*,int const*) ;

int
FUNC_1(xsltTransformContextPtr VAR_0, const char **VAR_1) {
    int VAR_2 = 0;
    const xmlChar *VAR_3;
    const xmlChar *VAR_4;

    if (VAR_1 == ((void*)0))
 return(0);
    while (VAR_1[VAR_2] != ((void*)0)) {
 VAR_3 = (const xmlChar *) VAR_1[VAR_2++];
 VAR_4 = (const xmlChar *) VAR_1[VAR_2++];
 if (FUNC_0(VAR_0, VAR_3, VAR_4) != 0)
     return(-1);
    }
    return 0;
}
