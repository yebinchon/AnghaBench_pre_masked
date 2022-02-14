
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nn_msgqueue_chunk {int dummy; } ;
struct TYPE_4__ {size_t pos; TYPE_2__* chunk; } ;
struct nn_msgqueue {scalar_t__ count; scalar_t__ mem; scalar_t__ maxmem; TYPE_1__ out; TYPE_2__* cache; } ;
struct nn_msg {int body; int sphdr; } ;
struct TYPE_5__ {struct TYPE_5__* next; int * msgs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,char*) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nn_msg*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5 (struct nn_msgqueue *VAR_2, struct nn_msg *VAR_3)
{
    size_t VAR_4;




    VAR_4 = FUNC_2 (&VAR_3->sphdr) + FUNC_2 (&VAR_3->body);
    if (FUNC_4 (VAR_2->count > 0 && VAR_2->mem + VAR_4 >= VAR_2->maxmem))
        return -VAR_0;


    ++VAR_2->count;
    VAR_2->mem += VAR_4;


    FUNC_3 (&VAR_2->out.chunk->msgs [VAR_2->out.pos], VAR_3);
    ++VAR_2->out.pos;



    if (FUNC_4 (VAR_2->out.pos == VAR_1)) {
        if (FUNC_4 (!VAR_2->cache)) {
            VAR_2->cache = FUNC_1 (sizeof (struct nn_msgqueue_chunk),
                "msgqueue chunk");
            FUNC_0 (VAR_2->cache);
            VAR_2->cache->next = ((void*)0);
        }
        VAR_2->out.chunk->next = VAR_2->cache;
        VAR_2->out.chunk = VAR_2->cache;
        VAR_2->cache = ((void*)0);
        VAR_2->out.pos = 0;
    }

    return 0;
}
