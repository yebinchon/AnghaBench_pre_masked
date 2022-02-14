
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxsize; int * buf; int * staticbuf; } ;
typedef TYPE_1__ WPACKET ;
typedef int BUF_MEM ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

int FUNC_3(WPACKET *VAR_0, BUF_MEM *VAR_1, size_t VAR_2)
{

    if (!FUNC_1(VAR_1 != ((void*)0)))
        return 0;

    VAR_0->staticbuf = ((void*)0);
    VAR_0->buf = VAR_1;
    VAR_0->maxsize = FUNC_0(VAR_2);

    return FUNC_2(VAR_0, VAR_2);
}
