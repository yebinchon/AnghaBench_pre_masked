
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; scalar_t__ AuthInfo; } ;
typedef TYPE_1__ RpcConnection ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *) ;

BOOL FUNC_1(RpcConnection *VAR_0)
{
    return VAR_0->AuthInfo && FUNC_0(&VAR_0->ctx);
}
