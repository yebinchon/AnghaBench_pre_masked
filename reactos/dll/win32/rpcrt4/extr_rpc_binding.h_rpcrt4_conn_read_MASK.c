
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* read ) (TYPE_2__*,void*,unsigned int) ;} ;
typedef TYPE_2__ RpcConnection ;


 int FUNC_0 (TYPE_2__*,void*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(RpcConnection *VAR_0,
                     void *VAR_1, unsigned int VAR_2)
{
  return VAR_0->ops->read(VAR_0, VAR_1, VAR_2);
}
