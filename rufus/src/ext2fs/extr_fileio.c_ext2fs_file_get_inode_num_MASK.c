
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_file_t ;
struct TYPE_3__ {scalar_t__ magic; int ino; } ;


 scalar_t__ VAR_0 ;

ext2_ino_t FUNC_0(ext2_file_t VAR_1)
{
 if (VAR_1->magic != VAR_0)
  return 0;
 return VAR_1->ino;
}
