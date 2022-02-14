
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curr; } ;
typedef TYPE_1__ WPACKET ;


 unsigned char* FUNC_0 (TYPE_1__*) ;

unsigned char *FUNC_1(WPACKET *VAR_0)
{
    unsigned char *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    return VAR_1 + VAR_0->curr;
}
