
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_max; int eh_entries; } ;
struct ext4_ext_path {short p_maxdepth; short p_depth; int * p_ext; int p_block; int * p_idx; struct ext4_extent_header* p_hdr; struct buffer_head* p_bh; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_ext_path* FUNC_0 (int) ;
 int FUNC_1 (struct inode*,char*,short,short) ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_5 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (int *) ;
 struct ext4_extent_header* FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (char*,short,int ,int ) ;
 short FUNC_12 (struct inode*) ;
 struct ext4_extent_header* FUNC_13 (struct inode*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;
 struct buffer_head* FUNC_18 (struct inode*,int ,short,int) ;
 scalar_t__ FUNC_19 (int) ;

struct ext4_ext_path *
FUNC_20(struct inode *VAR_3, ext4_lblk_t VAR_4,
  struct ext4_ext_path **VAR_5, int VAR_6)
{
 struct ext4_extent_header *VAR_7;
 struct buffer_head *VAR_8;
 struct ext4_ext_path *VAR_9 = VAR_5 ? *VAR_5 : ((void*)0);
 short int VAR_10, VAR_11, VAR_12 = 0;
 int VAR_13;

 VAR_7 = FUNC_13(VAR_3);
 VAR_10 = FUNC_12(VAR_3);

 if (VAR_9) {
  FUNC_6(VAR_9);
  if (VAR_10 > VAR_9[0].p_maxdepth) {
   FUNC_15(VAR_9);
   *VAR_5 = VAR_9 = ((void*)0);
  }
 }
 if (!VAR_9) {

  VAR_9 = FUNC_16(sizeof(struct ext4_ext_path) * (VAR_10 + 2),
    VAR_2);
  if (FUNC_19(!VAR_9))
   return FUNC_0(-VAR_1);
  VAR_9[0].p_maxdepth = VAR_10 + 1;
 }
 VAR_9[0].p_hdr = VAR_7;
 VAR_9[0].p_bh = ((void*)0);

 VAR_11 = VAR_10;

 while (VAR_11) {
  FUNC_11("depth %d: num %d, max %d\n",
    VAR_12, FUNC_17(VAR_7->eh_entries), FUNC_17(VAR_7->eh_max));

  FUNC_5(VAR_3, VAR_9 + VAR_12, VAR_4);
  VAR_9[VAR_12].p_block = FUNC_9(VAR_9[VAR_12].p_idx);
  VAR_9[VAR_12].p_depth = VAR_11;
  VAR_9[VAR_12].p_ext = ((void*)0);

  VAR_8 = FUNC_18(VAR_3, VAR_9[VAR_12].p_block, --VAR_11,
    VAR_6);
  if (FUNC_19(FUNC_2(VAR_8))) {
   VAR_13 = FUNC_3(VAR_8);
   goto err;
  }

  VAR_7 = FUNC_10(VAR_8);
  VAR_12++;
  if (FUNC_19(VAR_12 > VAR_10)) {
   FUNC_14(VAR_8);
   FUNC_1(VAR_3,
     "ppos %d > depth %d", VAR_12, VAR_10);
   VAR_13 = -VAR_0;
   goto err;
  }
  VAR_9[VAR_12].p_bh = VAR_8;
  VAR_9[VAR_12].p_hdr = VAR_7;
 }

 VAR_9[VAR_12].p_depth = VAR_11;
 VAR_9[VAR_12].p_ext = ((void*)0);
 VAR_9[VAR_12].p_idx = ((void*)0);


 FUNC_4(VAR_3, VAR_9 + VAR_12, VAR_4);

 if (VAR_9[VAR_12].p_ext)
  VAR_9[VAR_12].p_block = FUNC_7(VAR_9[VAR_12].p_ext);

 FUNC_8(VAR_3, VAR_9);

 return VAR_9;

err:
 FUNC_6(VAR_9);
 if (VAR_9) {
  FUNC_15(VAR_9);
  if (VAR_5)
   *VAR_5 = ((void*)0);
 }
 return FUNC_0(VAR_13);
}
