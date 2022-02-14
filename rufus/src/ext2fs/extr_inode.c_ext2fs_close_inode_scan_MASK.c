
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_inode_scan ;
struct TYPE_4__ {scalar_t__ magic; struct TYPE_4__* temp_buffer; struct TYPE_4__* inode_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(ext2_inode_scan VAR_1)
{
 if (!VAR_1 || (VAR_1->magic != VAR_0))
  return;

 FUNC_0(&VAR_1->inode_buffer);
 VAR_1->inode_buffer = ((void*)0);
 FUNC_0(&VAR_1->temp_buffer);
 VAR_1->temp_buffer = ((void*)0);
 FUNC_0(&VAR_1);
 return;
}
