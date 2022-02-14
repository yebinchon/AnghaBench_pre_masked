
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_cookie {scalar_t__ cookie_key; int cookie_value; } ;
struct bpf_sock_ops {scalar_t__ family; scalar_t__ op; int local_port; int sk; } ;
struct bpf_sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_sock_ops*) ;
 struct socket_cookie* FUNC_1 (int *,int ,int ,int ) ;
 int VAR_2 ;

int FUNC_2(struct bpf_sock_ops *VAR_3)
{
 struct bpf_sock *VAR_4;
 struct socket_cookie *VAR_5;

 if (VAR_3->family != VAR_0)
  return 1;

 if (VAR_3->op != VAR_1)
  return 1;

 if (!VAR_3->sk)
  return 1;

 VAR_5 = FUNC_1(&VAR_2, VAR_3->sk, 0, 0);
 if (!VAR_5)
  return 1;

 if (VAR_5->cookie_key != FUNC_0(VAR_3))
  return 1;

 VAR_5->cookie_value = (VAR_3->local_port << 8) | VAR_5->cookie_value;

 return 1;
}
