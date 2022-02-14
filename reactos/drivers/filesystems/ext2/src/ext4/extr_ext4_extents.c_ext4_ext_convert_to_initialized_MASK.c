
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (void*,int *,struct inode*,struct ext4_ext_path**,scalar_t__,int,int) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (
  void *VAR_2,
  handle_t *VAR_3,
  struct inode *VAR_4,
  struct ext4_ext_path **VAR_5,
  ext4_lblk_t VAR_6,
  unsigned long VAR_7,
  int VAR_8)
{
 int VAR_9 = FUNC_3(VAR_4), VAR_10;
 struct ext4_extent *VAR_11 = (*VAR_5)[VAR_9].p_ext;

 FUNC_0 (FUNC_4(VAR_11->ee_block) <= VAR_6);

 if (VAR_6 + VAR_7 == FUNC_4(VAR_11->ee_block) +
        FUNC_1(VAR_11)) {


  VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_0, VAR_8);

 } else if (FUNC_4(VAR_11->ee_block) == VAR_6) {


  VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 + VAR_7,
           VAR_1, VAR_8);

 } else {


  VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 + VAR_7,
           VAR_0 |
           VAR_1, VAR_8);
  if (0 == VAR_10) {
   VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
            VAR_0, VAR_8);
  }
 }

 return VAR_10;
}
