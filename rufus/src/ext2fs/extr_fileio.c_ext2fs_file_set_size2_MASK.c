
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ext2_off64_t ;
typedef TYPE_1__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_10__ {int blocksize; int super; } ;
struct TYPE_9__ {int inode; scalar_t__ ino; TYPE_2__* fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,int *,int ,int,unsigned long long) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int *) ;

errcode_t FUNC_8(ext2_file_t VAR_2, ext2_off64_t VAR_3)
{
 ext2_off64_t VAR_4;
 errcode_t VAR_5;
 blk64_t VAR_6, VAR_7;

 FUNC_1(VAR_2, VAR_1);

 if (VAR_3 && FUNC_3(VAR_2->fs, &VAR_2->inode,
     (VAR_3 - 1) / VAR_2->fs->blocksize))
  return VAR_0;
 VAR_7 = ((VAR_3 + VAR_2->fs->blocksize - 1) >>
     FUNC_0(VAR_2->fs->super));
 VAR_4 = FUNC_2(&VAR_2->inode);
 VAR_6 = ((VAR_4 + VAR_2->fs->blocksize - 1) >>
        FUNC_0(VAR_2->fs->super));

 VAR_5 = FUNC_5(VAR_2->fs, &VAR_2->inode, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->ino) {
  VAR_5 = FUNC_7(VAR_2->fs, VAR_2->ino, &VAR_2->inode);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_7 >= VAR_6)
  return 0;

 return FUNC_6(VAR_2->fs, VAR_2->ino, &VAR_2->inode, 0,
       VAR_7, ~0ULL);
}
