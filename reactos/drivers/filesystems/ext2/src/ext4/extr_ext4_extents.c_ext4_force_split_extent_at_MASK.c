
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {size_t p_depth; int p_ext; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,struct inode*,struct ext4_ext_path**,int ,int,int) ;

__attribute__((used)) static inline int
FUNC_2(void *VAR_5, handle_t *VAR_6, struct inode *VAR_7,
  struct ext4_ext_path **VAR_8, ext4_lblk_t VAR_9,
  int VAR_10)
{
 struct ext4_ext_path *VAR_11 = *VAR_8;
 int VAR_12 = FUNC_0(VAR_11[VAR_11->p_depth].p_ext);

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12 ?
   VAR_0|VAR_1 : 0,
   VAR_2 | VAR_4 |
   (VAR_10 ? VAR_3:0));
}
