
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsltParserContextPtr ;
typedef int xmlChar ;


 int const* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int const*,int*) ;
 int * FUNC_5 (int const*,int) ;

__attribute__((used)) static xmlChar *
FUNC_6(xsltParserContextPtr VAR_2) {
    const xmlChar *VAR_3, *VAR_4;
    xmlChar *VAR_5 = ((void*)0);
    int VAR_6, VAR_7;

    VAR_1;

    VAR_4 = VAR_3 = VAR_0;
    VAR_6 = FUNC_4(((void*)0), VAR_4, &VAR_7);
    if (!FUNC_3(VAR_6) && (VAR_6 != '_'))
 return(((void*)0));

    while ((FUNC_3(VAR_6)) || (FUNC_1(VAR_6)) ||
           (VAR_6 == '.') || (VAR_6 == '-') ||
    (VAR_6 == '_') ||
    (FUNC_0(VAR_6)) ||
    (FUNC_2(VAR_6))) {
 VAR_4 += VAR_7;
 VAR_6 = FUNC_4(((void*)0), VAR_4, &VAR_7);
    }
    VAR_5 = FUNC_5(VAR_3, VAR_4 - VAR_3);
    VAR_0 = VAR_4;
    return(VAR_5);
}
