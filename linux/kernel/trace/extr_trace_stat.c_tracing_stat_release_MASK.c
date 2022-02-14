
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_session {int dummy; } ;
struct inode {struct stat_session* i_private; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct stat_session*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct stat_session *VAR_2 = VAR_0->i_private;

 FUNC_0(VAR_2);

 return FUNC_1(VAR_0, VAR_1);
}
