
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * const node; } ;
typedef TYPE_1__ xmlParserNodeInfo ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlNodePtr ;
struct TYPE_8__ {unsigned long length; TYPE_1__ const* buffer; } ;
struct TYPE_7__ {TYPE_3__ node_seq; } ;


 unsigned long FUNC_0 (TYPE_3__*,int * const) ;

const xmlParserNodeInfo *
FUNC_1(const xmlParserCtxtPtr VAR_0, const xmlNodePtr VAR_1)
{
    unsigned long VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return (((void*)0));

    VAR_2 = FUNC_0(&VAR_0->node_seq, VAR_1);
    if (VAR_2 < VAR_0->node_seq.length
        && VAR_0->node_seq.buffer[VAR_2].node == VAR_1)
        return &VAR_0->node_seq.buffer[VAR_2];
    else
        return ((void*)0);
}
