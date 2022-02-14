
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int prog; } ;
struct sock {int sk_reuseport_cb; scalar_t__ sk_reuseport; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct bpf_prog*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sock*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct bpf_prog*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct sock *VAR_2, struct bpf_prog *VAR_3)
{
 struct sock_reuseport *VAR_4;
 struct bpf_prog *VAR_5;

 if (FUNC_6(VAR_2) && VAR_2->sk_reuseport) {
  int VAR_6 = FUNC_4(VAR_2, 0);

  if (VAR_6)
   return VAR_6;
 } else if (!FUNC_1(VAR_2->sk_reuseport_cb)) {

  return -VAR_0;
 }

 FUNC_7(&VAR_1);
 VAR_4 = FUNC_3(VAR_2->sk_reuseport_cb,
       FUNC_0(&VAR_1));
 VAR_5 = FUNC_3(VAR_4->prog,
          FUNC_0(&VAR_1));
 FUNC_2(VAR_4->prog, VAR_3);
 FUNC_8(&VAR_1);

 FUNC_5(VAR_5);
 return 0;
}
