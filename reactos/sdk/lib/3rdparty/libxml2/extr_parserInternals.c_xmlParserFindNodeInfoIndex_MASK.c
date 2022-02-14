
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* xmlParserNodeInfoSeqPtr ;
typedef int * xmlNodePtr ;
struct TYPE_5__ {unsigned long length; TYPE_1__* buffer; } ;
struct TYPE_4__ {int * const node; } ;



unsigned long
FUNC_0(const xmlParserNodeInfoSeqPtr VAR_0,
                           const xmlNodePtr VAR_1)
{
    unsigned long VAR_2, VAR_3, VAR_4;
    int VAR_5 = 0;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return ((unsigned long) -1);


    VAR_3 = 1;
    VAR_2 = VAR_0->length;
    VAR_4 = 0;
    while (VAR_3 <= VAR_2 && !VAR_5) {
        VAR_4 = VAR_3 + (VAR_2 - VAR_3) / 2;
        if (VAR_1 == VAR_0->buffer[VAR_4 - 1].node)
            VAR_5 = 1;
        else if (VAR_1 < VAR_0->buffer[VAR_4 - 1].node)
            VAR_2 = VAR_4 - 1;
        else
            VAR_3 = VAR_4 + 1;
    }


    if (VAR_4 == 0 || VAR_0->buffer[VAR_4 - 1].node < VAR_1)
        return VAR_4;
    else
        return VAR_4 - 1;
}
