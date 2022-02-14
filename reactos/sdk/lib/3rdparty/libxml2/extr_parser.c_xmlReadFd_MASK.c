
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
 int * FUNC_1 (int *,char const*,char const*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,TYPE_1__*,int ) ;
 int * FUNC_6 () ;
 TYPE_1__* FUNC_7 (int,int ) ;

xmlDocPtr
FUNC_8(int VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
    xmlParserCtxtPtr VAR_5;
    xmlParserInputBufferPtr VAR_6;
    xmlParserInputPtr VAR_7;

    if (VAR_1 < 0)
        return (((void*)0));
    FUNC_4();

    VAR_6 = FUNC_7(VAR_1, VAR_0);
    if (VAR_6 == ((void*)0))
        return (((void*)0));
    VAR_6->closecallback = ((void*)0);
    VAR_5 = FUNC_6();
    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_6);
        return (((void*)0));
    }
    VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_0);
    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_6);
 FUNC_2(VAR_5);
        return (((void*)0));
    }
    FUNC_0(VAR_5, VAR_7);
    return (FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4, 0));
}
