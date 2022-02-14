
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int * xmlXPathFunction ;
typedef int xmlChar ;
struct TYPE_3__ {int * extFunctions; int * xpathCtxt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int const*,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int const*,int *) ;

int
FUNC_4(xsltTransformContextPtr VAR_0, const xmlChar * VAR_1,
                        const xmlChar * VAR_2, xmlXPathFunction VAR_3)
{
    int VAR_4;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) ||
        (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return (-1);
    if (VAR_0->xpathCtxt != ((void*)0)) {
        FUNC_3(VAR_0->xpathCtxt, VAR_1, VAR_2, VAR_3);
    }
    if (VAR_0->extFunctions == ((void*)0))
        VAR_0->extFunctions = FUNC_2(10);
    if (VAR_0->extFunctions == ((void*)0))
        return (-1);

    VAR_4 = FUNC_1(VAR_0->extFunctions, VAR_1, VAR_2,
                           FUNC_0(VAR_3));

    return(VAR_4);
}
