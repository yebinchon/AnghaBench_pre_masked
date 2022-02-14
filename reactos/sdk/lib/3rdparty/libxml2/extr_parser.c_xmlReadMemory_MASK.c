
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;


 int * FUNC_0 (char const*,int) ;
 int * FUNC_1 (int *,char const*,char const*,int,int ) ;
 int FUNC_2 () ;

xmlDocPtr
FUNC_3(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
    xmlParserCtxtPtr VAR_5;

    FUNC_2();
    VAR_5 = FUNC_0(VAR_0, VAR_1);
    if (VAR_5 == ((void*)0))
        return (((void*)0));
    return (FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4, 0));
}
