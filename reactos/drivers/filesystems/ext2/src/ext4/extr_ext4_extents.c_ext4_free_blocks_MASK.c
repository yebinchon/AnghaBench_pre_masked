
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; TYPE_1__* i_sb; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {int s_blocksize; int s_priv; } ;
typedef int PEXT2_IRP_CONTEXT ;


 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2, void *VAR_3,
  ext4_fsblk_t VAR_4, int VAR_5, int VAR_6)
{
 FUNC_0((PEXT2_IRP_CONTEXT)VAR_0, VAR_2->i_sb->s_priv, VAR_4, VAR_5);
 VAR_2->i_blocks -= VAR_5 * (VAR_2->i_sb->s_blocksize >> 9);
 return;
}
