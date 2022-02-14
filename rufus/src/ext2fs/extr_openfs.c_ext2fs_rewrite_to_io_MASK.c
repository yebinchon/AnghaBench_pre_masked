
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ io_channel ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_3__ {int flags; scalar_t__ image_io; scalar_t__ io; int blocksize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

errcode_t FUNC_2(ext2_filsys VAR_6, io_channel VAR_7)
{
 errcode_t VAR_8;

 if ((VAR_6->flags & VAR_4) == 0)
  return VAR_0;
 VAR_8 = FUNC_1(VAR_7, VAR_6->blocksize);
 if (VAR_8)
  return VAR_8;
 if ((VAR_7 == VAR_6->image_io) || (VAR_7 == VAR_6->io))
  return 0;
 if ((VAR_6->image_io != VAR_6->io) &&
     VAR_6->image_io)
  FUNC_0(VAR_6->image_io);
 if (VAR_6->io)
  FUNC_0(VAR_6->io);
 VAR_6->io = VAR_6->image_io = VAR_7;
 VAR_6->flags |= VAR_2 | VAR_5 |
  VAR_1 | VAR_3;
 VAR_6->flags &= ~VAR_4;
 return 0;
}
