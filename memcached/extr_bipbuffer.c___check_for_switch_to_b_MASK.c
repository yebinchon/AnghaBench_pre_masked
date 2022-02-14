
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ a_end; scalar_t__ a_start; scalar_t__ b_end; int b_inuse; } ;
typedef TYPE_1__ bipbuf_t ;



__attribute__((used)) static void FUNC_0(bipbuf_t* VAR_0)
{
    if (VAR_0->size - VAR_0->a_end < VAR_0->a_start - VAR_0->b_end)
        VAR_0->b_inuse = 1;
}
