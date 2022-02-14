
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* receive_fragment ) (TYPE_2__*,int **,void**) ;} ;
typedef int RpcPktHdr ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (TYPE_2__*,int **,void**) ;
 int FUNC_1 (TYPE_2__*,int **,void**) ;

__attribute__((used)) static RPC_STATUS FUNC_2(RpcConnection *VAR_0, RpcPktHdr **VAR_1, void **VAR_2)
{
    if (VAR_0->ops->receive_fragment)
        return VAR_0->ops->receive_fragment(VAR_0, VAR_1, VAR_2);
    else
        return FUNC_0(VAR_0, VAR_1, VAR_2);
}
