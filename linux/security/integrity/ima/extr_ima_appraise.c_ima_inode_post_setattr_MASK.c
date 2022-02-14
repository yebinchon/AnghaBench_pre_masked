
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int atomic_flags; } ;
struct inode {int i_opflags; int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct dentry*,int ) ;
 int FUNC_2 (int ,int *) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int VAR_7 ;
 struct integrity_iint_cache* FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct dentry *VAR_8)
{
 struct inode *VAR_9 = FUNC_3(VAR_8);
 struct integrity_iint_cache *VAR_10;
 int VAR_11;

 if (!(VAR_7 & VAR_0) || !FUNC_0(VAR_9->i_mode)
     || !(VAR_9->i_opflags & VAR_3))
  return;

 VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_5);
 if (!VAR_11)
  FUNC_1(VAR_8, VAR_6);
 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
  FUNC_6(VAR_1, &VAR_10->atomic_flags);
  if (!VAR_11)
   FUNC_2(VAR_2, &VAR_10->atomic_flags);
 }
}
