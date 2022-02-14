
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_msgqueue_chunk {struct nn_msgqueue_chunk* next; int * msgs; } ;
struct TYPE_2__ {size_t pos; struct nn_msgqueue_chunk* chunk; } ;
struct nn_msgqueue {int mem; int count; struct nn_msgqueue_chunk* cache; TYPE_1__ in; } ;
struct nn_msg {int body; int sphdr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nn_msgqueue_chunk*) ;
 int FUNC_3 (struct nn_msg*,int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5 (struct nn_msgqueue *VAR_2, struct nn_msg *VAR_3)
{
    struct nn_msgqueue_chunk *VAR_4;


    if (FUNC_4 (!VAR_2->count))
        return -VAR_0;


    FUNC_3 (VAR_3, &VAR_2->in.chunk->msgs [VAR_2->in.pos]);


    ++VAR_2->in.pos;
    if (FUNC_4 (VAR_2->in.pos == VAR_1)) {
        VAR_4 = VAR_2->in.chunk;
        VAR_2->in.chunk = VAR_2->in.chunk->next;
        VAR_2->in.pos = 0;
        if (FUNC_1 (!VAR_2->cache))
            VAR_2->cache = VAR_4;
        else
            FUNC_2 (VAR_4);
    }


    --VAR_2->count;
    VAR_2->mem -= (FUNC_0 (&VAR_3->sphdr) +
        FUNC_0 (&VAR_3->body));

    return 0;
}
