
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {int s_priv; } ;
typedef int PEXT2_VCB ;


 int VAR_0 ;

__attribute__((used)) static inline ext4_fsblk_t FUNC_0(struct inode *VAR_1)
{
 PEXT2_VCB VAR_2;
 VAR_2 = VAR_1->i_sb->s_priv;
 return (VAR_1->i_ino - 1) / VAR_0;
}
