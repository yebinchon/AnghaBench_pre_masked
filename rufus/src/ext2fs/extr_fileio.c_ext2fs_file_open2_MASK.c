
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ext2_inode {int dummy; } ;
struct ext2_file {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_11__ {int flags; struct TYPE_11__* buf; int inode; int ino; TYPE_1__* fs; int magic; } ;
struct TYPE_10__ {int flags; int blocksize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__**) ;
 scalar_t__ FUNC_1 (int,int ,TYPE_2__**) ;
 scalar_t__ FUNC_2 (int,TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (int *,struct ext2_inode*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

errcode_t FUNC_6(ext2_filsys VAR_6, ext2_ino_t VAR_7,
       struct ext2_inode *VAR_8,
       int VAR_9, ext2_file_t *VAR_10)
{
 ext2_file_t VAR_11;
 errcode_t VAR_12;





 if ((VAR_9 & (VAR_4 | VAR_2)) &&
     !(VAR_6->flags & VAR_5))
  return VAR_1;

 VAR_12 = FUNC_2(sizeof(struct ext2_file), &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_5(VAR_11, 0, sizeof(struct ext2_file));
 VAR_11->magic = VAR_0;
 VAR_11->fs = VAR_6;
 VAR_11->ino = VAR_7;
 VAR_11->flags = VAR_9 & VAR_3;

 if (VAR_8) {
  FUNC_4(&VAR_11->inode, VAR_8, sizeof(struct ext2_inode));
 } else {
  VAR_12 = FUNC_3(VAR_6, VAR_7, &VAR_11->inode);
  if (VAR_12)
   goto fail;
 }

 VAR_12 = FUNC_1(3, VAR_6->blocksize, &VAR_11->buf);
 if (VAR_12)
  goto fail;

 *VAR_10 = VAR_11;
 return 0;

fail:
 if (VAR_11->buf)
  FUNC_0(&VAR_11->buf);
 FUNC_0(&VAR_11);
 return VAR_12;
}
