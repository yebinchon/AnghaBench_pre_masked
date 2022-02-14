
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {int cong_link_cnt; int group_is_open; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; int sk_state; int sk_receive_queue; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,struct socket*,int *) ;
 struct tipc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int *,int ,char*) ;
 int FUNC_5 (struct tipc_sock*) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_8, struct socket *VAR_9,
         poll_table *VAR_10)
{
 struct sock *VAR_11 = VAR_9->sk;
 struct tipc_sock *VAR_12 = FUNC_2(VAR_11);
 __poll_t VAR_13 = 0;

 FUNC_1(VAR_8, VAR_9, VAR_10);
 FUNC_4(VAR_11, ((void*)0), VAR_7, " ");

 if (VAR_11->sk_shutdown & VAR_5)
  VAR_13 |= VAR_3 | VAR_1 | VAR_4;
 if (VAR_11->sk_shutdown == VAR_6)
  VAR_13 |= VAR_0;

 switch (VAR_11->sk_state) {
 case 130:
  if (!VAR_12->cong_link_cnt && !FUNC_5(VAR_12))
   VAR_13 |= VAR_2;

 case 129:
 case 132:
  if (!FUNC_0(&VAR_11->sk_receive_queue))
   VAR_13 |= VAR_1 | VAR_4;
  break;
 case 128:
  if (VAR_12->group_is_open && !VAR_12->cong_link_cnt)
   VAR_13 |= VAR_2;
  if (!FUNC_3(VAR_11))
   break;
  if (FUNC_0(&VAR_11->sk_receive_queue))
   break;
  VAR_13 |= VAR_1 | VAR_4;
  break;
 case 131:
  VAR_13 = VAR_1 | VAR_4 | VAR_0;
  break;
 }
 return VAR_13;
}
