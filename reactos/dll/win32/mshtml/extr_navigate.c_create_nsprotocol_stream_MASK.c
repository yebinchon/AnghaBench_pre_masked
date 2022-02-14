
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; scalar_t__ buf_size; TYPE_1__ nsIInputStream_iface; } ;
typedef TYPE_2__ nsProtocolStream ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static nsProtocolStream *FUNC_1(void)
{
    nsProtocolStream *VAR_1;

    VAR_1 = FUNC_0(sizeof(nsProtocolStream));
    if(!VAR_1)
        return ((void*)0);

    VAR_1->nsIInputStream_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    VAR_1->buf_size = 0;

    return VAR_1;
}
