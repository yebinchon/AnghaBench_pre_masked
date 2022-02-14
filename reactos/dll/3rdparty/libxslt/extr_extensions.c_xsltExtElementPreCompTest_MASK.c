
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xsltTransformFunction ;
typedef TYPE_1__* xsltStylesheetPtr ;
typedef int * xsltElemPreCompPtr ;
typedef int * xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_6__ {int errors; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,char*) ;

__attribute__((used)) static xsltElemPreCompPtr
FUNC_4(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4,
                          xsltTransformFunction VAR_5)
{
    xsltElemPreCompPtr VAR_6;

    if (VAR_3 == ((void*)0)) {
        FUNC_3(((void*)0), ((void*)0), VAR_4,
                           "xsltExtElementTest: no transformation context\n");
        return (((void*)0));
    }
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_2,
                         "xsltExtElementPreCompTest: not initialized,"
                         " calling xsltStyleGetExtData\n");
        FUNC_2(VAR_3, (const xmlChar *) VAR_0);
        if (VAR_1 == ((void*)0)) {
            FUNC_3(((void*)0), VAR_3, VAR_4,
                               "xsltExtElementPreCompTest: not initialized\n");
            if (VAR_3 != ((void*)0))
                VAR_3->errors++;
            return (((void*)0));
        }
    }
    if (VAR_4 == ((void*)0)) {
        FUNC_3(((void*)0), VAR_3, VAR_4,
                           "xsltExtElementPreCompTest: no instruction\n");
        if (VAR_3 != ((void*)0))
            VAR_3->errors++;
        return (((void*)0));
    }
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
    return (VAR_6);
}
