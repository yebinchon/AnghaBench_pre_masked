
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode {int i_flags; int i_size; int * i_block; int i_mode; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_7__ {int io; int blocksize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_inode*,int *,int ,int ,int *,int *) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (int ,char**) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,struct ext2_inode*,char*,int *) ;
 scalar_t__ FUNC_6 (struct ext2_inode*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_8 (int ,int ,int,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int ,char*,int ,int,int,char*,int *) ;
 int FUNC_10 (char*,int ,int ,int ,int) ;

__attribute__((used)) static errcode_t FUNC_11(ext2_filsys VAR_3, ext2_ino_t VAR_4, ext2_ino_t VAR_5,
        ext2_ino_t VAR_6, int VAR_7,
        char *VAR_8, ext2_ino_t *VAR_9)
{
 char *VAR_10;
 char *VAR_11 = 0;
 errcode_t VAR_12;
 struct ext2_inode VAR_13;
 blk64_t VAR_14;






 VAR_12 = FUNC_7 (VAR_3, VAR_6, &VAR_13);
 if (VAR_12) return VAR_12;
 if (!FUNC_0 (VAR_13.i_mode)) {
  *VAR_9 = VAR_6;
  return 0;
 }
 if (VAR_7++ >= VAR_0)
  return VAR_1;

 if (FUNC_6(&VAR_13))
  VAR_10 = (char *)&(VAR_13.i_block[0]);
 else if (VAR_13.i_flags & VAR_2) {
  VAR_12 = FUNC_4(VAR_13.i_size, &VAR_11);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_5(VAR_3, VAR_6,
      &VAR_13, VAR_11, ((void*)0));
  if (VAR_12) {
   FUNC_2(&VAR_11);
   return VAR_12;
  }
  VAR_10 = VAR_11;
 } else {
  VAR_12 = FUNC_1(VAR_3, VAR_6, &VAR_13, ((void*)0), 0, 0, ((void*)0), &VAR_14);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_3(VAR_3->blocksize, &VAR_11);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_8(VAR_3->io, VAR_14, 1, VAR_11);
  if (VAR_12) {
   FUNC_2(&VAR_11);
   return VAR_12;
  }
  VAR_10 = VAR_11;
 }

 VAR_12 = FUNC_9(VAR_3, VAR_4, VAR_5, VAR_10, VAR_13.i_size, 1,
       VAR_7, VAR_8, VAR_9);
 if (VAR_11)
  FUNC_2(&VAR_11);
 return VAR_12;
}
