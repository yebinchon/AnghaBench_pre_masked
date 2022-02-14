
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* is_authorized ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline BOOL FUNC_1(RpcConnection *VAR_0)
{
    return VAR_0->ops->is_authorized(VAR_0);
}
