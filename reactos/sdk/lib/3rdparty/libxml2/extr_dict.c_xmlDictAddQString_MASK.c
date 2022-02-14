
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlDictStringsPtr ;
typedef int xmlDictStrings ;
typedef TYPE_2__* xmlDictPtr ;
typedef int xmlChar ;
struct TYPE_6__ {size_t limit; TYPE_1__* strings; } ;
struct TYPE_5__ {size_t size; scalar_t__ nbStrings; int * free; struct TYPE_5__* next; int * array; int * end; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int VAR_0 ;
 int const* FUNC_2 (TYPE_2__*,int const*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static const xmlChar *
FUNC_4(xmlDictPtr VAR_1, const xmlChar *VAR_2, unsigned int VAR_3,
                 const xmlChar *VAR_4, unsigned int VAR_5)
{
    xmlDictStringsPtr VAR_6;
    const xmlChar *VAR_7;
    size_t VAR_8 = 0;
    size_t VAR_9 = 0;

    if (VAR_2 == ((void*)0)) return(FUNC_2(VAR_1, VAR_4, VAR_5));




    VAR_6 = VAR_1->strings;
    while (VAR_6 != ((void*)0)) {
 if ((size_t)(VAR_6->end - VAR_6->free) > VAR_5 + VAR_3 + 1)
     goto found_pool;
 if (VAR_6->size > VAR_8) VAR_8 = VAR_6->size;
        VAR_9 += VAR_6->size;
 VAR_6 = VAR_6->next;
    }



    if (VAR_6 == ((void*)0)) {
        if ((VAR_1->limit > 0) && (VAR_9 > VAR_1->limit)) {
            return(((void*)0));
        }

        if (VAR_8 == 0) VAR_8 = 1000;
 else VAR_8 *= 4;
        if (VAR_8 < 4 * (VAR_5 + VAR_3 + 1))
     VAR_8 = 4 * (VAR_5 + VAR_3 + 1);
 VAR_6 = (xmlDictStringsPtr) FUNC_3(sizeof(xmlDictStrings) + VAR_8);
 if (VAR_6 == ((void*)0))
     return(((void*)0));
 VAR_6->size = VAR_8;
 VAR_6->nbStrings = 0;
 VAR_6->free = &VAR_6->array[0];
 VAR_6->end = &VAR_6->array[VAR_8];
 VAR_6->next = VAR_1->strings;
 VAR_1->strings = VAR_6;



    }
found_pool:
    VAR_7 = VAR_6->free;
    FUNC_1(VAR_6->free, VAR_2, VAR_3);
    VAR_6->free += VAR_3;
    *(VAR_6->free++) = ':';
    FUNC_1(VAR_6->free, VAR_4, VAR_5);
    VAR_6->free += VAR_5;
    *(VAR_6->free++) = 0;
    VAR_6->nbStrings++;
    return(VAR_7);
}
