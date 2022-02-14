
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserNodeInfoSeqPtr ;
struct TYPE_3__ {int * buffer; scalar_t__ maximum; scalar_t__ length; } ;



void
FUNC_0(xmlParserNodeInfoSeqPtr VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    VAR_0->length = 0;
    VAR_0->maximum = 0;
    VAR_0->buffer = ((void*)0);
}
