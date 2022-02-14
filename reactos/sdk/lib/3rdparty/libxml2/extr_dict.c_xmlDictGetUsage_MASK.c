
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlDictStringsPtr ;
typedef TYPE_2__* xmlDictPtr ;
struct TYPE_5__ {TYPE_1__* strings; } ;
struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ size; } ;



size_t
FUNC_0(xmlDictPtr VAR_0) {
    xmlDictStringsPtr VAR_1;
    size_t VAR_2 = 0;

    if (VAR_0 == ((void*)0))
 return(0);
    VAR_1 = VAR_0->strings;
    while (VAR_1 != ((void*)0)) {
        VAR_2 += VAR_1->size;
 VAR_1 = VAR_1->next;
    }
    return(VAR_2);
}
