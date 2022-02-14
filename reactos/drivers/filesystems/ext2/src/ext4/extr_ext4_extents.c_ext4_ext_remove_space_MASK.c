
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_ext_path {int p_depth; TYPE_1__* p_hdr; struct buffer_head* p_bh; void* p_block; scalar_t__ p_idx; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ eh_entries; int eh_max; scalar_t__ eh_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_5 (struct ext4_ext_path*) ;
 int FUNC_6 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 scalar_t__ FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (void*,int *,struct inode*,struct ext4_ext_path*,unsigned long) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (void*,int *) ;
 TYPE_1__* FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct inode*) ;
 TYPE_1__* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_18 (int,int ) ;
 void* FUNC_19 (scalar_t__) ;
 int FUNC_20 (struct ext4_ext_path*,int ,int) ;
 struct buffer_head* FUNC_21 (struct inode*,int ,int,int ) ;

int FUNC_22(void *VAR_3, struct inode *VAR_4, unsigned long VAR_5)
{
 struct super_block *VAR_6 = VAR_4->i_sb;
 int VAR_7 = FUNC_14(VAR_4);
 struct ext4_ext_path *VAR_8;
 handle_t *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;
 VAR_8 = FUNC_18(sizeof(struct ext4_ext_path) * (VAR_7 + 1), VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_12(VAR_3, VAR_9);
  return -VAR_1;
 }
 FUNC_20(VAR_8, 0, sizeof(struct ext4_ext_path) * (VAR_7 + 1));
 VAR_8[0].p_hdr = FUNC_15(VAR_4);
 if (FUNC_3(VAR_4)) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_8[0].p_depth = VAR_7;

 while (VAR_10 >= 0 && VAR_11 == 0) {
  if (VAR_10 == VAR_7) {

   VAR_11 = FUNC_9(VAR_3, VAR_9, VAR_4, VAR_8, VAR_5);

   FUNC_16(VAR_8[VAR_10].p_bh);
   VAR_8[VAR_10].p_bh = ((void*)0);
   VAR_10--;
   continue;
  }


  if (!VAR_8[VAR_10].p_hdr) {
   VAR_8[VAR_10].p_hdr = FUNC_13(VAR_8[VAR_10].p_bh);
  }

  if (!VAR_8[VAR_10].p_idx) {

   VAR_8[VAR_10].p_idx = FUNC_0(VAR_8[VAR_10].p_hdr);
   VAR_8[VAR_10].p_block = FUNC_19(VAR_8[VAR_10].p_hdr->eh_entries)+1;
  } else {

   VAR_8[VAR_10].p_idx--;
  }

  if (FUNC_7(VAR_8 + VAR_10)) {
   struct buffer_head *VAR_12;

   FUNC_20(VAR_8 + VAR_10 + 1, 0, sizeof(*VAR_8));
   VAR_12 = FUNC_21(VAR_4, FUNC_11(VAR_8[VAR_10].p_idx), VAR_8[0].p_depth - (VAR_10 + 1), 0);
   if (FUNC_1(VAR_12)) {

    VAR_11 = -VAR_0;
    break;
   }
   VAR_8[VAR_10+1].p_bh = VAR_12;



   VAR_8[VAR_10].p_block = FUNC_19(VAR_8[VAR_10].p_hdr->eh_entries);
   VAR_10++;
  } else {

   if (VAR_8[VAR_10].p_hdr->eh_entries == 0 && VAR_10 > 0) {



    VAR_11 = FUNC_8(VAR_3, VAR_9, VAR_4, VAR_8 + VAR_10);
   }

   FUNC_16(VAR_8[VAR_10].p_bh);
   VAR_8[VAR_10].p_bh = ((void*)0);
   VAR_10--;
  }
 }


 if (VAR_8->p_hdr->eh_entries == 0) {




  VAR_11 = FUNC_6(VAR_3, VAR_9, VAR_4, VAR_8);
  if (VAR_11 == 0) {
   FUNC_15(VAR_4)->eh_depth = 0;
   FUNC_15(VAR_4)->eh_max =
    FUNC_2(FUNC_10(VAR_4, 0));
   VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_4, VAR_8);
  }
 }
out:
 if (VAR_8) {
  FUNC_5(VAR_8);
  FUNC_17(VAR_8);
 }
 FUNC_12(VAR_3, VAR_9);

 return VAR_11;
}
