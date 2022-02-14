
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zpool {int pool; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* total_size ) (int ) ;} ;


 int FUNC_0 (int ) ;

u64 FUNC_1(struct zpool *VAR_0)
{
 return VAR_0->driver->total_size(VAR_0->pool);
}
