
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int * xmlParserCtxtPtr ;
typedef int * xmlDocPtr ;
struct TYPE_5__ {int * closecallback; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,char const*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int,int ) ;

xmlDocPtr
FUNC_7(xmlParserCtxtPtr VAR_1, int VAR_2,
              const char *VAR_3, const char *VAR_4, int VAR_5)
{
    xmlParserInputBufferPtr VAR_6;
    xmlParserInputPtr VAR_7;

    if (VAR_2 < 0)
        return (((void*)0));
    if (VAR_1 == ((void*)0))
        return (((void*)0));
    FUNC_4();

    FUNC_1(VAR_1);


    VAR_6 = FUNC_6(VAR_2, VAR_0);
    if (VAR_6 == ((void*)0))
        return (((void*)0));
    VAR_6->closecallback = ((void*)0);
    VAR_7 = FUNC_5(VAR_1, VAR_6, VAR_0);
    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_6);
        return (((void*)0));
    }
    FUNC_0(VAR_1, VAR_7);
    return (FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5, 1));
}
