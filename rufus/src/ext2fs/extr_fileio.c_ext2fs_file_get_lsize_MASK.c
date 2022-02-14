
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef int __u64 ;
struct TYPE_3__ {scalar_t__ magic; int inode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

errcode_t FUNC_1(ext2_file_t VAR_1, __u64 *VAR_2)
{
 if (VAR_1->magic != VAR_0)
  return VAR_0;
 *VAR_2 = FUNC_0(&VAR_1->inode);
 return 0;
}
