
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_inuse; int a_start; int b_end; int size; int a_end; } ;
typedef TYPE_1__ bipbuf_t ;



int FUNC_0(const bipbuf_t* VAR_0)
{
    if (1 == VAR_0->b_inuse)

        return VAR_0->a_start - VAR_0->b_end;
    else
        return VAR_0->size - VAR_0->a_end;
}
