
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int nameNr; int nameMax; int const* name; int const** nameTab; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int **,int) ;

int
FUNC_2(xmlParserCtxtPtr VAR_0, const xmlChar * VAR_1)
{
    if (VAR_0 == ((void*)0)) return (-1);

    if (VAR_0->nameNr >= VAR_0->nameMax) {
        const xmlChar * *VAR_2;
        VAR_2 = (const xmlChar * *) FUNC_1((xmlChar * *)VAR_0->nameTab,
                                    VAR_0->nameMax * 2 *
                                    sizeof(VAR_0->nameTab[0]));
        if (VAR_2 == ((void*)0)) {
     goto mem_error;
        }
 VAR_0->nameTab = VAR_2;
        VAR_0->nameMax *= 2;
    }
    VAR_0->nameTab[VAR_0->nameNr] = VAR_1;
    VAR_0->name = VAR_1;
    return (VAR_0->nameNr++);
mem_error:
    FUNC_0(VAR_0, ((void*)0));
    return (-1);
}
