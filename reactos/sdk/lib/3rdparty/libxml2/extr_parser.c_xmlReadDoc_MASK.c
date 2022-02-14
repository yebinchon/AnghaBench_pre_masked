
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;


 int * FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char const*,char const*,int,int ) ;
 int FUNC_2 () ;

xmlDocPtr
FUNC_3(const xmlChar * VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
    xmlParserCtxtPtr VAR_4;

    if (VAR_0 == ((void*)0))
        return (((void*)0));
    FUNC_2();

    VAR_4 = FUNC_0(VAR_0);
    if (VAR_4 == ((void*)0))
        return (((void*)0));
    return (FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3, 0));
}
