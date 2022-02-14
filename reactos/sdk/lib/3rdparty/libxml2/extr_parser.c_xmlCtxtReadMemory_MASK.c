
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserInputPtr ;
typedef int * xmlParserInputBufferPtr ;
typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,char const*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (char const*,int,int ) ;

xmlDocPtr
FUNC_7(xmlParserCtxtPtr VAR_1, const char *VAR_2, int VAR_3,
                  const char *VAR_4, const char *VAR_5, int VAR_6)
{
    xmlParserInputBufferPtr VAR_7;
    xmlParserInputPtr VAR_8;

    if (VAR_1 == ((void*)0))
        return (((void*)0));
    if (VAR_2 == ((void*)0))
        return (((void*)0));
    FUNC_4();

    FUNC_1(VAR_1);

    VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_0);
    if (VAR_7 == ((void*)0)) {
 return(((void*)0));
    }

    VAR_8 = FUNC_5(VAR_1, VAR_7, VAR_0);
    if (VAR_8 == ((void*)0)) {
 FUNC_3(VAR_7);
 return(((void*)0));
    }

    FUNC_0(VAR_1, VAR_8);
    return (FUNC_2(VAR_1, VAR_4, VAR_5, VAR_6, 1));
}
