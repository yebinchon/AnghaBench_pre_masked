
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_sndbuf; int sk_wmem_alloc; int sk_receive_queue; } ;
struct pep_sock {int tx_credits; int ctrlreq_queue; } ;
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
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct file*,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_11, struct socket *VAR_12,
     poll_table *VAR_13)
{
 struct sock *VAR_14 = VAR_12->sk;
 struct pep_sock *VAR_15 = FUNC_1(VAR_14);
 __poll_t VAR_16 = 0;

 FUNC_2(VAR_11, FUNC_4(VAR_14), VAR_13);

 if (VAR_14->sk_state == VAR_8)
  return VAR_0;
 if (!FUNC_5(&VAR_14->sk_receive_queue))
  VAR_16 |= VAR_2 | VAR_5;
 if (!FUNC_5(&VAR_15->ctrlreq_queue))
  VAR_16 |= VAR_4;
 if (!VAR_16 && VAR_14->sk_state == VAR_9)
  return VAR_1;

 if (VAR_14->sk_state == VAR_10 &&
  FUNC_3(&VAR_14->sk_wmem_alloc) < VAR_14->sk_sndbuf &&
  FUNC_0(&VAR_15->tx_credits))
  VAR_16 |= VAR_3 | VAR_7 | VAR_6;

 return VAR_16;
}
