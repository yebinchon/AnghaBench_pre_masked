
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xsltTransformFunction ;
typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xmlChar ;
typedef int * XML_CAST_FPTR ;
struct TYPE_3__ {int * extElements; } ;


 int * FUNC_0 (int *,int const*,int const*) ;
 int * FUNC_1 (int const*,int const*) ;

xsltTransformFunction
FUNC_2(xsltTransformContextPtr VAR_0,
                     const xmlChar * VAR_1, const xmlChar * VAR_2)
{
    xsltTransformFunction VAR_3;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
        return (((void*)0));

    if ((VAR_0 != ((void*)0)) && (VAR_0->extElements != ((void*)0))) {
        XML_CAST_FPTR(VAR_4) = FUNC_0(VAR_0->extElements, VAR_1, VAR_2);
        if (VAR_4 != ((void*)0)) {
            return(VAR_4);
        }
    }

    VAR_3 = FUNC_1(VAR_1, VAR_2);

    return (VAR_3);
}
