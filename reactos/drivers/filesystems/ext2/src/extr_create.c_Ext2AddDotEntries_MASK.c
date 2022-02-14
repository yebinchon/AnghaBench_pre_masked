
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_nlink; TYPE_1__* i_sb; int i_ino; } ;
struct ext3_dir_entry_2 {int name_len; int name; void* rec_len; void* inode; } ;
struct ext2_icb {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext3_lblk_t ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ) ;
 struct buffer_head* FUNC_5 (struct ext2_icb*,struct inode*,int *,int*) ;
 int FUNC_6 (struct ext2_icb*,struct inode*) ;
 int FUNC_7 (TYPE_1__*,struct ext3_dir_entry_2*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int ,char*) ;

NTSTATUS FUNC_11(struct ext2_icb *VAR_1, struct inode *VAR_2,
                           struct inode *VAR_3)
{
    struct ext3_dir_entry_2 * VAR_4;
    struct buffer_head * VAR_5;
    ext3_lblk_t VAR_6 = 0;
    int VAR_7 = 0;

    VAR_5 = FUNC_5(VAR_1, VAR_3, &VAR_6, &VAR_7);
    if (!VAR_5) {
        goto errorout;
    }

    VAR_4 = (struct ext3_dir_entry_2 *) VAR_5->b_data;
    VAR_4->inode = FUNC_4(VAR_3->i_ino);
    VAR_4->name_len = 1;
    VAR_4->rec_len = FUNC_3(FUNC_0(VAR_4->name_len));
    FUNC_10 (VAR_4->name, ".");
    FUNC_7(VAR_3->i_sb, VAR_4, VAR_0);
    VAR_4 = (struct ext3_dir_entry_2 *)
         ((char *) VAR_4 + FUNC_8(VAR_4->rec_len));
    VAR_4->inode = FUNC_4(VAR_2->i_ino);
    VAR_4->rec_len = FUNC_3(VAR_3->i_sb->s_blocksize-FUNC_0(1));
    VAR_4->name_len = 2;
    FUNC_10 (VAR_4->name, "..");
    FUNC_7(VAR_3->i_sb, VAR_4, VAR_0);
    VAR_3->i_nlink = 2;
    FUNC_9(VAR_5);
    FUNC_6(VAR_1, VAR_3);

errorout:
    if (VAR_5)
        FUNC_2 (VAR_5);

    return FUNC_1(VAR_7);
}
