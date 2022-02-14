
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode_large {int dummy; } ;
typedef TYPE_1__* ext2_inode_scan ;
typedef unsigned int ext2_ino_t ;
typedef unsigned int blk64_t ;
struct TYPE_8__ {unsigned int blocksize; int super; } ;
struct TYPE_7__ {int scan_flags; unsigned int inodes_left; unsigned int inode_size; unsigned int current_inode; TYPE_2__* fs; scalar_t__ inode_buffer; int inode_buffer_blocks; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct ext2_inode_large*) ;
 int FUNC_4 (struct ext2_inode_large**) ;
 scalar_t__ FUNC_5 (int ,struct ext2_inode_large**) ;
 scalar_t__ FUNC_6 (TYPE_2__*,unsigned int,struct ext2_inode_large*) ;
 int FUNC_7 (TYPE_2__*,struct ext2_inode_large*,struct ext2_inode_large*,int ,int ) ;
 scalar_t__ FUNC_8 (struct ext2_inode_large*) ;
 int FUNC_9 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_10(ext2_inode_scan VAR_3, blk64_t VAR_4)
{
 ext2_ino_t VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 char *VAR_11;
 struct ext2_inode_large *VAR_12;
 char *VAR_13;
 unsigned int VAR_14, VAR_15;

 if (!(VAR_3->scan_flags & VAR_0))
  return;

 VAR_6 = VAR_3->inodes_left;
 VAR_9 = VAR_4 * VAR_3->fs->blocksize / VAR_3->inode_size;
 if (VAR_6 > VAR_9)
  VAR_6 = VAR_9;

 VAR_11 = (char *) VAR_3->inode_buffer;
 VAR_5 = VAR_3->current_inode + 1;
 VAR_8 = VAR_7 = 0;
 VAR_13 = FUNC_2(VAR_3);
 FUNC_9(VAR_13, 0, VAR_3->inode_buffer_blocks);
 VAR_10 = FUNC_0(VAR_3->fs->super);

 if (VAR_10 < 2)
  return;






 while (VAR_6 > 0) {
  VAR_14 = (VAR_11 - (char *)VAR_3->inode_buffer) / VAR_3->fs->blocksize;
  VAR_15 = FUNC_6(VAR_3->fs, VAR_5,
    (struct ext2_inode_large *) VAR_11) == 0;







  VAR_12 = (struct ext2_inode_large *) VAR_11;



  if (VAR_15) {
   VAR_8++;
   VAR_7++;
  } else if (FUNC_8(VAR_12) ||
      FUNC_3(VAR_3->fs, VAR_12))
   VAR_7++;


  if (VAR_7 > VAR_10 / 2) {
   unsigned int VAR_16;

   VAR_13[VAR_14] |= VAR_2;
   VAR_16 = VAR_10 -
      ((VAR_5 - 1) % VAR_10);
   if (VAR_16 > VAR_6)
    VAR_16 = VAR_6;
   VAR_6 -= VAR_16;
   VAR_11 += VAR_3->inode_size * VAR_16;
   VAR_5 += VAR_16;
   VAR_8 = VAR_7 = 0;
   continue;
  }

  if ((VAR_5 % VAR_10) == 0) {
   if (VAR_8 == 0)
    VAR_13[VAR_14] |= VAR_1;
   VAR_8 = VAR_7 = 0;
  }
  VAR_6--;
  VAR_11 += VAR_3->inode_size;
  VAR_5++;
 };




}
