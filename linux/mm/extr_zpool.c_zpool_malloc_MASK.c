
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpool {int pool; TYPE_1__* driver; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* malloc ) (int ,size_t,int ,unsigned long*) ;} ;


 int FUNC_0 (int ,size_t,int ,unsigned long*) ;

int FUNC_1(struct zpool *VAR_0, size_t VAR_1, gfp_t VAR_2,
   unsigned long *VAR_3)
{
 return VAR_0->driver->malloc(VAR_0->pool, VAR_1, VAR_2, VAR_3);
}
