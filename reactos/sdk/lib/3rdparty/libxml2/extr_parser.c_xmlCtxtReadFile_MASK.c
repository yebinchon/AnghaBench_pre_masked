
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserInputPtr ;
typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,char const*,int,int) ;
 int FUNC_3 () ;
 int * FUNC_4 (char const*,int *,int *) ;

xmlDocPtr
FUNC_5(xmlParserCtxtPtr VAR_0, const char *VAR_1,
                const char *VAR_2, int VAR_3)
{
    xmlParserInputPtr VAR_4;

    if (VAR_1 == ((void*)0))
        return (((void*)0));
    if (VAR_0 == ((void*)0))
        return (((void*)0));
    FUNC_3();

    FUNC_1(VAR_0);

    VAR_4 = FUNC_4(VAR_1, ((void*)0), VAR_0);
    if (VAR_4 == ((void*)0)) {
        return (((void*)0));
    }
    FUNC_0(VAR_0, VAR_4);
    return (FUNC_2(VAR_0, ((void*)0), VAR_2, VAR_3, 1));
}
