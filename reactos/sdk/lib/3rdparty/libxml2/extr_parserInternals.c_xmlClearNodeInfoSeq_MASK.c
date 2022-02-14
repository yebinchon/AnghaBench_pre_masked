
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserNodeInfoSeqPtr ;
struct TYPE_4__ {int * buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(xmlParserNodeInfoSeqPtr VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->buffer != ((void*)0))
        FUNC_0(VAR_0->buffer);
    FUNC_1(VAR_0);
}
