
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_4__ {scalar_t__ block_map; scalar_t__ inode_map; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;

errcode_t FUNC_1(ext2_filsys VAR_0)
{
 if (VAR_0->inode_map && VAR_0->block_map)
  return 0;

 return FUNC_0(VAR_0, !VAR_0->inode_map, !VAR_0->block_map);
}
