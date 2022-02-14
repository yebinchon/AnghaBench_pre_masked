
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int a_end; unsigned int a_start; scalar_t__ data; } ;
typedef TYPE_1__ bipbuf_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

unsigned char *FUNC_1(const bipbuf_t* VAR_0, unsigned int *VAR_1)
{
    if (FUNC_0(VAR_0))
        return ((void*)0);

    *VAR_1 = VAR_0->a_end - VAR_0->a_start;
    return (unsigned char*)VAR_0->data + VAR_0->a_start;
}
