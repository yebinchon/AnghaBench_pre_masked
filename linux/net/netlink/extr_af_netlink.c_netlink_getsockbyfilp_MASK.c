
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; } ;
struct inode {int i_mode; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sock* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct sock*) ;

struct sock *FUNC_5(struct file *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_3);
 struct sock *VAR_5;

 if (!FUNC_2(VAR_4->i_mode))
  return FUNC_0(-VAR_2);

 VAR_5 = FUNC_1(VAR_4)->sk;
 if (VAR_5->sk_family != VAR_0)
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_5);
 return VAR_5;
}
