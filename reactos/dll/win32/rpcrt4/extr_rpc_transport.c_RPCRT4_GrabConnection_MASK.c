
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref; } ;
typedef TYPE_1__ RpcConnection ;
typedef int LONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;

RpcConnection *FUNC_2(RpcConnection *VAR_0)
{
    LONG VAR_1 = FUNC_0(&VAR_0->ref);
    FUNC_1("%p ref=%u\n", VAR_0, VAR_1);
    return VAR_0;
}
