
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlDictStringsPtr ;
typedef int xmlDictStrings ;
typedef TYPE_2__* xmlDictPtr ;
typedef int xmlChar ;
struct TYPE_5__ {size_t limit; TYPE_1__* strings; } ;
struct TYPE_4__ {size_t size; scalar_t__ nbStrings; int * free; struct TYPE_4__* next; int * array; int * end; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static const xmlChar *
FUNC_3(xmlDictPtr VAR_1, const xmlChar *VAR_2, unsigned int VAR_3) {
    xmlDictStringsPtr VAR_4;
    const xmlChar *VAR_5;
    size_t VAR_6 = 0;
    size_t VAR_7 = 0;




    VAR_4 = VAR_1->strings;
    while (VAR_4 != ((void*)0)) {
 if ((size_t)(VAR_4->end - VAR_4->free) > VAR_3)
     goto found_pool;
 if (VAR_4->size > VAR_6) VAR_6 = VAR_4->size;
        VAR_7 += VAR_4->size;
 VAR_4 = VAR_4->next;
    }



    if (VAR_4 == ((void*)0)) {
        if ((VAR_1->limit > 0) && (VAR_7 > VAR_1->limit)) {
            return(((void*)0));
        }

        if (VAR_6 == 0) VAR_6 = 1000;
 else VAR_6 *= 4;
        if (VAR_6 < 4 * VAR_3)
     VAR_6 = 4 * VAR_3;
 VAR_4 = (xmlDictStringsPtr) FUNC_2(sizeof(xmlDictStrings) + VAR_6);
 if (VAR_4 == ((void*)0))
     return(((void*)0));
 VAR_4->size = VAR_6;
 VAR_4->nbStrings = 0;
 VAR_4->free = &VAR_4->array[0];
 VAR_4->end = &VAR_4->array[VAR_6];
 VAR_4->next = VAR_1->strings;
 VAR_1->strings = VAR_4;



    }
found_pool:
    VAR_5 = VAR_4->free;
    FUNC_1(VAR_4->free, VAR_2, VAR_3);
    VAR_4->free += VAR_3;
    *(VAR_4->free++) = 0;
    VAR_4->nbStrings++;
    return(VAR_5);
}
