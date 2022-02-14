
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ readbuf; } ;
typedef TYPE_1__ lwIP_netconn ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(lwIP_netconn *VAR_0)
{
    FUNC_0(VAR_0);
    if (VAR_0->readbuf)
    {
        FUNC_2(&VAR_0->readbuf);
    }

    FUNC_1(VAR_0);
    VAR_0 = ((void*)0);
}
