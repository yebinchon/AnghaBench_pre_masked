
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserInputPtr ;
typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,char const*,int,int) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int const*) ;

xmlDocPtr
FUNC_5(xmlParserCtxtPtr VAR_0, const xmlChar * VAR_1,
               const char *VAR_2, const char *VAR_3, int VAR_4)
{
    xmlParserInputPtr VAR_5;

    if (VAR_1 == ((void*)0))
        return (((void*)0));
    if (VAR_0 == ((void*)0))
        return (((void*)0));
    FUNC_3();

    FUNC_1(VAR_0);

    VAR_5 = FUNC_4(VAR_0, VAR_1);
    if (VAR_5 == ((void*)0)) {
        return (((void*)0));
    }
    FUNC_0(VAR_0, VAR_5);
    return (FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, 1));
}
