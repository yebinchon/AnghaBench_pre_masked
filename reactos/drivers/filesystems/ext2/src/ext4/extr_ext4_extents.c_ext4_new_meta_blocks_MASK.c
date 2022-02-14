
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; TYPE_1__* i_sb; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef int ULONG ;
struct TYPE_2__ {int s_blocksize; int s_priv; } ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_3(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2,
  ext4_fsblk_t VAR_3,
  unsigned int VAR_4,
  unsigned long *VAR_5, int *VAR_6)
{
 NTSTATUS VAR_7;
 ULONG VAR_8 = (VAR_5)?*VAR_5:1;
 ULONG VAR_9 = 0;

 VAR_7 = FUNC_1((PEXT2_IRP_CONTEXT)VAR_0,
   VAR_2->i_sb->s_priv,
   0, VAR_3,
   &VAR_9,
   &VAR_8);
 if (VAR_5)
  *VAR_5 = VAR_8;

 if (!FUNC_2(VAR_7)) {
  *VAR_6 = FUNC_0(VAR_7);
  return 0;
 }
 VAR_2->i_blocks += (VAR_8 * (VAR_2->i_sb->s_blocksize >> 9));
 return VAR_9;
}
