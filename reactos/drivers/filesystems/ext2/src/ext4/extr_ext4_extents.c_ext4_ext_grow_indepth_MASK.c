
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_extent_header {scalar_t__ eh_depth; void* eh_max; void* eh_entries; void* eh_magic; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_8__ {int i_block; } ;
struct TYPE_7__ {int ee_block; } ;
struct TYPE_6__ {int ei_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (struct ext4_extent_header*) ;
 TYPE_1__* FUNC_2 (struct ext4_extent_header*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_8 (void*,int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (void*,int *,struct buffer_head*) ;
 int FUNC_13 (void*,int *,struct inode*) ;
 scalar_t__ FUNC_14 (void*,int *,struct inode*,scalar_t__,unsigned int,int *,int*) ;
 struct ext4_extent_header* FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (char*,void*,void*,int ,scalar_t__) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 struct ext4_extent_header* FUNC_18 (struct inode*) ;
 int FUNC_19 (struct buffer_head*) ;
 struct buffer_head* FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (scalar_t__*,int) ;
 int FUNC_22 (int ,int ,int) ;
 int FUNC_23 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_24(void *VAR_2, handle_t *VAR_3, struct inode *VAR_4,
  unsigned int VAR_5)
{
 struct ext4_extent_header *VAR_6;
 struct buffer_head *VAR_7;
 ext4_fsblk_t VAR_8, VAR_9 = 0;
 int VAR_10 = 0;


 if (FUNC_17(VAR_4))
  VAR_9 = FUNC_9(FUNC_2(FUNC_18(VAR_4)));
 VAR_9 = FUNC_11(VAR_4);
 VAR_8 = FUNC_14(VAR_2, VAR_3, VAR_4, VAR_9, VAR_5,
   ((void*)0), &VAR_10);
 if (VAR_8 == 0)
  return VAR_10;

 VAR_7 = FUNC_20(VAR_4->i_sb, VAR_8);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_12(VAR_2, VAR_3, VAR_7);
 if (VAR_10)
  goto out;


 FUNC_22(VAR_7->b_data, FUNC_0(VAR_4)->i_block,
   sizeof(FUNC_0(VAR_4)->i_block));


 VAR_6 = FUNC_15(VAR_7);


 if (FUNC_17(VAR_4))
  VAR_6->eh_max = FUNC_3(FUNC_5(VAR_4, 0));
 else
  VAR_6->eh_max = FUNC_3(FUNC_4(VAR_4, 0));
 VAR_6->eh_magic = FUNC_3(VAR_1);
 FUNC_7(VAR_4, VAR_6);
 FUNC_23(VAR_7);

 VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_7);
 if (VAR_10)
  goto out;


 VAR_6 = FUNC_18(VAR_4);
 VAR_6->eh_entries = FUNC_3(1);
 FUNC_10(FUNC_2(VAR_6), VAR_8);
 if (VAR_6->eh_depth == 0) {

  VAR_6->eh_max = FUNC_3(FUNC_6(VAR_4, 0));
  FUNC_2(VAR_6)->ei_block =
   FUNC_1(VAR_6)->ee_block;
 }
 FUNC_16("new root: num %d(%d), lblock %d, ptr %llu\n",
   (VAR_6->eh_entries), (VAR_6->eh_max),
   (FUNC_2(VAR_6)->ei_block),
   FUNC_9(FUNC_2(VAR_6)));

 FUNC_21(&VAR_6->eh_depth, 1);
 FUNC_13(VAR_2, VAR_3, VAR_4);
out:
 FUNC_19(VAR_7);

 return VAR_10;
}
