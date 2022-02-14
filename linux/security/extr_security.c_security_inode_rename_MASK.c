
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ,struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct inode *VAR_2, struct dentry *VAR_3,
      struct inode *VAR_4, struct dentry *VAR_5,
      unsigned int VAR_6)
{
        if (FUNC_4(FUNC_0(FUNC_2(VAR_3)) ||
            (FUNC_3(VAR_5) && FUNC_0(FUNC_2(VAR_5)))))
  return 0;

 if (VAR_6 & VAR_0) {
  int VAR_7 = FUNC_1(VAR_1, 0, VAR_4, VAR_5,
           VAR_2, VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 return FUNC_1(VAR_1, 0, VAR_2, VAR_3,
        VAR_4, VAR_5);
}
