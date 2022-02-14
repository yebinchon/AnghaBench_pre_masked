
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_idx; struct ext4_extent_header* p_hdr; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef void* __le32 ;
struct TYPE_2__ {void* ei_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,struct ext4_extent*,struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 TYPE_1__* FUNC_2 (struct ext4_extent_header*) ;
 int FUNC_3 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, handle_t *VAR_2, struct inode *VAR_3,
  struct ext4_ext_path *VAR_4)
{
 struct ext4_extent_header *VAR_5;
 int VAR_6 = FUNC_5(VAR_3);
 struct ext4_extent *VAR_7;
 __le32 VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_5 = VAR_4[VAR_6].p_hdr;
 VAR_7 = VAR_4[VAR_6].p_ext;

 if (FUNC_6(VAR_7 == ((void*)0) || VAR_5 == ((void*)0))) {
  FUNC_0(VAR_3,
    "ex %p == NULL or eh %p == NULL", VAR_7, VAR_5);
  return -VAR_0;
 }

 if (VAR_6 == 0) {

  return 0;
 }

 if (VAR_7 != FUNC_1(VAR_5)) {

  return 0;
 }




 VAR_9 = VAR_6 - 1;
 VAR_8 = VAR_4[VAR_6].p_ext->ee_block;
 VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_4[VAR_9].p_idx->ei_block = VAR_8;
 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_9);
 if (VAR_10)
  return VAR_10;

 while (VAR_9--) {

  if (VAR_4[VAR_9+1].p_idx != FUNC_2(VAR_4[VAR_9+1].p_hdr))
   break;
  VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_9);
  if (VAR_10)
   break;
  VAR_4[VAR_9].p_idx->ei_block = VAR_8;
  VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_9);
  if (VAR_10)
   break;
 }

 return VAR_10;
}
