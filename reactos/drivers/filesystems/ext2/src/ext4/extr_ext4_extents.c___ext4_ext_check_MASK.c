
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_tail {scalar_t__ et_checksum; } ;
struct ext4_extent_header {scalar_t__ eh_magic; scalar_t__ eh_max; scalar_t__ eh_entries; int eh_depth; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_1 (char*,char const*,...) ;
 struct ext4_extent_tail* FUNC_2 (struct ext4_extent_header*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, unsigned int VAR_3,
  struct inode *VAR_4,
  struct ext4_extent_header *VAR_5, int VAR_6,
  ext4_fsblk_t VAR_7)
{
 struct ext4_extent_tail *VAR_8;
 const char *VAR_9;

 int VAR_10 = 0;

 if (VAR_5->eh_magic != VAR_1) {
  VAR_9 = "invalid magic";
  goto corrupted;
 }
 if (FUNC_3(VAR_5->eh_depth) != VAR_6) {
  VAR_9 = "unexpected eh_depth";
  goto corrupted;
 }
 if (VAR_5->eh_max == 0) {
  VAR_9 = "invalid eh_max";
  goto corrupted;
 }
 if (VAR_5->eh_entries > VAR_5->eh_max) {
  VAR_9 = "invalid eh_entries";
  goto corrupted;
 }

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8->et_checksum != FUNC_0(VAR_4, VAR_5)) {
  FUNC_1("Warning: extent checksum damaged? tail->et_checksum = "
    "%lu, ext4_ext_block_csum = %lu\n",
    VAR_8->et_checksum, FUNC_0(VAR_4, VAR_5));
 }

 return 0;

corrupted:
 FUNC_1("corrupted! %s\n", VAR_9);
 return -VAR_0;
}
