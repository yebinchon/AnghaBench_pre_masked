
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ flags; int * post_stream; scalar_t__ connection; scalar_t__ request; TYPE_1__* vtbl; } ;
struct TYPE_5__ {int (* close_connection ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Protocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Protocol *VAR_0)
{
    VAR_0->vtbl->close_connection(VAR_0);

    if(VAR_0->request)
        FUNC_1(VAR_0->request);

    if(VAR_0->connection)
        FUNC_1(VAR_0->connection);

    if(VAR_0->post_stream) {
        FUNC_0(VAR_0->post_stream);
        VAR_0->post_stream = ((void*)0);
    }

    VAR_0->flags = 0;
}
