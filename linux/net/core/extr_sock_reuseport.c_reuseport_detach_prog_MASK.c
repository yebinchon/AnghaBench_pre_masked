
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int prog; } ;
struct sock {int sk_reuseport_cb; scalar_t__ sk_reuseport; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct sock_reuseport* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct bpf_prog*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct sock *VAR_3)
{
 struct sock_reuseport *VAR_4;
 struct bpf_prog *VAR_5;

 if (!FUNC_1(VAR_3->sk_reuseport_cb))
  return VAR_3->sk_reuseport ? -VAR_1 : -VAR_0;

 VAR_5 = ((void*)0);
 FUNC_5(&VAR_2);
 VAR_4 = FUNC_2(VAR_3->sk_reuseport_cb,
       FUNC_0(&VAR_2));
 FUNC_3(VAR_4->prog, VAR_5,
      FUNC_0(&VAR_2));
 FUNC_6(&VAR_2);

 if (!VAR_5)
  return -VAR_1;

 FUNC_4(VAR_5);
 return 0;
}
