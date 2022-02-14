
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxsize; int * buf; int * staticbuf; } ;
typedef TYPE_1__ WPACKET ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(WPACKET *VAR_0, size_t VAR_1)
{
    VAR_0->staticbuf = ((void*)0);
    VAR_0->buf = ((void*)0);
    VAR_0->maxsize = FUNC_0(VAR_1);

    return FUNC_1(VAR_0, 0);
}
