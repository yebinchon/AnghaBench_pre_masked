
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_msgqueue_chunk {int * next; } ;
struct TYPE_4__ {scalar_t__ pos; struct nn_msgqueue_chunk* chunk; } ;
struct TYPE_3__ {scalar_t__ pos; struct nn_msgqueue_chunk* chunk; } ;
struct nn_msgqueue {size_t maxmem; int * cache; TYPE_2__ in; TYPE_1__ out; scalar_t__ mem; scalar_t__ count; } ;


 int FUNC_0 (struct nn_msgqueue_chunk*) ;
 struct nn_msgqueue_chunk* FUNC_1 (int,char*) ;

void FUNC_2 (struct nn_msgqueue *VAR_0, size_t VAR_1)
{
    struct nn_msgqueue_chunk *VAR_2;

    VAR_0->count = 0;
    VAR_0->mem = 0;
    VAR_0->maxmem = VAR_1;

    VAR_2 = FUNC_1 (sizeof (struct nn_msgqueue_chunk), "msgqueue chunk");
    FUNC_0 (VAR_2);
    VAR_2->next = ((void*)0);

    VAR_0->out.chunk = VAR_2;
    VAR_0->out.pos = 0;
    VAR_0->in.chunk = VAR_2;
    VAR_0->in.pos = 0;

    VAR_0->cache = ((void*)0);
}
