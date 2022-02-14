
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode_security_struct {scalar_t__ initialized; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (int) ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3,
           struct dentry *VAR_4,
           bool VAR_5)
{
 struct inode_security_struct *VAR_6 = FUNC_2(VAR_3);

 FUNC_1(VAR_5);

 if (VAR_2.initialized &&
     VAR_6->initialized != VAR_1) {
  if (!VAR_5)
   return -VAR_0;






  FUNC_0(VAR_3, VAR_4);
 }
 return 0;
}
