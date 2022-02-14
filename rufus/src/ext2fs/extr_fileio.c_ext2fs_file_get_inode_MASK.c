
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_inode {int dummy; } ;
typedef TYPE_1__* ext2_file_t ;
struct TYPE_3__ {scalar_t__ magic; struct ext2_inode inode; } ;


 scalar_t__ VAR_0 ;

struct ext2_inode *FUNC_0(ext2_file_t VAR_1)
{
 if (VAR_1->magic != VAR_0)
  return ((void*)0);
 return &VAR_1->inode;
}
