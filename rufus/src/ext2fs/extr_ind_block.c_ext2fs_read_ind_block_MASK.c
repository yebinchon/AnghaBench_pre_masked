
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
struct TYPE_3__ {int blocksize; int flags; scalar_t__ io; scalar_t__ image_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int,void*) ;
 int FUNC_2 (void*,int ,int) ;

errcode_t FUNC_3(ext2_filsys VAR_1, blk_t VAR_2, void *VAR_3)
{
 errcode_t VAR_4;






 if ((VAR_1->flags & VAR_0) &&
     (VAR_1->io != VAR_1->image_io))
  FUNC_2(VAR_3, 0, VAR_1->blocksize);
 else {
  VAR_4 = FUNC_1(VAR_1->io, VAR_2, 1, VAR_3);
  if (VAR_4)
   return VAR_4;
 }





 return 0;
}
