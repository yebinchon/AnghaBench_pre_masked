
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef char ext2_inode_large ;
typedef char ext2_inode ;
typedef int ext2_ino_t ;
typedef TYPE_3__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_20__ {scalar_t__ (* write_inode ) (TYPE_3__*,int,char*) ;int flags; int inode_blocks_per_group; unsigned long blocksize; TYPE_2__* icache; int io; TYPE_11__* super; } ;
struct TYPE_19__ {unsigned int cache_size; int buffer_blk; scalar_t__ buffer; TYPE_1__* cache; } ;
struct TYPE_18__ {int ino; char* inode; } ;
struct TYPE_17__ {int s_inodes_count; int s_first_data_block; } ;


 int FUNC_0 (TYPE_11__*) ;
 unsigned long FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_11__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_11__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (char**) ;
 scalar_t__ FUNC_8 (int,char**) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,char*) ;
 int FUNC_10 (TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int,char*,int,int ) ;
 int FUNC_12 (TYPE_3__*,char*,char*,int,int) ;
 scalar_t__ FUNC_13 (int ,int,int,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int,int,scalar_t__) ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int,char*) ;

errcode_t FUNC_17(ext2_filsys VAR_10, ext2_ino_t VAR_11,
         struct ext2_inode * VAR_12, int VAR_13,
         int VAR_14)
{
 blk64_t VAR_15;
 dgrp_t VAR_16;
 unsigned long VAR_17, VAR_18;
 errcode_t VAR_19 = 0;
 struct ext2_inode_large *VAR_20;
 char *VAR_21;
 unsigned VAR_22;
 int VAR_23;
 int VAR_24 = FUNC_4(VAR_10->super);

 FUNC_2(VAR_10, VAR_3);


 if (VAR_10->write_inode) {
  VAR_19 = (VAR_10->write_inode)(VAR_10, VAR_11, VAR_12);
  if (VAR_19 != VAR_1)
   return VAR_19;
 }

 if ((VAR_11 == 0) || (VAR_11 > VAR_10->super->s_inodes_count))
  return VAR_0;


 VAR_19 = FUNC_8(VAR_24, &VAR_20);
 if (VAR_19)
  return VAR_19;

 if (VAR_13 < VAR_24) {
  VAR_19 = FUNC_11(VAR_10, VAR_11,
         (struct ext2_inode *)VAR_20,
         VAR_24, VAR_8);
  if (VAR_19)
   goto errout;
 }


 if (VAR_10->icache) {
  for (VAR_22=0; VAR_22 < VAR_10->icache->cache_size; VAR_22++) {
   if (VAR_10->icache->cache[VAR_22].ino == VAR_11) {
    FUNC_15(VAR_10->icache->cache[VAR_22].inode, VAR_12,
           (VAR_13 > VAR_24) ? VAR_24 : VAR_13);
    break;
   }
  }
 } else {
  VAR_19 = FUNC_6(VAR_10, 4);
  if (VAR_19)
   goto errout;
 }
 FUNC_15(VAR_20, VAR_12, (VAR_13 > VAR_24) ? VAR_24 : VAR_13);

 if (!(VAR_10->flags & VAR_7)) {
  VAR_19 = VAR_5;
  goto errout;
 }





 if ((VAR_14 & VAR_9) == 0) {
  VAR_19 = FUNC_9(VAR_10, VAR_11, VAR_20);
  if (VAR_19)
   goto errout;
 }

 VAR_16 = (VAR_11 - 1) / FUNC_3(VAR_10->super);
 VAR_18 = ((VAR_11 - 1) % FUNC_3(VAR_10->super)) *
  FUNC_4(VAR_10->super);
 VAR_17 = VAR_18 >> FUNC_1(VAR_10->super);
 VAR_15 = FUNC_10(VAR_10, (unsigned) VAR_16);
 if (!VAR_15) {
  VAR_19 = VAR_4;
  goto errout;
 }
 if ((VAR_15 < VAR_10->super->s_first_data_block) ||
     (VAR_15 + VAR_10->inode_blocks_per_group - 1 >=
      FUNC_5(VAR_10->super))) {
  VAR_19 = VAR_2;
  goto errout;
 }
 VAR_15 += VAR_17;

 VAR_18 &= (FUNC_0(VAR_10->super) - 1);

 VAR_21 = (char *) VAR_20;

 while (VAR_24) {
  VAR_23 = VAR_24;
  if ((VAR_18 + VAR_24) > VAR_10->blocksize)
   VAR_23 = VAR_10->blocksize - VAR_18;

  if (VAR_10->icache->buffer_blk != VAR_15) {
   VAR_19 = FUNC_13(VAR_10->io, VAR_15, 1,
           VAR_10->icache->buffer);
   if (VAR_19)
    goto errout;
   VAR_10->icache->buffer_blk = VAR_15;
  }


  FUNC_15((char *) VAR_10->icache->buffer + (unsigned) VAR_18,
         VAR_21, VAR_23);

  VAR_19 = FUNC_14(VAR_10->io, VAR_15, 1,
           VAR_10->icache->buffer);
  if (VAR_19)
   goto errout;

  VAR_18 = 0;
  VAR_21 += VAR_23;
  VAR_24 -= VAR_23;
  VAR_15++;
 }

 VAR_10->flags |= VAR_6;
errout:
 FUNC_7(&VAR_20);
 return VAR_19;
}
