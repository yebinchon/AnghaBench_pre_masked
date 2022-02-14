
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct ext3_dir_entry_2 {int rec_len; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_4__ {int s_blocksize; } ;


 int FUNC_0 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,unsigned long) ;
 scalar_t__ FUNC_1 (int,char const*,struct ext3_dir_entry_2*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct buffer_head * VAR_0,
                                  struct inode *VAR_1,
                                  struct dentry *VAR_2,
                                  unsigned long VAR_3,
                                  struct ext3_dir_entry_2 ** VAR_4)
{
    struct ext3_dir_entry_2 * VAR_5;
    char * VAR_6;
    int VAR_7;
    const char *VAR_8 = VAR_2->d_name.name;
    int VAR_9 = VAR_2->d_name.len;

    VAR_5 = (struct ext3_dir_entry_2 *) VAR_0->b_data;
    VAR_6 = VAR_0->b_data + VAR_1->i_sb->s_blocksize;
    while ((char *) VAR_5 < VAR_6) {



        if ((char *) VAR_5 + VAR_9 <= VAR_6 &&
                FUNC_1 (VAR_9, VAR_8, VAR_5)) {

            if (!FUNC_0("ext3_find_entry",
                                      VAR_1, VAR_5, VAR_0, VAR_3))
                return -1;
            *VAR_4 = VAR_5;
            return 1;
        }

        VAR_7 = FUNC_2(VAR_5->rec_len);

        if (VAR_7 <= 0)
            return -1;
        VAR_3 += VAR_7;
        VAR_5 = (struct ext3_dir_entry_2 *) ((char *) VAR_5 + VAR_7);
    }
    return 0;
}
