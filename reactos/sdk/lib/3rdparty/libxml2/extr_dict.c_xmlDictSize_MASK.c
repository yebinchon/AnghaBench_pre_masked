
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* xmlDictPtr ;
struct TYPE_5__ {int nbElems; TYPE_1__* subdict; } ;
struct TYPE_4__ {int nbElems; } ;



int
FUNC_0(xmlDictPtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return(-1);
    if (VAR_0->subdict)
        return(VAR_0->nbElems + VAR_0->subdict->nbElems);
    return(VAR_0->nbElems);
}
