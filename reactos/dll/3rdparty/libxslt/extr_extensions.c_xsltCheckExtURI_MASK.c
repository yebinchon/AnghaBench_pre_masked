
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltExtDefPtr ;
typedef int xmlChar ;
struct TYPE_5__ {struct TYPE_5__* next; int URI; } ;
struct TYPE_4__ {int * nsDefs; } ;


 scalar_t__ FUNC_0 (int const*,int ) ;

int
FUNC_1(xsltStylesheetPtr VAR_0, const xmlChar * VAR_1)
{
    xsltExtDefPtr VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_0->nsDefs == ((void*)0)))
        return (0);
    if (VAR_1 == ((void*)0))
        return (0);
    VAR_2 = (xsltExtDefPtr) VAR_0->nsDefs;
    while (VAR_2 != ((void*)0)) {
        if (FUNC_0(VAR_1, VAR_2->URI))
            return (1);
        VAR_2 = VAR_2->next;
    }
    return (0);
}
