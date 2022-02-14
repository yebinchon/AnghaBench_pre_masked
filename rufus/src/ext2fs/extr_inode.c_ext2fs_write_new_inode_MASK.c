
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode_large {void* i_crtime; scalar_t__ i_extra_isize; } ;
struct ext2_inode {void* i_atime; void* i_mtime; void* i_ctime; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef void* __u32 ;
struct TYPE_4__ {void* now; int super; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,struct ext2_inode*,int) ;
 int FUNC_2 (struct ext2_inode*) ;
 struct ext2_inode* FUNC_3 (int) ;
 int FUNC_4 (struct ext2_inode*,int ,int) ;
 void* FUNC_5 (int *) ;

errcode_t FUNC_6(ext2_filsys VAR_2, ext2_ino_t VAR_3,
     struct ext2_inode *VAR_4)
{
 struct ext2_inode *VAR_5;
 int VAR_6 = FUNC_0(VAR_2->super);
 struct ext2_inode_large *VAR_7;
 errcode_t VAR_8;
 __u32 VAR_9 = VAR_2->now ? VAR_2->now : FUNC_5(((void*)0));

 if (!VAR_4->i_ctime)
  VAR_4->i_ctime = VAR_9;
 if (!VAR_4->i_mtime)
  VAR_4->i_mtime = VAR_9;
 if (!VAR_4->i_atime)
  VAR_4->i_atime = VAR_9;

 if (VAR_6 == sizeof(struct ext2_inode))
  return FUNC_1(VAR_2, VAR_3, VAR_4,
            sizeof(struct ext2_inode));

 VAR_5 = FUNC_3(VAR_6);
 if (!VAR_5)
  return VAR_0;

 FUNC_4(VAR_5, 0, VAR_6);
 *VAR_5 = *VAR_4;

 VAR_7 = (struct ext2_inode_large *) VAR_5;
 VAR_7->i_extra_isize = sizeof(struct ext2_inode_large) -
  VAR_1;
 if (!VAR_7->i_crtime)
  VAR_7->i_crtime = VAR_9;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);
 FUNC_2(VAR_5);
 return VAR_8;
}
