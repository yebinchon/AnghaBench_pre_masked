
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; TYPE_3__* i_sb; } ;
struct ext3_dir_entry_2 {int name_len; int inode; int rec_len; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_5__ {TYPE_1__* s_es; } ;
struct TYPE_4__ {int s_inodes_count; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int const FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5 (const char * VAR_1, struct inode * VAR_2,
                          struct ext3_dir_entry_2 * VAR_3,
                          struct buffer_head * VAR_4,
                          unsigned long VAR_5)
{
    const char * VAR_6 = ((void*)0);
    const int VAR_7 = FUNC_3(VAR_3->rec_len);

    if (VAR_7 < FUNC_1(1))
        VAR_6 = "rec_len is smaller than minimal";
    else if (VAR_7 % 4 != 0)
        VAR_6 = "rec_len % 4 != 0";
    else if (VAR_7 < FUNC_1(VAR_3->name_len))
        VAR_6 = "rec_len is too small for name_len";
    else if ((char *) VAR_3 + VAR_7 > VAR_4->b_data + VAR_2->i_sb->s_blocksize)
        VAR_6 = "directory entry across blocks";
    else if (FUNC_4(VAR_3->inode) >
             FUNC_4(FUNC_2(VAR_2->i_sb)->s_es->s_inodes_count))
        VAR_6 = "inode out of bounds";

    if (VAR_6 != ((void*)0)) {
        FUNC_0(VAR_0, ("%s: bad entry in directory %u: %s - "
                       "offset=%u, inode=%u, rec_len=%d, name_len=%d\n",
                       VAR_1, VAR_2->i_ino, VAR_6, VAR_5,
                       (unsigned long) FUNC_4(VAR_3->inode),
                       VAR_7, VAR_3->name_len));
    }
    return VAR_6 == ((void*)0) ? 1 : 0;
}
