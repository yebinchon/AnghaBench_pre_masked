
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_6__ {scalar_t__ block_map; scalar_t__ inode_map; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

errcode_t FUNC_3(ext2_filsys VAR_0)
{
 int VAR_1 = VAR_0->inode_map && FUNC_1(VAR_0);
 int VAR_2 = VAR_0->block_map && FUNC_0(VAR_0);

 if (!VAR_1 && !VAR_2)
  return 0;

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
