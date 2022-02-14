
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {TYPE_1__* ext2_sb; TYPE_2__* group_desc; int inode_map; } ;
struct TYPE_7__ {int bg_free_inodes_count; int bg_used_dirs_count; } ;
struct TYPE_6__ {int s_free_inodes_count; } ;
typedef TYPE_3__* PEXT2_FILESYS ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(PEXT2_FILESYS VAR_0, ULONG VAR_1,
                   int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2 > 0)
        FUNC_1(VAR_0->inode_map, VAR_1);
    else
        FUNC_2(VAR_0->inode_map, VAR_1);

    VAR_0->group_desc[VAR_4].bg_free_inodes_count -= VAR_2;

    if (VAR_3)
        VAR_0->group_desc[VAR_4].bg_used_dirs_count += VAR_2;

    VAR_0->ext2_sb->s_free_inodes_count -= VAR_2;
}
