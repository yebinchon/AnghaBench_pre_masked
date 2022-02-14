
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ io_channel ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_3__ {int flags; scalar_t__ image_io; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;

errcode_t FUNC_0(ext2_filsys VAR_2, io_channel *VAR_3)
{
 if ((VAR_2->flags & VAR_1) == 0)
  return VAR_0;
 if (VAR_3) {
  *VAR_3 = (VAR_2->image_io == VAR_2->io) ? 0 : VAR_2->io;
 }
 return 0;
}
