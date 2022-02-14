
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; TYPE_1__* i_sb; } ;
typedef int ext4_fsblk_t ;
typedef int ULONG ;
struct TYPE_2__ {int s_blocksize; int s_priv; } ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_3(void *VAR_0, struct inode *VAR_1,
 ext4_fsblk_t VAR_2,
 unsigned int VAR_3,
 unsigned long *VAR_4, int *VAR_5)
{
 NTSTATUS VAR_6;
 ULONG VAR_7 = (VAR_4) ? *VAR_4 : 1;
 ULONG VAR_8 = 0;

 VAR_6 = FUNC_1((PEXT2_IRP_CONTEXT)VAR_0,
  VAR_1->i_sb->s_priv,
  0, (ULONG)VAR_2,
  &VAR_8,
  &VAR_7);
 if (VAR_4)
  *VAR_4 = VAR_7;

 if (!FUNC_2(VAR_6)) {
  *VAR_5 = FUNC_0(VAR_6);
  return 0;
 }
 VAR_1->i_blocks += (VAR_7 * (VAR_1->i_sb->s_blocksize >> 9));
 return VAR_8;
}
