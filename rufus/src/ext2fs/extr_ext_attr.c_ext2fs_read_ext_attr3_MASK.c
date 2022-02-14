
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_4__ {int flags; int blocksize; int io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_2 (void*,void*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,void*) ;

errcode_t FUNC_4(ext2_filsys VAR_2, blk64_t VAR_3, void *VAR_4,
    ext2_ino_t VAR_5)
{
 int VAR_6 = 0;
 errcode_t VAR_7;

 VAR_7 = FUNC_3(VAR_2->io, VAR_3, 1, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (!(VAR_2->flags & VAR_1) &&
     !FUNC_1(VAR_2, VAR_5, VAR_3, VAR_4))
  VAR_6 = 1;





 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == 0 && VAR_6)
  VAR_7 = VAR_0;

 return VAR_7;
}
