
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctx; scalar_t__ AuthInfo; } ;
typedef TYPE_1__ RpcConnection ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_6(RpcConnection *VAR_2)
{
    BOOL VAR_3;

    FUNC_4("(%p)\n", VAR_2);

    if (VAR_2->AuthInfo && FUNC_3(&VAR_2->ctx))
        return FUNC_1(VAR_2);

    VAR_3 = FUNC_2();
    if (!VAR_3)
    {
        FUNC_5("RevertToSelf failed with error %u\n", FUNC_0());
        return VAR_0;
    }
    return VAR_1;
}
