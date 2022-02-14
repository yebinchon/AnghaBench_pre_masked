
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; } ;
struct rose_sock {int * dest_digis; int dest_call; int dest_addr; scalar_t__ dest_ndigis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 struct rose_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;

 if (VAR_7->sk_state != VAR_4) {
  struct rose_sock *VAR_8 = FUNC_1(VAR_7);

  VAR_8->dest_ndigis = 0;
  FUNC_0(&VAR_8->dest_addr, 0, VAR_2);
  FUNC_0(&VAR_8->dest_call, 0, VAR_0);
  FUNC_0(VAR_8->dest_digis, 0, VAR_0 * VAR_3);
  VAR_7->sk_max_ack_backlog = VAR_6;
  VAR_7->sk_state = VAR_4;
  return 0;
 }

 return -VAR_1;
}
