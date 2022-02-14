
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; int i_file_acl; scalar_t__ i_extra_isize; int i_sb; int * i_block; int i_blocks; int i_dtime; int i_mtime; int i_ctime; int i_atime; int i_generation; int i_nlink; int i_gid; int i_uid; int i_flags; int i_mode; } ;
struct TYPE_3__ {scalar_t__ l_i_file_acl_high; } ;
struct TYPE_4__ {TYPE_1__ linux2; } ;
struct ext3_inode {int i_size; int i_file_acl_lo; scalar_t__ i_extra_isize; int * i_block; int i_dtime; int i_mtime; int i_ctime; int i_atime; TYPE_2__ osd2; scalar_t__ i_size_high; int i_mode; int i_generation; int i_links_count; int i_gid; int i_uid; int i_flags; } ;
typedef int loff_t ;
typedef int ext4_fsblk_t ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ext3_inode*,struct inode*) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(struct inode *VAR_1, struct ext3_inode *VAR_2)
{
    VAR_1->i_mode = VAR_2->i_mode;
    VAR_1->i_flags = VAR_2->i_flags;
    VAR_1->i_uid = VAR_2->i_uid;
    VAR_1->i_gid = VAR_2->i_gid;
    VAR_1->i_nlink = VAR_2->i_links_count;
    VAR_1->i_generation = VAR_2->i_generation;
    VAR_1->i_size = VAR_2->i_size;
    if (FUNC_1(VAR_2->i_mode)) {
        VAR_1->i_size |= (loff_t)VAR_2->i_size_high << 32;
    }
    VAR_1->i_file_acl = VAR_2->i_file_acl_lo;
    VAR_1->i_file_acl |= (ext4_fsblk_t)VAR_2->osd2.linux2.l_i_file_acl_high << 32;
    VAR_1->i_atime = VAR_2->i_atime;
    VAR_1->i_ctime = VAR_2->i_ctime;
    VAR_1->i_mtime = VAR_2->i_mtime;
    VAR_1->i_dtime = VAR_2->i_dtime;
    VAR_1->i_blocks = FUNC_2(VAR_2, VAR_1);
    FUNC_3(&VAR_1->i_block[0], &VAR_2->i_block[0], sizeof(__u32) * 15);
    if (FUNC_0(VAR_1->i_sb,
                                   VAR_0))
        VAR_1->i_extra_isize = VAR_2->i_extra_isize;
    else
        VAR_1->i_extra_isize = 0;
}
