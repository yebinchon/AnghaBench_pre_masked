
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_inuse; int b_end; int a_end; scalar_t__ data; } ;
typedef TYPE_1__ bipbuf_t ;


 int const FUNC_0 (TYPE_1__*) ;

unsigned char *FUNC_1(bipbuf_t* VAR_0, const int VAR_1)
{
    if (FUNC_0(VAR_0) < VAR_1)
        return 0;
    if (1 == VAR_0->b_inuse)
    {
        return (unsigned char *)VAR_0->data + VAR_0->b_end;
    }
    else
    {
        return (unsigned char *)VAR_0->data + VAR_0->a_end;
    }
}
