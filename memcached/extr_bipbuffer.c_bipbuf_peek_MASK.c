
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; scalar_t__ a_start; scalar_t__ data; } ;
typedef TYPE_1__ bipbuf_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

unsigned char *FUNC_1(const bipbuf_t* VAR_0, const unsigned int VAR_1)
{

    if (VAR_0->size < VAR_0->a_start + VAR_1)
        return ((void*)0);

    if (FUNC_0(VAR_0))
        return ((void*)0);

    return (unsigned char *)VAR_0->data + VAR_0->a_start;
}
