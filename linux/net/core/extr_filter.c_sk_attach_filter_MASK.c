
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int dummy; } ;
struct sock {int dummy; } ;
struct bpf_prog {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_3 (struct sock_fprog*,struct sock*) ;
 int FUNC_4 (struct bpf_prog*,struct sock*) ;

int FUNC_5(struct sock_fprog *VAR_0, struct sock *VAR_1)
{
 struct bpf_prog *VAR_2 = FUNC_3(VAR_0, VAR_1);
 int VAR_3;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2);
  return VAR_3;
 }

 return 0;
}
