
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {scalar_t__ ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent_header* p_hdr; struct ext4_extent_idx* p_idx; struct ext4_extent* p_ext; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,scalar_t__,...) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_2 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_3 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_4 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (struct ext4_extent_idx*) ;
 struct ext4_extent_header* FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct inode*,int ,int,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_1,
  struct ext4_ext_path *VAR_2,
  ext4_lblk_t *VAR_3, ext4_fsblk_t *VAR_4,
  struct ext4_extent **VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);
 struct ext4_extent_header *VAR_7;
 struct ext4_extent_idx *VAR_8;
 struct ext4_extent *VAR_9;
 ext4_fsblk_t VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, "path == NULL *logical %d!", *VAR_3);
  return -VAR_0;
 }
 VAR_11 = VAR_2->p_depth;
 *VAR_4 = 0;

 if (VAR_11 == 0 && VAR_2->p_ext == ((void*)0))
  return 0;





 VAR_9 = VAR_2[VAR_11].p_ext;
 VAR_12 = FUNC_7(VAR_9);

 if (*VAR_3 < (VAR_9->ee_block)) {
  if (FUNC_13(FUNC_1(VAR_2[VAR_11].p_hdr) != VAR_9)) {
   FUNC_0(VAR_1,
     "first_extent(path[%d].p_hdr) != ex",
     VAR_11);
   return -VAR_0;
  }
  while (--VAR_11 >= 0) {
   VAR_8 = VAR_2[VAR_11].p_idx;
   if (FUNC_13(VAR_8 != FUNC_2(VAR_2[VAR_11].p_hdr))) {
    FUNC_0(VAR_1,
      "ix != EXT_FIRST_INDEX *logical %d!",
      *VAR_3);
    return -VAR_0;
   }
  }
  goto found_extent;
 }


 if (FUNC_13(*VAR_3 < ((VAR_9->ee_block) + VAR_12))) {
  FUNC_0(VAR_1,
    "logical %d < ee_block %d + ee_len %d!",

   *VAR_3, (VAR_9->ee_block), VAR_12);
  return -VAR_0;
 }

 if (VAR_9 != FUNC_3(VAR_2[VAR_11].p_hdr)) {

  VAR_9++;
  goto found_extent;
 }


 while (--VAR_11 >= 0) {
  VAR_8 = VAR_2[VAR_11].p_idx;
  if (VAR_8 != FUNC_4(VAR_2[VAR_11].p_hdr))
   goto got_index;
 }


 return 0;

got_index:



 VAR_8++;
 VAR_10 = FUNC_9(VAR_8);
 while (++VAR_11 < VAR_2->p_depth) {

  VAR_6 = FUNC_12(VAR_1, VAR_10,
    VAR_2->p_depth - VAR_11, 0);
  if (FUNC_5(VAR_6))
   return FUNC_6(VAR_6);
  VAR_7 = FUNC_10(VAR_6);
  VAR_8 = FUNC_2(VAR_7);
  VAR_10 = FUNC_9(VAR_8);
  FUNC_11(VAR_6);
 }

 VAR_6 = FUNC_12(VAR_1, VAR_10, VAR_2->p_depth - VAR_11, 0);
 if (FUNC_5(VAR_6))
  return FUNC_6(VAR_6);
 VAR_7 = FUNC_10(VAR_6);
 VAR_9 = FUNC_1(VAR_7);
found_extent:

 *VAR_3 = (VAR_9->ee_block);
 *VAR_4 = FUNC_8(VAR_9);
 *VAR_5 = VAR_9;
 if (VAR_6)
  FUNC_11(VAR_6);
 return 0;
}
