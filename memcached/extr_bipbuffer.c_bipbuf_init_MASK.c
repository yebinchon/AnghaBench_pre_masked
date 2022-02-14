
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; scalar_t__ b_inuse; scalar_t__ b_end; scalar_t__ a_end; scalar_t__ a_start; } ;
typedef TYPE_1__ bipbuf_t ;



void FUNC_0(bipbuf_t* VAR_0, const unsigned int VAR_1)
{
    VAR_0->a_start = VAR_0->a_end = VAR_0->b_end = 0;
    VAR_0->size = VAR_1;
    VAR_0->b_inuse = 0;
}
