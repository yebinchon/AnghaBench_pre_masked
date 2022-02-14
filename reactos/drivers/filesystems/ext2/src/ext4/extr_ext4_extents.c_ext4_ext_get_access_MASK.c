
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_bh; } ;
typedef int handle_t ;


 int FUNC_0 (void*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2,
  struct ext4_ext_path *VAR_3)
{
 if (VAR_3->p_bh) {


  return FUNC_0(VAR_0, VAR_1, VAR_3->p_bh);

 }


 return 0;
}
