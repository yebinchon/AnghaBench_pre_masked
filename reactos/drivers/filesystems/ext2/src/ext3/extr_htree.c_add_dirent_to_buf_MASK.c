
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_version; int i_ctime; int i_mtime; int i_mode; TYPE_3__* i_sb; int i_ino; } ;
struct ext3_dir_entry_2 {int name_len; int name; scalar_t__ inode; int file_type; void* rec_len; } ;
struct ext2_icb {int dummy; } ;
struct TYPE_5__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __u8 ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ext2_icb*,struct inode*) ;
 scalar_t__ FUNC_6 (int,char const*,struct ext3_dir_entry_2*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,struct ext3_dir_entry_2*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (struct buffer_head*) ;

int FUNC_13(struct ext2_icb *VAR_4, struct dentry *VAR_5,
                      struct inode *VAR_6, struct ext3_dir_entry_2 *VAR_7,
                      struct buffer_head *VAR_8)
{
    struct inode *VAR_9 = VAR_5->d_parent->d_inode;
    const char *VAR_10 = VAR_5->d_name.name;
    int VAR_11 = VAR_5->d_name.len;
    unsigned int VAR_12 = 0;
    unsigned short VAR_13;
    int VAR_14, VAR_15, VAR_16;
    char *VAR_17;

    VAR_13 = FUNC_0(VAR_11);
    if (!VAR_7) {
        VAR_7 = (struct ext3_dir_entry_2 *)VAR_8->b_data;
        VAR_17 = VAR_8->b_data + VAR_9->i_sb->s_blocksize - VAR_13;
        while ((char *) VAR_7 <= VAR_17) {
            if (!FUNC_3("ext3_add_entry", VAR_9, VAR_7,
                                      VAR_8, VAR_12)) {
                FUNC_1(VAR_8);
                return -VAR_1;
            }
            if (FUNC_6(VAR_11, VAR_10, VAR_7)) {
                FUNC_1(VAR_8);
                return -VAR_0;
            }
            VAR_14 = FUNC_0(VAR_7->name_len);
            VAR_15 = FUNC_7(VAR_7->rec_len);
            if ((VAR_7->inode? VAR_15 - VAR_14: VAR_15) >= VAR_13)
                break;
            VAR_7 = (struct ext3_dir_entry_2 *)((char *)VAR_7 + VAR_15);
            VAR_12 += VAR_15;
        }
        if ((char *) VAR_7 > VAR_17)
            return -VAR_2;
    }


    VAR_14 = FUNC_0(VAR_7->name_len);
    VAR_15 = FUNC_7(VAR_7->rec_len);
    if (VAR_7->inode) {
        struct ext3_dir_entry_2 *VAR_18 = (struct ext3_dir_entry_2 *)((char *)VAR_7 + VAR_14);
        VAR_18->rec_len = FUNC_8(VAR_15 - VAR_14);
        VAR_7->rec_len = FUNC_8(VAR_14);
        VAR_7 = VAR_18;
    }
    VAR_7->file_type = VAR_3;
    if (VAR_6) {
        VAR_7->inode = FUNC_2(VAR_6->i_ino);
        FUNC_9(VAR_9->i_sb, VAR_7, VAR_6->i_mode);
    } else
        VAR_7->inode = 0;
    VAR_7->name_len = (__u8)VAR_11;
    FUNC_11(VAR_7->name, VAR_10, VAR_11);
    VAR_9->i_mtime = VAR_9->i_ctime = FUNC_4(VAR_9);
    FUNC_10(VAR_9);
    VAR_9->i_version++;
    FUNC_5(VAR_4, VAR_9);
    FUNC_12(VAR_8);
    FUNC_1(VAR_8);
    return 0;
}
