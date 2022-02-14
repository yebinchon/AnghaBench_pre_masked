
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_ext_path {int p_depth; int p_bh; TYPE_1__* p_hdr; scalar_t__ p_ext; int p_maxdepth; int p_idx; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {int eh_max; int eh_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (void*,int *,struct inode*,int *,int ,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, handle_t *VAR_3,
  struct inode *VAR_4,
  struct ext4_ext_path *VAR_5)
{
 size_t VAR_6;
 unsigned VAR_7 = FUNC_2(VAR_4, 0);
 ext4_fsblk_t VAR_8;

 if ((VAR_5[0].p_depth != 1) ||
   (FUNC_7(VAR_5[0].p_hdr->eh_entries) != 1) ||
   (FUNC_7(VAR_5[1].p_hdr->eh_entries) > VAR_7))
  return;






 if (FUNC_5(VAR_2, VAR_3, 2))
  return;




 VAR_8 = FUNC_4(VAR_5[0].p_idx);
 VAR_6 = FUNC_7(VAR_5[1].p_hdr->eh_entries) *
  sizeof(struct ext4_extent_idx);
 VAR_6 += sizeof(struct ext4_extent_header);

 VAR_5[1].p_maxdepth = VAR_5[0].p_maxdepth;
 FUNC_8(VAR_5[0].p_hdr, VAR_5[1].p_hdr, VAR_6);
 VAR_5[0].p_depth = 0;
 VAR_5[0].p_ext = FUNC_0(VAR_5[0].p_hdr) +
  (VAR_5[1].p_ext - FUNC_0(VAR_5[1].p_hdr));
 VAR_5[0].p_hdr->eh_max = FUNC_1(VAR_7);

 FUNC_6(VAR_5[1].p_bh);
 FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_8, 1,
   VAR_1 | VAR_0);
}
