
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ext2_inode_large {int dummy; } ;
struct ext2_inode {int dummy; } ;
struct ext2_ext_attr_header {scalar_t__ h_magic; int h_refcount; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_12__ {scalar_t__ s_first_data_block; } ;
struct TYPE_11__ {int blocksize; TYPE_9__* super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_9__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct ext2_inode*) ;
 int FUNC_3 (TYPE_1__*,struct ext2_inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,struct ext2_inode*,int ) ;
 int FUNC_5 (void**) ;
 scalar_t__ FUNC_6 (int ,void**) ;
 scalar_t__ FUNC_7 (TYPE_1__*,struct ext2_inode*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__,void*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,scalar_t__,void*,int ) ;

__attribute__((used)) static errcode_t FUNC_10(ext2_filsys VAR_3, ext2_ino_t VAR_4,
      struct ext2_inode_large *VAR_5)
{
 struct ext2_ext_attr_header *VAR_6;
 void *VAR_7 = ((void*)0);
 blk64_t VAR_8, VAR_9;
 errcode_t VAR_10;


 VAR_8 = FUNC_2(VAR_3, (struct ext2_inode *)VAR_5);
 if (VAR_8 != 0) {
  if ((VAR_8 < VAR_3->super->s_first_data_block) ||
      (VAR_8 >= FUNC_1(VAR_3->super))) {
   VAR_10 = VAR_0;
   goto out;
  }

  VAR_10 = FUNC_6(VAR_3->blocksize, &VAR_7);
  if (VAR_10)
   goto out;

  VAR_10 = FUNC_8(VAR_3, VAR_8, VAR_7, VAR_4);
  if (VAR_10)
   goto out2;


  VAR_6 = (struct ext2_ext_attr_header *) VAR_7;
  if (VAR_6->h_magic != VAR_2) {
   VAR_10 = VAR_1;
   goto out2;
  }


  if (VAR_6->h_refcount == 1)
   goto out2;


  VAR_6->h_refcount--;
  VAR_10 = FUNC_9(VAR_3, VAR_8, VAR_7, VAR_4);
  if (VAR_10)
   goto out2;
 } else {

  VAR_10 = FUNC_7(VAR_3, (struct ext2_inode *)VAR_5,
          1);
  if (VAR_10)
   goto out;
 }


 VAR_9 = FUNC_4(VAR_3, VAR_4, (struct ext2_inode *)VAR_5, 0);
 VAR_10 = FUNC_0(VAR_3, VAR_9, ((void*)0), &VAR_8);
 if (VAR_10)
  goto out2;
 FUNC_3(VAR_3, (struct ext2_inode *)VAR_5, VAR_8);
out2:
 if (VAR_7)
  FUNC_5(&VAR_7);
out:
 return VAR_10;
}
