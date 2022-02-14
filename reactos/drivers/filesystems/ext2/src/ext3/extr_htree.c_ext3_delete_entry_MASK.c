
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_version; } ;
struct ext3_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct ext2_icb {int dummy; } ;
struct buffer_head {size_t b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,size_t) ;
 struct ext3_dir_entry_2* FUNC_1 (struct ext3_dir_entry_2*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;

int FUNC_5(struct ext2_icb *VAR_2, struct inode *VAR_3,
                      struct ext3_dir_entry_2 *VAR_4,
                      struct buffer_head *VAR_5)
{
    struct ext3_dir_entry_2 *VAR_6, *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;

    VAR_6 = (struct ext3_dir_entry_2 *) VAR_5->b_data;
    while (VAR_8 < VAR_5->b_size) {
        if (!FUNC_0("ext3_delete_entry", VAR_3, VAR_6, VAR_5, VAR_8))
            return -VAR_0;
        if (VAR_6 == VAR_4) {
            if (VAR_7)
                VAR_7->rec_len = FUNC_3(
                                   FUNC_2(VAR_7->rec_len) +
                                   FUNC_2(VAR_6->rec_len));
            else
                VAR_6->inode = 0;
            VAR_3->i_version++;

            FUNC_4(VAR_5);
            return 0;
        }
        VAR_8 += FUNC_2(VAR_6->rec_len);
        VAR_7 = VAR_6;
        VAR_6 = FUNC_1(VAR_6);
    }
    return -VAR_1;
}
