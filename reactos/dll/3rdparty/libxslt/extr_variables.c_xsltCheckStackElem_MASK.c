
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
typedef int xmlChar ;
struct TYPE_5__ {TYPE_1__* comp; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int const*,int const*) ;

__attribute__((used)) static int
FUNC_1(xsltTransformContextPtr VAR_2, const xmlChar *VAR_3,
            const xmlChar *VAR_4) {
    xsltStackElemPtr VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
 return(-1);

    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    if (VAR_5 == ((void*)0))
        return(0);
    if (VAR_5->comp != ((void*)0)) {
        if (VAR_5->comp->type == VAR_1)
     return(3);
 else if (VAR_5->comp->type == VAR_0)
     return(2);
    }

    return(1);
}
