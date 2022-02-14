
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_chunkref_chunk {int dummy; } ;
struct TYPE_2__ {int* ref; } ;
struct nn_chunkref {TYPE_1__ u; } ;


 int FUNC_0 (struct nn_chunkref*,struct nn_chunkref*,int) ;

void FUNC_1 (struct nn_chunkref *VAR_0, struct nn_chunkref *VAR_1)
{
    FUNC_0 (VAR_0, VAR_1, VAR_1->u.ref [0] == 0xff ?
        (int)sizeof (struct nn_chunkref_chunk) : VAR_1->u.ref [0] + 1);
}
