
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpool {int pool; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* unmap ) (int ,unsigned long) ;} ;


 int FUNC_0 (int ,unsigned long) ;

void FUNC_1(struct zpool *VAR_0, unsigned long VAR_1)
{
 VAR_0->driver->unmap(VAR_0->pool, VAR_1);
}
