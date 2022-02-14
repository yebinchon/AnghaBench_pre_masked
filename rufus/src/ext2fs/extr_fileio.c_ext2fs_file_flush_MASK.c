
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_9__ {int i_flags; } ;
struct TYPE_8__ {int flags; int buf; int physblock; int blockno; int ino; TYPE_5__ inode; TYPE_1__* fs; } ;
struct TYPE_7__ {int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_5__*,int ,int ,int ,int*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ) ;

errcode_t FUNC_3(ext2_file_t VAR_8)
{
 errcode_t VAR_9;
 ext2_filsys VAR_10;
 int VAR_11;
 blk64_t VAR_12;

 FUNC_0(VAR_8, VAR_4);
 VAR_10 = VAR_8->fs;

 if (!(VAR_8->flags & VAR_6) ||
     !(VAR_8->flags & VAR_5))
  return 0;


 if (VAR_8->physblock && VAR_8->inode.i_flags & VAR_7) {
  VAR_9 = FUNC_1(VAR_10, VAR_8->ino, &VAR_8->inode, VAR_1,
          0, VAR_8->blockno, &VAR_11, &VAR_12);
  if (VAR_9)
   return VAR_9;
  if (VAR_11 & VAR_2) {
   VAR_9 = FUNC_1(VAR_10, VAR_8->ino, &VAR_8->inode,
           VAR_1, VAR_3,
           VAR_8->blockno, 0,
           &VAR_8->physblock);
   if (VAR_9)
    return VAR_9;
  }
 }





 if (!VAR_8->physblock) {
  VAR_9 = FUNC_1(VAR_10, VAR_8->ino, &VAR_8->inode,
         VAR_1, VAR_8->ino ? VAR_0 : 0,
         VAR_8->blockno, 0, &VAR_8->physblock);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_10->io, VAR_8->physblock, 1, VAR_8->buf);
 if (VAR_9)
  return VAR_9;

 VAR_8->flags &= ~VAR_5;

 return VAR_9;
}
