
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpool {int pool; TYPE_1__* driver; } ;
typedef enum zpool_mapmode { ____Placeholder_zpool_mapmode } zpool_mapmode ;
struct TYPE_2__ {void* (* map ) (int ,unsigned long,int) ;} ;


 void* FUNC_0 (int ,unsigned long,int) ;

void *FUNC_1(struct zpool *VAR_0, unsigned long VAR_1,
   enum zpool_mapmode VAR_2)
{
 return VAR_0->driver->map(VAR_0->pool, VAR_1, VAR_2);
}
