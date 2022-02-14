
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; struct sock* sk; } ;
struct sock {int dummy; } ;
struct inode {int i_mode; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct socket* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct file*) ;
 struct sock* FUNC_3 (struct file*) ;

struct sock *FUNC_4(struct file *VAR_2)
{
 struct sock *VAR_3 = ((void*)0);
 struct inode *VAR_4 = FUNC_2(VAR_2);


 if (FUNC_1(VAR_4->i_mode) && !(VAR_2->f_mode & VAR_0)) {
  struct socket *VAR_5 = FUNC_0(VAR_4);
  struct sock *VAR_6 = VAR_5->sk;


  if (VAR_6 && VAR_5->ops && VAR_5->ops->family == VAR_1)
   VAR_3 = VAR_6;
 } else {

  VAR_3 = FUNC_3(VAR_2);
 }
 return VAR_3;
}
