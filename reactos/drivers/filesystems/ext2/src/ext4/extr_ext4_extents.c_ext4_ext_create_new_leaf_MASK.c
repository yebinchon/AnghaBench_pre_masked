
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_hdr; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {scalar_t__ eh_entries; scalar_t__ eh_max; } ;


 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (void*,int *,struct inode*,unsigned int) ;
 int FUNC_4 (void*,int *,struct inode*,unsigned int,struct ext4_ext_path*,struct ext4_extent*,int) ;
 struct ext4_ext_path* FUNC_5 (struct inode*,int ,struct ext4_ext_path**,unsigned int) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2,
  unsigned int VAR_3,
  unsigned int VAR_4,
  struct ext4_ext_path **VAR_5,
  struct ext4_extent *VAR_6)
{
 struct ext4_ext_path *VAR_7 = *VAR_5;
 struct ext4_ext_path *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;

repeat:
 VAR_10 = VAR_9 = FUNC_6(VAR_2);


 VAR_8 = VAR_7 + VAR_9;
 while (VAR_10 > 0 && !FUNC_0(VAR_8)) {
  VAR_10--;
  VAR_8--;
 }



 if (FUNC_0(VAR_8)) {


  VAR_11 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_6, VAR_10);
  if (VAR_11)
   goto out;


  VAR_7 = FUNC_5(VAR_2,
    (ext4_lblk_t)FUNC_7(VAR_6->ee_block),
    VAR_5, VAR_4);
  if (FUNC_1(VAR_7))
   VAR_11 = FUNC_2(VAR_7);
 } else {

  VAR_11 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_11)
   goto out;


  VAR_7 = FUNC_5(VAR_2,
    (ext4_lblk_t)FUNC_7(VAR_6->ee_block),
    VAR_5, VAR_4);
  if (FUNC_1(VAR_7)) {
   VAR_11 = FUNC_2(VAR_7);
   goto out;
  }





  VAR_9 = FUNC_6(VAR_2);
  if (VAR_7[VAR_9].p_hdr->eh_entries == VAR_7[VAR_9].p_hdr->eh_max) {

   goto repeat;
  }
 }

out:
 return VAR_11;
}
