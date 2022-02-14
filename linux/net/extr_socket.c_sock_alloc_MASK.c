
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct inode {int i_mode; int * i_op; int i_gid; int i_uid; int i_ino; } ;
struct TYPE_2__ {int mnt_sb; } ;


 struct socket* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct inode* FUNC_4 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

struct socket *FUNC_5(void)
{
 struct inode *VAR_4;
 struct socket *VAR_5;

 VAR_4 = FUNC_4(VAR_2->mnt_sb);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4);

 VAR_4->i_ino = FUNC_3();
 VAR_4->i_mode = VAR_0 | VAR_1;
 VAR_4->i_uid = FUNC_2();
 VAR_4->i_gid = FUNC_1();
 VAR_4->i_op = &VAR_3;

 return VAR_5;
}
