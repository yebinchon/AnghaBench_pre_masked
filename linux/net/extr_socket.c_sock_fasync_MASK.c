
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int fasync_list; } ;
struct socket {struct socket_wq wq; struct sock* sk; } ;
struct sock {int dummy; } ;
struct file {struct socket* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2, struct file *VAR_3, int VAR_4)
{
 struct socket *VAR_5 = VAR_3->private_data;
 struct sock *VAR_6 = VAR_5->sk;
 struct socket_wq *VAR_7 = &VAR_5->wq;

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_6);
 FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7->fasync_list);

 if (!VAR_7->fasync_list)
  FUNC_3(VAR_6, VAR_1);
 else
  FUNC_4(VAR_6, VAR_1);

 FUNC_2(VAR_6);
 return 0;
}
