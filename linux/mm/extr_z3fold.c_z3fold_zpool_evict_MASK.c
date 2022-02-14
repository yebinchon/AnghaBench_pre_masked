
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z3fold_pool {scalar_t__ zpool; TYPE_1__* zpool_ops; } ;
struct TYPE_2__ {int (* evict ) (scalar_t__,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct z3fold_pool *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->zpool && VAR_1->zpool_ops && VAR_1->zpool_ops->evict)
  return VAR_1->zpool_ops->evict(VAR_1->zpool, VAR_2);
 else
  return -VAR_0;
}
