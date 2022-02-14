
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xsltTransformFunction ;
typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int * extElements; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int const*,int ) ;
 int * FUNC_2 (int) ;

int
FUNC_3(xsltTransformContextPtr VAR_0, const xmlChar * VAR_1,
                       const xmlChar * VAR_2, xsltTransformFunction VAR_3)
{
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) ||
        (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return (-1);
    if (VAR_0->extElements == ((void*)0))
        VAR_0->extElements = FUNC_2(10);
    if (VAR_0->extElements == ((void*)0))
        return (-1);
    return (FUNC_1
            (VAR_0->extElements, VAR_1, VAR_2, FUNC_0(VAR_3)));
}
