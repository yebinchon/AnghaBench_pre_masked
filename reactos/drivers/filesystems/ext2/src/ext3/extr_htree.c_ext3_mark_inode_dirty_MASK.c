
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext2_icb {int dummy; } ;
struct TYPE_2__ {int s_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext2_icb*,int ,struct inode*) ;

int FUNC_1(struct ext2_icb *VAR_1, struct inode *VAR_2)
{
    if (FUNC_0(VAR_1, VAR_2->i_sb->s_priv, VAR_2))
        return 0;

    return -VAR_0;
}
