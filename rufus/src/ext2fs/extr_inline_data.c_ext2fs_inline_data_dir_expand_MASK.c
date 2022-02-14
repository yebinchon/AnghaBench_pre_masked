
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct ext2_inode {int i_size; int i_flags; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_11__ {int blocksize; int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_inode*,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,size_t,int ) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct ext2_inode*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,char*,char*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,struct ext2_inode*) ;

__attribute__((used)) static errcode_t
FUNC_11(ext2_filsys VAR_4, ext2_ino_t VAR_5,
         struct ext2_inode *VAR_6, char *VAR_7, size_t VAR_8)
{
 errcode_t VAR_9;
 blk64_t VAR_10;
 char *VAR_11;

 VAR_9 = FUNC_4(VAR_4->blocksize, &VAR_11);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_11, VAR_7, VAR_8);
 if (VAR_9)
  goto errout;

 VAR_9 = FUNC_8(VAR_4, 0, 0, &VAR_10);
 if (VAR_9)
  goto errout;
 VAR_9 = FUNC_9(VAR_4, VAR_10, VAR_11, 0, VAR_5);
 if (VAR_9)
  goto errout;


 if (FUNC_5(VAR_4->super))
  VAR_6->i_flags |= VAR_1;
 VAR_6->i_flags &= ~VAR_3;
 VAR_9 = FUNC_6(VAR_4, VAR_6, 1);
 if (VAR_9)
  goto errout;
 VAR_6->i_size = VAR_4->blocksize;
 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, 0, VAR_0, 0, 0, &VAR_10);
 if (VAR_9)
  goto errout;
 VAR_9 = FUNC_10(VAR_4, VAR_5, VAR_6);
 if (VAR_9)
  goto errout;
 FUNC_0(VAR_4, VAR_10, +1);

errout:
 FUNC_3(&VAR_11);
 return VAR_9;
}
