
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_bh; } ;
typedef int handle_t ;


 int FUNC_0 (char const*,unsigned int,void*,int *,struct inode*,scalar_t__) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (void*,int *,struct inode*) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(const char *VAR_0, unsigned int VAR_1,
  void *VAR_2, handle_t *VAR_3,
  struct inode *VAR_4,
  struct ext4_ext_path *VAR_5)
{
 int VAR_6;

 if (VAR_5->p_bh) {
  FUNC_1(VAR_4, FUNC_3(VAR_5->p_bh));

  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->p_bh);
 } else {

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 }
 return VAR_6;
}
