
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_8__ {int linenumbers; char* directory; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char const*,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;
 char* FUNC_6 (char const*) ;

xmlParserCtxtPtr
FUNC_7(const char *VAR_0, int VAR_1)
{
    xmlParserCtxtPtr VAR_2;
    xmlParserInputPtr VAR_3;
    char *VAR_4 = ((void*)0);

    VAR_2 = FUNC_5();
    if (VAR_2 == ((void*)0)) {
 FUNC_2(((void*)0), "cannot allocate parser context");
 return(((void*)0));
    }

    if (VAR_1)
 FUNC_1(VAR_2, VAR_1, ((void*)0));
    VAR_2->linenumbers = 1;

    VAR_3 = FUNC_4(VAR_0, ((void*)0), VAR_2);
    if (VAR_3 == ((void*)0)) {
 FUNC_3(VAR_2);
 return(((void*)0));
    }

    FUNC_0(VAR_2, VAR_3);
    if ((VAR_2->directory == ((void*)0)) && (VAR_4 == ((void*)0)))
        VAR_4 = FUNC_6(VAR_0);
    if ((VAR_2->directory == ((void*)0)) && (VAR_4 != ((void*)0)))
        VAR_2->directory = VAR_4;

    return(VAR_2);
}
