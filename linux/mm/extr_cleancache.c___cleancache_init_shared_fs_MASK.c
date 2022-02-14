
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int cleancache_poolid; int s_uuid; } ;
struct TYPE_2__ {int (* init_shared_fs ) (int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct super_block *VAR_4)
{
 int VAR_5 = VAR_0;

 if (VAR_3) {
  VAR_5 = VAR_3->init_shared_fs(&VAR_4->s_uuid, VAR_2);
  if (VAR_5 < 0)
   VAR_5 = VAR_1;
 }
 VAR_4->cleancache_poolid = VAR_5;
}
