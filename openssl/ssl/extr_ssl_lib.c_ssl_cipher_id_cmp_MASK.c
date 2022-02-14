
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ SSL_CIPHER ;



int FUNC_0(const SSL_CIPHER *VAR_0, const SSL_CIPHER *VAR_1)
{
    if (VAR_0->id > VAR_1->id)
        return 1;
    if (VAR_0->id < VAR_1->id)
        return -1;
    return 0;
}
