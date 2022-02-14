
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int dummy; } ;
struct sock {int dummy; } ;
struct bpf_prog {int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_3 (struct sock_fprog*,struct sock*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*,struct bpf_prog*) ;
 scalar_t__ VAR_1 ;

int FUNC_6(struct sock_fprog *VAR_2, struct sock *VAR_3)
{
 struct bpf_prog *VAR_4 = FUNC_3(VAR_2, VAR_3);
 int VAR_5;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (FUNC_4(VAR_4->len) > VAR_1)
  VAR_5 = -VAR_0;
 else
  VAR_5 = FUNC_5(VAR_3, VAR_4);

 if (VAR_5)
  FUNC_2(VAR_4);

 return VAR_5;
}
