
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_inode_scan ;
struct TYPE_3__ {scalar_t__ magic; int scan_flags; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(ext2_inode_scan VAR_1, int VAR_2,
       int VAR_3)
{
 int VAR_4;

 if (!VAR_1 || (VAR_1->magic != VAR_0))
  return 0;

 VAR_4 = VAR_1->scan_flags;
 VAR_1->scan_flags &= ~VAR_3;
 VAR_1->scan_flags |= VAR_2;
 return VAR_4;
}
