
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2_inode_scan ;
typedef int errcode_t ;
struct TYPE_6__ {int current_group; TYPE_1__* fs; scalar_t__ groups_left; } ;
struct TYPE_5__ {scalar_t__ group_desc_count; } ;


 int FUNC_0 (TYPE_2__*) ;

errcode_t FUNC_1(ext2_inode_scan VAR_0,
         int VAR_1)
{
 VAR_0->current_group = VAR_1 - 1;
 VAR_0->groups_left = VAR_0->fs->group_desc_count - VAR_1;
 return FUNC_0(VAR_0);
}
