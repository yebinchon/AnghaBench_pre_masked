
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_path {TYPE_1__* p_hdr; int p_idx; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ eh_entries; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_3 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (void*,int *,struct inode*,int *,int ,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

int FUNC_7(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2,
  struct ext4_ext_path *VAR_3)
{
 int VAR_4;
 ext4_fsblk_t VAR_5;


 VAR_3--;
 VAR_5 = FUNC_5(VAR_3->p_idx);
 FUNC_0(VAR_3->p_hdr->eh_entries == 0);
 if ((VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3)))
  return VAR_4;
 VAR_3->p_hdr->eh_entries = FUNC_1(FUNC_6(VAR_3->p_hdr->eh_entries)-1);
 if ((VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3)))
  return VAR_4;
 FUNC_4(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_5, 1, 0);
 return VAR_4;
}
