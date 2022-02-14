
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int cleancache_poolid; } ;
struct TYPE_2__ {int (* invalidate_fs ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct super_block *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->cleancache_poolid;
 VAR_2->cleancache_poolid = VAR_0;

 if (VAR_1 && VAR_3 >= 0)
  VAR_1->invalidate_fs(VAR_3);
}
