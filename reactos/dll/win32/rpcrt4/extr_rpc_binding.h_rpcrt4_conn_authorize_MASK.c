
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* authorize ) (TYPE_2__*,int ,unsigned char*,unsigned int,unsigned char*,unsigned int*) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,int ,unsigned char*,unsigned int,unsigned char*,unsigned int*) ;

__attribute__((used)) static inline RPC_STATUS FUNC_1(
    RpcConnection *VAR_0, BOOL VAR_1, unsigned char *VAR_2,
    unsigned int VAR_3, unsigned char *VAR_4, unsigned int *VAR_5)
{
    return VAR_0->ops->authorize(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
