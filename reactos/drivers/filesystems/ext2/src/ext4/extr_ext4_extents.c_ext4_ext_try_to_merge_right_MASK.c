
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_entries; } ;
struct ext4_extent {int ee_len; } ;
struct ext4_ext_path {struct ext4_extent_header* p_hdr; } ;


 int FUNC_0 (struct inode*,char*) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inode*,struct ext4_extent*,struct ext4_extent*) ;
 scalar_t__ FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (struct ext4_extent*) ;
 int FUNC_7 (struct ext4_extent*) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct ext4_extent*,struct ext4_extent*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0,
  struct ext4_ext_path *VAR_1,
  struct ext4_extent *VAR_2)
{
 struct ext4_extent_header *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7;

 VAR_4 = FUNC_8(VAR_0);
 FUNC_2(VAR_1[VAR_4].p_hdr != ((void*)0));
 VAR_3 = VAR_1[VAR_4].p_hdr;

 while (VAR_2 < FUNC_1(VAR_3)) {
  if (!FUNC_4(VAR_0, VAR_2, VAR_2 + 1))
   break;

  VAR_7 = FUNC_6(VAR_2);
  VAR_2->ee_len = FUNC_3(FUNC_5(VAR_2)
    + FUNC_5(VAR_2 + 1));
  if (VAR_7)
   FUNC_7(VAR_2);

  if (VAR_2 + 1 < FUNC_1(VAR_3)) {
   VAR_5 = (FUNC_1(VAR_3) - VAR_2 - 1)
    * sizeof(struct ext4_extent);
   FUNC_10(VAR_2 + 1, VAR_2 + 2, VAR_5);
  }
  FUNC_9(&VAR_3->eh_entries, -1);
  VAR_6 = 1;
  if (!VAR_3->eh_entries)
   FUNC_0(VAR_0, "eh->eh_entries = 0!");
 }

 return VAR_6;
}
