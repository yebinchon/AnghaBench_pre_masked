
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_chunkref_chunk {int tag; void* chunk; } ;
struct nn_chunkref {int dummy; } ;



void FUNC_0 (struct nn_chunkref *VAR_0, void *VAR_1)
{
    struct nn_chunkref_chunk *VAR_2;

    VAR_2 = (struct nn_chunkref_chunk*) VAR_0;
    VAR_2->tag = 0xff;
    VAR_2->chunk = VAR_1;
}
