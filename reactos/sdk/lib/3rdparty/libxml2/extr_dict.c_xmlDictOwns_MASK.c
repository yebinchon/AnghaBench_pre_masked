
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlDictStringsPtr ;
typedef TYPE_2__* xmlDictPtr ;
typedef int xmlChar ;
struct TYPE_5__ {struct TYPE_5__* subdict; TYPE_1__* strings; } ;
struct TYPE_4__ {struct TYPE_4__* next; int const* free; int const* array; } ;



int
FUNC_0(xmlDictPtr VAR_0, const xmlChar *VAR_1) {
    xmlDictStringsPtr VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return(-1);
    VAR_2 = VAR_0->strings;
    while (VAR_2 != ((void*)0)) {
        if ((VAR_1 >= &VAR_2->array[0]) && (VAR_1 <= VAR_2->free))
     return(1);
 VAR_2 = VAR_2->next;
    }
    if (VAR_0->subdict)
        return(FUNC_0(VAR_0->subdict, VAR_1));
    return(0);
}
