
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct nn_chunkref_chunk {int tag; int chunk; } ;
struct TYPE_2__ {scalar_t__* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int ,int *) ;

void FUNC_2 (struct nn_chunkref *VAR_1, size_t VAR_2)
{
    int VAR_3;
    struct nn_chunkref_chunk *VAR_4;

    if (VAR_2 < VAR_0) {
        VAR_1->u.ref [0] = (uint8_t) VAR_2;
        return;
    }

    VAR_4 = (struct nn_chunkref_chunk*) VAR_1;
    VAR_4->tag = 0xff;
    VAR_3 = FUNC_1 (VAR_2, 0, &VAR_4->chunk);
    FUNC_0 (VAR_3 == 0);
}
