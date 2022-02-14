
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t written; size_t curr; } ;
typedef TYPE_1__ WPACKET ;


 int FUNC_0 (TYPE_1__*,size_t,unsigned char**) ;

int FUNC_1(WPACKET *VAR_0, size_t VAR_1, unsigned char **VAR_2)
{
    if (!FUNC_0(VAR_0, VAR_1, VAR_2))
        return 0;

    VAR_0->written += VAR_1;
    VAR_0->curr += VAR_1;
    return 1;
}
