
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct file {int dummy; } ;
struct dn_scp {int other_receive_queue; } ;
typedef int poll_table ;
typedef int __poll_t ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,struct socket*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_1, struct socket *VAR_2, poll_table *VAR_3)
{
 struct sock *VAR_4 = VAR_2->sk;
 struct dn_scp *VAR_5 = FUNC_0(VAR_4);
 __poll_t VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (!FUNC_2(&VAR_5->other_receive_queue))
  VAR_6 |= VAR_0;

 return VAR_6;
}
