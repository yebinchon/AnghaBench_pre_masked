
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;


 int * FUNC_0 (char const*,int) ;
 int * FUNC_1 (int *,int *,char const*,int,int ) ;
 int FUNC_2 () ;

xmlDocPtr
FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
    xmlParserCtxtPtr VAR_3;

    FUNC_2();
    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3 == ((void*)0))
        return (((void*)0));
    return (FUNC_1(VAR_3, ((void*)0), VAR_1, VAR_2, 0));
}
