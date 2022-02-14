
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef TYPE_3__* block_entry_t ;
struct TYPE_24__ {int i_flags; } ;
struct TYPE_23__ {int sha; int physblock; } ;
struct TYPE_22__ {int flags; unsigned int pos; TYPE_8__ inode; int ino; int physblock; int blockno; scalar_t__ buf; TYPE_1__* fs; } ;
struct TYPE_21__ {unsigned int blocksize; int flags; int block_sha_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (TYPE_8__*) ;
 int VAR_10 ;
 TYPE_3__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,TYPE_8__*,int ,int,int ,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,void const*,unsigned int,unsigned int*) ;
 int FUNC_6 (int ,TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_8__*,int) ;
 int FUNC_9 (unsigned char const*,unsigned int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,TYPE_8__*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (scalar_t__,char const*,unsigned int) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;

errcode_t FUNC_15(ext2_file_t VAR_11, const void *VAR_12,
       unsigned int VAR_13, unsigned int *VAR_14)
{
 ext2_filsys VAR_15;
 errcode_t VAR_16 = 0;
 unsigned int VAR_17, VAR_18, VAR_19 = 0;
 const char *VAR_20 = (const char *) VAR_12;
 block_entry_t VAR_21 = ((void*)0), VAR_22 = ((void*)0);
 int VAR_23 = 0;

 FUNC_0(VAR_11, VAR_5);
 VAR_15 = VAR_11->fs;

 if (!(VAR_11->flags & VAR_8))
  return VAR_3;


 if (VAR_11->inode.i_flags & VAR_10) {
  VAR_16 = FUNC_5(VAR_11, VAR_12, VAR_13,
             VAR_14);
  if (VAR_16 != VAR_4)
   return VAR_16;

  VAR_16 = 0;
 }

 while (VAR_13 > 0) {
  VAR_16 = FUNC_14(VAR_11);
  if (VAR_16)
   goto fail;

  VAR_17 = VAR_11->pos % VAR_15->blocksize;
  VAR_18 = VAR_15->blocksize - VAR_17;
  if (VAR_18 > VAR_13)
   VAR_18 = VAR_13;





  VAR_16 = FUNC_12(VAR_11, (VAR_18 == VAR_15->blocksize));
  if (VAR_16)
   goto fail;

  VAR_11->flags |= VAR_7;
  FUNC_13(VAR_11->buf+VAR_17, VAR_20, VAR_18);





  if (!VAR_11->physblock) {
   VAR_23 = (VAR_11->ino ? VAR_0 : 0);
   if (VAR_15->flags & VAR_9) {
    VAR_21 = FUNC_2(1, sizeof(*VAR_21));
    if (!VAR_21) {
     VAR_16 = VAR_6;
     goto fail;
    }
    FUNC_9((const unsigned char*)VAR_11->buf,
      VAR_15->blocksize, VAR_21->sha);
    VAR_22 = FUNC_7(
       VAR_15->block_sha_map,
       VAR_21->sha,
       sizeof(VAR_21->sha));
   }

   if (VAR_22) {
    VAR_11->physblock = VAR_22->physblock;
    VAR_23 |= VAR_2;
    FUNC_11(VAR_21);
    VAR_21 = ((void*)0);
   }

   VAR_16 = FUNC_3(VAR_15, VAR_11->ino, &VAR_11->inode,
           VAR_1,
           VAR_23,
           VAR_11->blockno, 0,
           &VAR_11->physblock);
   if (VAR_16) {
    FUNC_11(VAR_21);
    VAR_21 = ((void*)0);
    goto fail;
   }

   if (VAR_21) {
    VAR_21->physblock = VAR_11->physblock;
    FUNC_6(VAR_15->block_sha_map, VAR_21,
     VAR_21->sha, sizeof(VAR_21->sha));
   }

   if (VAR_23 & VAR_2) {
    FUNC_8(VAR_15, &VAR_11->inode, 1);
    FUNC_10(VAR_15, VAR_11->ino, &VAR_11->inode);
   }
  }

  VAR_11->pos += VAR_18;
  VAR_20 += VAR_18;
  VAR_19 += VAR_18;
  VAR_13 -= VAR_18;
 }

fail:

 if (VAR_19 != 0 && FUNC_1(&VAR_11->inode) < VAR_11->pos) {
  errcode_t VAR_24;

  VAR_24 = FUNC_4(VAR_11, VAR_11->pos);
  if (VAR_16 == 0)
   VAR_16 = VAR_24;
 }

 if (VAR_14)
  *VAR_14 = VAR_19;
 return VAR_16;
}
