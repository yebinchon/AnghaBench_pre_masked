
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_7__ {int options; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_1 ;
 int * FUNC_3 (TYPE_1__*,char const*) ;
 int * FUNC_4 (char const*,char const*,TYPE_1__*) ;
 int * FUNC_5 (char const*,char const*,TYPE_1__*) ;

__attribute__((used)) static xmlParserInputPtr
FUNC_6(const char *VAR_2, const char *VAR_3,
                               xmlParserCtxtPtr VAR_4)
{
    xmlParserInputPtr VAR_5 = ((void*)0);
    xmlChar *VAR_6 = ((void*)0);





    if ((VAR_4 != ((void*)0)) && (VAR_4->options & VAR_0)) {
        int VAR_7 = VAR_4->options;

 VAR_4->options -= VAR_0;
        VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_4->options = VAR_7;
 return(VAR_5);
    }




    if (VAR_6 == ((void*)0))
        VAR_6 = (xmlChar *) VAR_2;

    if (VAR_6 == ((void*)0)) {
        if (VAR_3 == ((void*)0))
            VAR_3 = "NULL";
        FUNC_0(VAR_4, "failed to load external entity \"%s\"\n", VAR_3);
        return (((void*)0));
    }
    VAR_5 = FUNC_3(VAR_4, (const char *) VAR_6);
    if ((VAR_6 != ((void*)0)) && (VAR_6 != (xmlChar *) VAR_2))
        FUNC_1(VAR_6);
    return (VAR_5);
}
