
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap ;
typedef scalar_t__ errcode_t ;
struct TYPE_3__ {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static errcode_t FUNC_0(ext2fs_generic_bitmap VAR_3)
{
 if (!VAR_3 || !((VAR_3->magic == VAR_1) ||
    (VAR_3->magic == VAR_2) ||
    (VAR_3->magic == VAR_0)))
  return VAR_1;
 return 0;
}
