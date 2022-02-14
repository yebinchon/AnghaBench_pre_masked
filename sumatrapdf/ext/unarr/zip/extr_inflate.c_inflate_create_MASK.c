
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inflate64; } ;
typedef TYPE_1__ inflate_state ;


 TYPE_1__* FUNC_0 (int,int) ;

inflate_state *FUNC_1(bool VAR_0)
{
    inflate_state *VAR_1 = FUNC_0(1, sizeof(inflate_state));
    if (VAR_1)
        VAR_1->inflate64 = VAR_0;
    return VAR_1;
}
