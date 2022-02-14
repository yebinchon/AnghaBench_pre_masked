
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpool {int pool; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* shrink ) (int ,unsigned int,unsigned int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int*) ;

int FUNC_1(struct zpool *VAR_1, unsigned int VAR_2,
   unsigned int *VAR_3)
{
 return VAR_1->driver->shrink ?
        VAR_1->driver->shrink(VAR_1->pool, VAR_2, VAR_3) : -VAR_0;
}
